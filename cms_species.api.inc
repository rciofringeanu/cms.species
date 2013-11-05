<?php

/**
 * Menu callback for species
 *
 * Create an associative array with species UUIDs and title
*/
function cms_species_list_from_cache($website) {
    global $user;
    $response = array();
    $species = array();

    $websites = CMSUtils::get_all_websites();
    if (array_key_exists($website, $websites)) {
        $url = $websites[$website]['url'];
        $cookie_file = CMSUtils::remote_login($url);
        if ($cookie_file && $user->uid) {
            $ch = curl_init();
            $curl_options = array(
                CURLOPT_HEADER => 0,
                CURLOPT_RETURNTRANSFER => 1,
                CURLOPT_COOKIEFILE => $cookie_file,
                CURLOPT_URL => $url . '/api/list/species_from_cache/' . $website,
            );

            curl_setopt_array($ch, $curl_options);
            $species = curl_exec($ch);
            $species = json_decode($species);
            curl_close($ch);
            unset($ch);

            $ch = curl_init();
            $curl_options[CURLOPT_URL] = $url . '/user/logout';
            curl_setopt_array($ch, $curl_options);
            curl_exec($ch);
            unset($ch);

            unlink($cookie_file);
        }

        $response = (array) $species;
    }

    return $response;
}

function api_species_list($type, $profile = '') {
    if (empty($profile)) {
        $profile = CMSUtils::get_current_profile();
    }

    if ($type == 'species_from_cache') {
        $cache_file = drupal_get_path('module', 'cms') . _DS_ . 'remote_cache' . _DS_ . $profile . _DS_  . SPECIES_CACHE_FILENAME;
        $species = array();
        if (file_exists($cache_file)) {
            $species = file_get_contents($cache_file);
            $species = json_decode($species);
        }

        return (array) $species;
    }else {
        $species = CMSSpecies::map_remote_species(CMSSpecies::$bundle, $profile);
        echo json_encode($species);
        drupal_exit();
    }
}

function cms_species_remote_options($data = '', $species_options = array(), $website = '', $websites_list = array()) {
    if (is_array($data) && isset($websites_list[$website])) {
        $remote_website_data = $websites_list[$website];
        foreach ($data as $uuid => $species) {
            $species_options[$website . ':' . $uuid] = $species . ' (' . $remote_website_data['title'] . ')';
        }
    }

    return $species_options;
}
