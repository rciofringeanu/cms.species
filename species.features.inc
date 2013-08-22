<?php
/**
 * @file
 * species.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function species_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function species_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function species_node_info() {
  $items = array(
    'species' => array(
      'name' => t('Species'),
      'base' => 'node_content',
      'description' => t('Used to store information about Convention\'s species and their relation with other entities'),
      'has_title' => '1',
      'title_label' => t('Scientific name'),
      'help' => '',
    ),
  );
  return $items;
}
