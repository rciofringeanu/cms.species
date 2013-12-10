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

/**
 * @param $type
 * @param string $profile
 *
 * @return array
 */
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

/**
 * @param string $data
 * @param array $species_options
 * @param string $website
 * @param array $websites_list
 *
 * @return array
 */
function cms_species_remote_options($data = '', $species_options = array(), $website = '', $websites_list = array()) {
    if (is_array($data) && isset($websites_list[$website])) {
        $remote_website_data = $websites_list[$website];
        foreach ($data as $uuid => $species) {
            $species_options[$website . ':' . $uuid] = $species . ' (' . $remote_website_data['title'] . ')';
        }
    }

    return $species_options;
}





/**
 * Function used in Services Views to return the name group
 *
 * @author Dragos Dumitrescu
 */

function api_name_group($node) {
    $names = array();
    foreach (API_SPECIES::$name as $field_name => $new_key) {
        if ( !empty($node->{$field_name}[$node->language]) ) {
            $names[$new_key]= $node->{$field_name}[$node->language][0]['value'];
        }
    }
    return $names;
}



/**
 * Function used in Services Views to return the taxonomy group of fields
 *
 * @author Dragos Dumitrescu
 */

function api_taxonomy_group($node) {
    $taxonomy = array();

    foreach (API_SPECIES::$taxonomy['text'] as $field_name => $new_key) {
        $taxonomy[$new_key] = current(API_SPECIES::get_api_field_values($field_name, $node));
    }
    foreach (API_SPECIES::$taxonomy['texts'] as $field_name => $new_key) {
        $taxonomy[$new_key] = API_SPECIES::get_api_field_values($field_name, $node);
    }

    foreach (API_SPECIES::$taxonomy['term'] as $field_name => $new_key) {
        $taxonomy[$new_key] = current(API_SPECIES::get_api_taxonomy_terms($field_name, $node));
    }
    return $taxonomy;
}



/**
 * Function used in Services Views to return the assesment information group of fields
 *
 * @author Dragos Dumitrescu
 */

function api_assessment_info_group($node) {

    foreach ($node->field_species_instruments[$node->language] as $field) {
        $ids []= $field['value'];
    }
    $results = array();
    $instruments = entity_load('field_collection_item', array($ids));
    foreach ($instruments as $instrument) {
        if (isset($instrument->field_species_instrument[$node->language][0])) {
            $instr['instrument'] = API_SPECIES::get_instrument($instrument->field_species_instrument[$node->language][0]['target_id']);
            $instr['date_of_entry'] = $instrument->field_species_instrument_date[$node->language][0]['value'];
            $results []= $instr;
        }
    }
    return $results;
}


/**
 * Function used in Services Views to return field_species_pop field collection
 *
 * @author Dragos Dumitrescu
 */

function api_species_population($node) {
    foreach ($node->field_species_pop[$node->language] as $field) {
        $ids []= $field['value'];
    }
    $results = array();
    $populations = entity_load('field_collection_item', array($ids));
    foreach ($populations as $population) {
        if (isset($population->field_species_pop_li[$node->language][0])) {
            $results []= array(
                'instrument'        => API_SPECIES::get_instrument($population->field_species_pop_li[$node->language][0]['target_id']),
                'name'   => taxonomy_term_load($population->field_species_pop_v[$node->language][0]['tid'])->name,
            );
        }
    }
    return $results;
}


/**
 * Function used in Services Views to return field_species_pop_size field-collection's fields values
 *
 * @author Dragos Dumitrescu
 */

function api_species_pop_size($node) {
    foreach ($node->field_species_pop_size[$node->language] as $field) {
        $ids []= $field['value'];
    }
    $results = array();
    $populations = entity_load('field_collection_item', array($ids));
    foreach ($populations as $population) {
        $result = API_SPECIES::set_api_fields_coll_field(API_SPECIES::$pop_size_fields, $population, $node->language);
        if (isset($population->field_species_pop_size_r[$node->language][0])) {
            $result[API_SPECIES::$pop_size_fields['field_species_pop_size_r']] =
                taxonomy_term_load($population->field_species_pop_size_r[$node->language][0]['tid'])->name;
        }
        $results []= $result;
    }
    return $results;
}


/**
 * Function used in Services Views to return geographic range group
 *
 * @author Dragos Dumitrescu
 */

function api_geographic_range($node) {
    $result = array();
    $result['range_states'] = api_species_range_states($node);
    $result['notes'] = current(API_SPECIES::get_api_field_values('field_species_range_states_notes', $node));
    return $result;
}


/**
 * Function used by api_geographic_range to get  field_species_range_states field colelction's field values
 *
 * @author Dragos Dumitrescu
 */

function api_species_range_states($node) {
    foreach ($node->field_species_range_states[$node->language] as $field) {
        $ids []= $field['value'];
    }
    $results = array();
    $ranges = entity_load('field_collection_item', array($ids));
    foreach ($ranges as $range) {
        $result = API_SPECIES::set_api_fields_coll_field(API_SPECIES::$range_states_fields, $range, $node->language);
        if (isset($range->field_species_range_state[$node->language][0])) {
            $result[API_SPECIES::$range_states_fields['field_species_range_state']] =
                API_SPECIES::get_country($range->field_species_range_state[$node->language][0]['target_id']);
        }
        $results []= $result;
    }
    return $results;
}

function api_species_status_per_country($node) {
    foreach ($node->field_species_status_per_country[$node->language] as $field) {
        $ids []= $field['value'];
    }
    $results = array();
    $countries = entity_load('field_collection_item', array($ids));
    foreach ($countries as $country) {
        if (isset($country->field_species_aewa_status[$node->language][0])) {
            $result[API_SPECIES::$status_country_fields['field_species_aewa_status']] =
                taxonomy_term_load($country->field_species_aewa_status[$node->language][0]['tid'])->name;
        }

        if (isset($country->field_species_status_country[$node->language][0])) {
            $result[API_SPECIES::$status_country_fields['field_species_status_country']] =
                node_load($country->field_species_status_country[$node->language][0]['target_id'])->title;
        }

        $results []= $result;
    }
    return $results;
}


/**
 * Function used in Services views to get  field_species_threats field colelction's field values
 *
 * @author Dragos Dumitrescu
 */

function api_species_threats($node) {
    foreach ($node->field_species_threats[$node->language] as $field) {
        $ids []= $field['value'];
    }
    $results = array();
    $threats = entity_load('field_collection_item', array($ids));
    foreach ($threats as $threat) {
        $result = API_SPECIES::set_api_fields_coll_field(API_SPECIES::$threats, $threat, $node->language);

        if (isset($threat->field_species_threat[$node->language][0])) {
            $result[API_SPECIES::$threats['field_species_threat']] =
                taxonomy_term_load($threat->field_species_threat[$node->language][0]['tid'])->name;
        }

        $results []= $result;
    }
    return $results;
}


/**
 * Function used in Services views to get some text/date field array of values
 *
 * @param   string  $field_name
 * @param   node    $node
 *
 * @author Dragos Dumitrescu
 */

function api_field_values($field_name, $node) {
    return API_SPECIES::get_api_field_values($field_name, $node);
}



/**
 * Function used in Services views to get some text/date field one value
 *
 * @param   string  $field_name
 * @param   node    $node
 *
 * @author Dragos Dumitrescu
 */

function api_field_single_value($field_name, $node) {
    return current(API_SPECIES::get_api_field_values($field_name, $node));
}


/**
 * Class API_SPECIES
 */
class API_SPECIES {
    /**
     * static variables for different groups of fields/ fields collection
     * with field names as keys
     * and api display key as value
     */
    static $pop_size_fields = array(
        "field_species_pop_size_r"      => "population_name",

        "field_species_pop_size_i"      => "size_interval",
        "field_species_pop_size_q"      => "size_quality",
        "field_species_pop_size_e"      => "estimated_size",
        "field_species_pop_size_ref"    => "size_reference",
        "field_species_pop_size_n"      => "size_notes",

        "field_species_pop_trend_i"     => "trend_interval",
        "field_species_rend_size_q"     => "trend_quality",
        "field_species_pop_trend_t"     => "trend",
        "field_species_pop_trend_ref"   => "trend_reference",
        "field_species_pop_trend_n"     => "trend_notes",
    )   ;

    static $range_states_fields = array (
        "field_species_range_state" => "range_state",
        "field_species_territories" => "territories",
        "field_species_range_state_status" => "status",
    );

    static $status_country_fields = array (
        "field_species_status_country" => "country",
        "field_species_aewa_status" => "status",
    );

    static $threats = array (
        "field_species_threat_notes" => "notes",
        "field_species_threat" => "threat",
    );

    static $term_reference = array(
        "field_species_class"       => "class"
    );

    static $name = [
        "field_species_name_en"       => "en",
        "field_species_name_fr"       => "fr",
        "field_species_name_es"       => "es",
        "field_species_name_de"       => "de",
        "field_species_former_name"   => "former",
    ];
    /**
     * text - reffers to single value text fields
     * texts -reffers to multiple value text fields
     * term  - reffers to single term value  term-refference fields
     */
    static $taxonomy = array(
        'texts' => array(
           'field_species_synonyms'            => 'synonyms',
           'field_species_experts'             => 'experts',
        ),
        'text' => array(
            'field_species_standard_reference'  => 'standard_reference',
        ),
        'term' => array(
            'field_species_species'         => 'species',
            'field_species_subspecies'      => 'subspecies',
            'field_species_genus'           => 'genus',
            'field_species_class'           => 'class',
            'field_species_family'          => 'family',
            'field_species_author'          => 'author',
        )
    );

    /*static $assesment = array(
        "field_species_appendix_1_date"       => "appendix_1_date",
        "field_species_appendix_2_date"       => "appendix_2_date",
        "field_species_concerted_action"       => "concerted_action",
        "field_species_cooperative_action"       => "cooperative_action",
        "field_species_pop_global"       => "population_global_size",
        "field_species_pop_global_date"       => "population_global_date",
    );*/


    /**
     * Function to get an array with colelction-field's fields values
     *
     * @param   array   $field_names - array of field names for which return the value (to set just the necessary fields (not like revision_id etc.)
     * @param   string  $field_Collection - field collection name
     * @param   string  $lang   - node language
     *
     * @return  array   array of single values of fields
     *
     * @author Dragos Dumitrescu
     */

    static function set_api_fields_coll_field($field_names, $field_collection, $lang = 'und'){
        $result = array();
        foreach ($field_names as $field_key => $field_name) {
            if (isset($field_collection->{$field_key}[$lang][0]['value'])) {
                $result[$field_name] = $field_collection->{$field_key}[$lang][0]['value'];
            }
        }
        return $result;
    }


    /**
     * Function to get an array of term names for a specific field
     *
     * @param   string  $field_name - field name
     * @param   node  $node   - node
     *
     * @return  array   array of term names (string)
     *
     * @author Dragos Dumitrescu
     */

    static function get_api_taxonomy_terms($field_name, $node) {
        $terms = array();
        if ( !empty($node->{$field_name}[$node->language]) ) {
            foreach ($node->{$field_name}[$node->language] as $term_ref) {
                $terms []= taxonomy_term_load($term_ref['tid'])->name;
            }
        }
        return $terms;
    }



    /**
     * Function to get an array of field values for a specific field
     *
     * @param   string  $field_name - field name
     * @param   node  $node   - node
     *
     * @return array    array of values
     *
     * @author Dragos Dumitrescu
     */

    static function get_api_field_values($field_name, $node) {
        $values = array();
        if ( !empty($node->{$field_name}[$node->language]) ) {
            foreach ($node->{$field_name}[$node->language] as $value) {
                $values []= $value['value'];
            }
        }
        return $values;
    }


    static function get_instrument($nid) {
            $node = node_load($nid);
            if ($node == false) {
                return FALSE;
            }
            $instrument['instrument'] = $node->title;
            $instrument['uuid'] = $node->uuid;
            return $instrument;
        }
    static function get_country($nid) {
        $node = node_load($nid);
        if ($node == false) {
            return FALSE;
        }
        $country['name'] = $node->title;
        $country['uuid'] = $node->uuid;
        $country['iso3l'] = $node->field_country_iso3[$node->language][0]['value'];
        $country['iso2l'] = $node->field_country_iso2[$node->language][0]['value'];
        return $country;
    }

}
