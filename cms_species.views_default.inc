<?php
/**
 * @file
 * cms_species.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function cms_species_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'api_species';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'API Species';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'API Species';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    11 => '11',
    3 => '3',
    10 => '10',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'scientific_name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Node UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'node';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'UUID';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'cms_date';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'species' => 'species',
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['nid']['expose']['operator_id'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['label'] = 'nid';
  $handler->display->display_options['filters']['nid']['expose']['operator'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['identifier'] = 'nid';
  $handler->display->display_options['filters']['nid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Scientific Name';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'scientific_name';
  $handler->display->display_options['filters']['title']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'api-species';

  /* Display: List */
  $handler = $view->new_display('services', 'List', 'services_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'species' => 'species',
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['nid']['expose']['operator_id'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['label'] = 'nid';
  $handler->display->display_options['filters']['nid']['expose']['operator'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['identifier'] = 'nid';
  $handler->display->display_options['filters']['nid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
  );
  $handler->display->display_options['path'] = 'species';

  /* Display: Node */
  $handler = $view->new_display('services', 'Node', 'services_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'scientific_name';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  /* Field: Content: Node UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'node';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'uuid';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'cms_date';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_2']['id'] = 'php_2';
  $handler->display->display_options['fields']['php_2']['table'] = 'views';
  $handler->display->display_options['fields']['php_2']['field'] = 'php';
  $handler->display->display_options['fields']['php_2']['label'] = 'node';
  $handler->display->display_options['fields']['php_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['php_2']['alter']['text'] = '<span>-</span>';
  $handler->display->display_options['fields']['php_2']['use_php_setup'] = 1;
  $handler->display->display_options['fields']['php_2']['php_setup'] = '$view->used_node = "";';
  $handler->display->display_options['fields']['php_2']['php_value'] = '$view->used_node = node_load($row->nid);
return "";';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_7']['id'] = 'php_7';
  $handler->display->display_options['fields']['php_7']['table'] = 'views';
  $handler->display->display_options['fields']['php_7']['field'] = 'php';
  $handler->display->display_options['fields']['php_7']['label'] = 'name';
  $handler->display->display_options['fields']['php_7']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_7']['php_value'] = 'return api_name_group($view->used_node);';
  $handler->display->display_options['fields']['php_7']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_7']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_15']['id'] = 'php_15';
  $handler->display->display_options['fields']['php_15']['table'] = 'views';
  $handler->display->display_options['fields']['php_15']['field'] = 'php';
  $handler->display->display_options['fields']['php_15']['label'] = 'taxonomy';
  $handler->display->display_options['fields']['php_15']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_15']['php_value'] = 'return api_taxonomy_group($view->used_node);';
  $handler->display->display_options['fields']['php_15']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_15']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'assessment_information';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = 'return api_assessment_info_group($view->used_node);';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = 'population';
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_value'] = 'return  api_species_population($view->used_node);';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_3']['id'] = 'php_3';
  $handler->display->display_options['fields']['php_3']['table'] = 'views';
  $handler->display->display_options['fields']['php_3']['field'] = 'php';
  $handler->display->display_options['fields']['php_3']['label'] = 'population_size_trend';
  $handler->display->display_options['fields']['php_3']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_3']['php_value'] = 'return api_species_pop_size($view->used_node);';
  $handler->display->display_options['fields']['php_3']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_3']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_4']['id'] = 'php_4';
  $handler->display->display_options['fields']['php_4']['table'] = 'views';
  $handler->display->display_options['fields']['php_4']['field'] = 'php';
  $handler->display->display_options['fields']['php_4']['label'] = 'geographic_range';
  $handler->display->display_options['fields']['php_4']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_4']['php_value'] = 'return api_geographic_range($view->used_node);';
  $handler->display->display_options['fields']['php_4']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_4']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_6']['id'] = 'php_6';
  $handler->display->display_options['fields']['php_6']['table'] = 'views';
  $handler->display->display_options['fields']['php_6']['field'] = 'php';
  $handler->display->display_options['fields']['php_6']['label'] = 'threats';
  $handler->display->display_options['fields']['php_6']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_6']['php_value'] = 'return api_species_threats($view->used_node);';
  $handler->display->display_options['fields']['php_6']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_6']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_8']['id'] = 'php_8';
  $handler->display->display_options['fields']['php_8']['table'] = 'views';
  $handler->display->display_options['fields']['php_8']['field'] = 'php';
  $handler->display->display_options['fields']['php_8']['label'] = 'critical_sites';
  $handler->display->display_options['fields']['php_8']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_8']['php_value'] = 'return api_field_single_value(\'field_species_critical_sites\', $view->used_node);';
  $handler->display->display_options['fields']['php_8']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_8']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_9']['id'] = 'php_9';
  $handler->display->display_options['fields']['php_9']['table'] = 'views';
  $handler->display->display_options['fields']['php_9']['field'] = 'php';
  $handler->display->display_options['fields']['php_9']['label'] = 'additional_notes';
  $handler->display->display_options['fields']['php_9']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_9']['php_value'] = 'return api_field_single_value(\'field_species_notes\', $view->used_node);';
  $handler->display->display_options['fields']['php_9']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_9']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_10']['id'] = 'php_10';
  $handler->display->display_options['fields']['php_10']['table'] = 'views';
  $handler->display->display_options['fields']['php_10']['field'] = 'php';
  $handler->display->display_options['fields']['php_10']['label'] = 'appendix_1_date';
  $handler->display->display_options['fields']['php_10']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_10']['php_value'] = 'return api_field_single_value(\'field_species_appendix_1_date\', $view->used_node);';
  $handler->display->display_options['fields']['php_10']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_10']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_11']['id'] = 'php_11';
  $handler->display->display_options['fields']['php_11']['table'] = 'views';
  $handler->display->display_options['fields']['php_11']['field'] = 'php';
  $handler->display->display_options['fields']['php_11']['label'] = 'appendix_2_date';
  $handler->display->display_options['fields']['php_11']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_11']['php_value'] = 'return api_field_single_value(\'field_species_appendix_2_date\', $view->used_node);';
  $handler->display->display_options['fields']['php_11']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_11']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_12']['id'] = 'php_12';
  $handler->display->display_options['fields']['php_12']['table'] = 'views';
  $handler->display->display_options['fields']['php_12']['field'] = 'php';
  $handler->display->display_options['fields']['php_12']['label'] = 'concerted_action';
  $handler->display->display_options['fields']['php_12']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_12']['php_value'] = 'return api_field_single_value(\'field_species_concerted_action\', $view->used_node);';
  $handler->display->display_options['fields']['php_12']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_12']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_13']['id'] = 'php_13';
  $handler->display->display_options['fields']['php_13']['table'] = 'views';
  $handler->display->display_options['fields']['php_13']['field'] = 'php';
  $handler->display->display_options['fields']['php_13']['label'] = 'cooperative_action';
  $handler->display->display_options['fields']['php_13']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_13']['php_value'] = 'return api_field_single_value(\'field_species_cooperative_action\', $view->used_node);';
  $handler->display->display_options['fields']['php_13']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_13']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_14']['id'] = 'php_14';
  $handler->display->display_options['fields']['php_14']['table'] = 'views';
  $handler->display->display_options['fields']['php_14']['field'] = 'php';
  $handler->display->display_options['fields']['php_14']['label'] = 'population_global_size';
  $handler->display->display_options['fields']['php_14']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_14']['php_value'] = 'return api_field_single_value(\'field_species_pop_global\', $view->used_node);';
  $handler->display->display_options['fields']['php_14']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_14']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_16']['id'] = 'php_16';
  $handler->display->display_options['fields']['php_16']['table'] = 'views';
  $handler->display->display_options['fields']['php_16']['field'] = 'php';
  $handler->display->display_options['fields']['php_16']['label'] = 'population_global_date';
  $handler->display->display_options['fields']['php_16']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_16']['php_value'] = 'return api_field_single_value(\'field_species_pop_global_date\', $view->used_node);';
  $handler->display->display_options['fields']['php_16']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_16']['php_click_sortable'] = '';
  $handler->display->display_options['path'] = 'species_node';
  $translatables['api_species'] = array(
    t('Master'),
    t('API Species'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('scientific_name'),
    t('nid'),
    t('UUID'),
    t('updated'),
    t('Scientific Name'),
    t('Page'),
    t('List'),
    t('Node'),
    t('uuid'),
    t('node'),
    t('<span>-</span>'),
    t('name'),
    t('taxonomy'),
    t('assessment_information'),
    t('population'),
    t('population_size_trend'),
    t('geographic_range'),
    t('threats'),
    t('critical_sites'),
    t('additional_notes'),
    t('appendix_1_date'),
    t('appendix_2_date'),
    t('concerted_action'),
    t('cooperative_action'),
    t('population_global_size'),
    t('population_global_date'),
  );
  $export['api_species'] = $view;

  $view = new view();
  $view->name = 'species_admin';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Species Admin';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Species';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => 2,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'datatables';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_species_name_en' => 'field_species_name_en',
    'field_species_class' => 'field_species_class',
    'field_species_order' => 'field_species_order',
    'field_species_family' => 'field_species_family',
    'field_species_instruments' => 'field_species_instruments',
    'field_species_appendix_1_date' => 'field_species_appendix_1_date',
    'field_species_appendix_2_date' => 'field_species_appendix_2_date',
    'field_species_appendix_1_date_1' => 'field_species_appendix_1_date_1',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_name_en' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_class' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_order' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_family' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_instruments' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_appendix_1_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_appendix_2_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_appendix_1_date_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['empty_table'] = TRUE;
  $handler->display->display_options['style_options']['elements'] = array(
    'search_box' => 1,
    'table_info' => 1,
    'save_state' => 0,
  );
  $handler->display->display_options['style_options']['layout'] = array(
    'autowidth' => 1,
    'themeroller' => 0,
    'sdom' => '',
  );
  $handler->display->display_options['style_options']['pages'] = array(
    'pagination_style' => 'full_numbers',
    'length_change' => 1,
    'display_length' => '50',
    'processing' => 1,
    'server_side' => 1,
    'items_per_page_options' => '10, 25, 50, All',
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'There are no species matching the selected criteria';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Content: CMS Instruments (field_species_instruments) */
  $handler->display->display_options['relationships']['field_species_instruments_value']['id'] = 'field_species_instruments_value';
  $handler->display->display_options['relationships']['field_species_instruments_value']['table'] = 'field_data_field_species_instruments';
  $handler->display->display_options['relationships']['field_species_instruments_value']['field'] = 'field_species_instruments_value';
  $handler->display->display_options['relationships']['field_species_instruments_value']['delta'] = '-1';
  /* Relationship: Content: Class (field_species_class) */
  $handler->display->display_options['relationships']['field_species_class_tid']['id'] = 'field_species_class_tid';
  $handler->display->display_options['relationships']['field_species_class_tid']['table'] = 'field_data_field_species_class';
  $handler->display->display_options['relationships']['field_species_class_tid']['field'] = 'field_species_class_tid';
  /* Relationship: Content: Order (field_species_order) */
  $handler->display->display_options['relationships']['field_species_order_tid']['id'] = 'field_species_order_tid';
  $handler->display->display_options['relationships']['field_species_order_tid']['table'] = 'field_data_field_species_order';
  $handler->display->display_options['relationships']['field_species_order_tid']['field'] = 'field_species_order_tid';
  /* Relationship: Content: Family (field_species_family) */
  $handler->display->display_options['relationships']['field_species_family_tid']['id'] = 'field_species_family_tid';
  $handler->display->display_options['relationships']['field_species_family_tid']['table'] = 'field_data_field_species_family';
  $handler->display->display_options['relationships']['field_species_family_tid']['field'] = 'field_species_family_tid';
  /* Relationship: Field collection item: Entity with the CMS Instruments (field_species_instruments) */
  $handler->display->display_options['relationships']['field_species_instruments_node']['id'] = 'field_species_instruments_node';
  $handler->display->display_options['relationships']['field_species_instruments_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_species_instruments_node']['field'] = 'field_species_instruments_node';
  $handler->display->display_options['relationships']['field_species_instruments_node']['relationship'] = 'field_species_instruments_value';
  $handler->display->display_options['relationships']['field_species_instruments_node']['label'] = 'species_instrument';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Scientific name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: English */
  $handler->display->display_options['fields']['field_species_name_en']['id'] = 'field_species_name_en';
  $handler->display->display_options['fields']['field_species_name_en']['table'] = 'field_data_field_species_name_en';
  $handler->display->display_options['fields']['field_species_name_en']['field'] = 'field_species_name_en';
  $handler->display->display_options['fields']['field_species_name_en']['label'] = 'Common name';
  $handler->display->display_options['fields']['field_species_name_en']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_species_name_en']['settings'] = array(
    'render_tr' => 1,
    'render_link' => '0',
  );
  /* Field: Content: Class */
  $handler->display->display_options['fields']['field_species_class']['id'] = 'field_species_class';
  $handler->display->display_options['fields']['field_species_class']['table'] = 'field_data_field_species_class';
  $handler->display->display_options['fields']['field_species_class']['field'] = 'field_species_class';
  $handler->display->display_options['fields']['field_species_class']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_species_class']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Order */
  $handler->display->display_options['fields']['field_species_order']['id'] = 'field_species_order';
  $handler->display->display_options['fields']['field_species_order']['table'] = 'field_data_field_species_order';
  $handler->display->display_options['fields']['field_species_order']['field'] = 'field_species_order';
  $handler->display->display_options['fields']['field_species_order']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_species_order']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Family */
  $handler->display->display_options['fields']['field_species_family']['id'] = 'field_species_family';
  $handler->display->display_options['fields']['field_species_family']['table'] = 'field_data_field_species_family';
  $handler->display->display_options['fields']['field_species_family']['field'] = 'field_species_family';
  $handler->display->display_options['fields']['field_species_family']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_species_family']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: CMS Instruments */
  $handler->display->display_options['fields']['field_species_instruments']['id'] = 'field_species_instruments';
  $handler->display->display_options['fields']['field_species_instruments']['table'] = 'field_data_field_species_instruments';
  $handler->display->display_options['fields']['field_species_instruments']['field'] = 'field_species_instruments';
  $handler->display->display_options['fields']['field_species_instruments']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_species_instruments']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_species_instruments']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_species_instruments']['separator'] = '';
  /* Field: Content: Date of entry in Appendix I */
  $handler->display->display_options['fields']['field_species_appendix_1_date']['id'] = 'field_species_appendix_1_date';
  $handler->display->display_options['fields']['field_species_appendix_1_date']['table'] = 'field_data_field_species_appendix_1_date';
  $handler->display->display_options['fields']['field_species_appendix_1_date']['field'] = 'field_species_appendix_1_date';
  $handler->display->display_options['fields']['field_species_appendix_1_date']['label'] = '';
  $handler->display->display_options['fields']['field_species_appendix_1_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_species_appendix_1_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_species_appendix_1_date']['settings'] = array(
    'format_type' => 'year_date_type',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Date of entry in Appendix II */
  $handler->display->display_options['fields']['field_species_appendix_2_date']['id'] = 'field_species_appendix_2_date';
  $handler->display->display_options['fields']['field_species_appendix_2_date']['table'] = 'field_data_field_species_appendix_2_date';
  $handler->display->display_options['fields']['field_species_appendix_2_date']['field'] = 'field_species_appendix_2_date';
  $handler->display->display_options['fields']['field_species_appendix_2_date']['label'] = '';
  $handler->display->display_options['fields']['field_species_appendix_2_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_species_appendix_2_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_species_appendix_2_date']['alter']['text'] = ' / [field_species_appendix_2_date]';
  $handler->display->display_options['fields']['field_species_appendix_2_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_species_appendix_2_date']['settings'] = array(
    'format_type' => 'year_date_type',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Class */
  $handler->display->display_options['fields']['field_species_class_1']['id'] = 'field_species_class_1';
  $handler->display->display_options['fields']['field_species_class_1']['table'] = 'field_data_field_species_class';
  $handler->display->display_options['fields']['field_species_class_1']['field'] = 'field_species_class';
  $handler->display->display_options['fields']['field_species_class_1']['label'] = 'Appendix (App. I / App. II)';
  $handler->display->display_options['fields']['field_species_class_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_species_class_1']['alter']['text'] = '[field_species_appendix_1_date][field_species_appendix_2_date]';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'field_species_class_tid';
  $handler->display->display_options['sorts']['name']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['name']['expose']['label'] = 'Class';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name_1']['id'] = 'name_1';
  $handler->display->display_options['sorts']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name_1']['field'] = 'name';
  $handler->display->display_options['sorts']['name_1']['relationship'] = 'field_species_order_tid';
  $handler->display->display_options['sorts']['name_1']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['name_1']['expose']['label'] = 'Order';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name_2']['id'] = 'name_2';
  $handler->display->display_options['sorts']['name_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name_2']['field'] = 'name';
  $handler->display->display_options['sorts']['name_2']['relationship'] = 'field_species_family_tid';
  $handler->display->display_options['sorts']['name_2']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['name_2']['expose']['label'] = 'Family';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'field_species_instruments_node';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'CMS Instrument';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'species' => 'species',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Class';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'species_class';
  $handler->display->display_options['filters']['tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_1']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_1']['group'] = 1;
  $handler->display->display_options['filters']['tid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid_1']['expose']['operator_id'] = 'tid_1_op';
  $handler->display->display_options['filters']['tid_1']['expose']['label'] = 'Order';
  $handler->display->display_options['filters']['tid_1']['expose']['operator'] = 'tid_1_op';
  $handler->display->display_options['filters']['tid_1']['expose']['identifier'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['tid_1']['vocabulary'] = 'species_order';
  $handler->display->display_options['filters']['tid_1']['error_message'] = FALSE;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid_2']['id'] = 'tid_2';
  $handler->display->display_options['filters']['tid_2']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_2']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_2']['group'] = 1;
  $handler->display->display_options['filters']['tid_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid_2']['expose']['operator_id'] = 'tid_2_op';
  $handler->display->display_options['filters']['tid_2']['expose']['label'] = 'Family';
  $handler->display->display_options['filters']['tid_2']['expose']['operator'] = 'tid_2_op';
  $handler->display->display_options['filters']['tid_2']['expose']['identifier'] = 'tid_2';
  $handler->display->display_options['filters']['tid_2']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid_2']['type'] = 'select';
  $handler->display->display_options['filters']['tid_2']['vocabulary'] = 'species_family';
  $handler->display->display_options['filters']['tid_2']['error_message'] = FALSE;
  /* Filter criterion: Field collection item: CMS Instrument (field_species_instrument) */
  $handler->display->display_options['filters']['field_species_instrument_target_id']['id'] = 'field_species_instrument_target_id';
  $handler->display->display_options['filters']['field_species_instrument_target_id']['table'] = 'field_data_field_species_instrument';
  $handler->display->display_options['filters']['field_species_instrument_target_id']['field'] = 'field_species_instrument_target_id';
  $handler->display->display_options['filters']['field_species_instrument_target_id']['relationship'] = 'field_species_instruments_value';
  $handler->display->display_options['filters']['field_species_instrument_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_species_instrument_target_id']['expose']['operator_id'] = 'field_species_instrument_target_id_op';
  $handler->display->display_options['filters']['field_species_instrument_target_id']['expose']['label'] = 'CMS Instrument';
  $handler->display->display_options['filters']['field_species_instrument_target_id']['expose']['operator'] = 'field_species_instrument_target_id_op';
  $handler->display->display_options['filters']['field_species_instrument_target_id']['expose']['identifier'] = 'field_species_instrument_target_id';

  /* Display: Species listing */
  $handler = $view->new_display('page', 'Species listing', 'species_listing');
  $handler->display->display_options['path'] = 'manage/species/listing';
  $handler->display->display_options['menu']['title'] = 'Scientific name';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'species.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['path'] = 'manage/species/export';

  /* Display: Publication's species */
  $handler = $view->new_display('page', 'Publication\'s species', 'publication_species');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Publication species';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_species_name_en' => 'field_species_name_en',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_name_en' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_species_publication_target_id']['id'] = 'field_species_publication_target_id';
  $handler->display->display_options['relationships']['field_species_publication_target_id']['table'] = 'field_data_field_species_publication';
  $handler->display->display_options['relationships']['field_species_publication_target_id']['field'] = 'field_species_publication_target_id';
  $handler->display->display_options['relationships']['field_species_publication_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Scientific name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: English */
  $handler->display->display_options['fields']['field_species_name_en']['id'] = 'field_species_name_en';
  $handler->display->display_options['fields']['field_species_name_en']['table'] = 'field_data_field_species_name_en';
  $handler->display->display_options['fields']['field_species_name_en']['field'] = 'field_species_name_en';
  $handler->display->display_options['fields']['field_species_name_en']['label'] = 'Common name';
  $handler->display->display_options['fields']['field_species_name_en']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_species_name_en']['settings'] = array(
    'render_tr' => 1,
    'render_link' => '0',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_species_publication_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'species' => 'species',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['path'] = 'publication_species/%';

  /* Display: Instrument species */
  $handler = $view->new_display('page', 'Instrument species', 'instrument_species');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Instrument species';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_species_name_en' => 'field_species_name_en',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_name_en' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: CMS Instruments (field_species_instruments) */
  $handler->display->display_options['relationships']['field_species_instruments_value']['id'] = 'field_species_instruments_value';
  $handler->display->display_options['relationships']['field_species_instruments_value']['table'] = 'field_data_field_species_instruments';
  $handler->display->display_options['relationships']['field_species_instruments_value']['field'] = 'field_species_instruments_value';
  $handler->display->display_options['relationships']['field_species_instruments_value']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_species_instruments_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_species_instrument_target_id']['id'] = 'field_species_instrument_target_id';
  $handler->display->display_options['relationships']['field_species_instrument_target_id']['table'] = 'field_data_field_species_instrument';
  $handler->display->display_options['relationships']['field_species_instrument_target_id']['field'] = 'field_species_instrument_target_id';
  $handler->display->display_options['relationships']['field_species_instrument_target_id']['relationship'] = 'field_species_instruments_value';
  $handler->display->display_options['relationships']['field_species_instrument_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Scientific name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: English */
  $handler->display->display_options['fields']['field_species_name_en']['id'] = 'field_species_name_en';
  $handler->display->display_options['fields']['field_species_name_en']['table'] = 'field_data_field_species_name_en';
  $handler->display->display_options['fields']['field_species_name_en']['field'] = 'field_species_name_en';
  $handler->display->display_options['fields']['field_species_name_en']['label'] = 'Common name';
  $handler->display->display_options['fields']['field_species_name_en']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_species_name_en']['settings'] = array(
    'render_tr' => 1,
    'render_link' => '0',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_species_instrument_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'species' => 'species',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['path'] = 'instrument_species/%';

  /* Display: Country species */
  $handler = $view->new_display('page', 'Country species', 'country_species');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Country species';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_species_name_en' => 'field_species_name_en',
    'field_species_class' => 'field_species_class',
    'field_species_order' => 'field_species_order',
    'field_species_family' => 'field_species_family',
    'field_species_instruments' => 'field_species_instruments',
    'field_species_appendix_1_date' => 'field_species_appendix_1_date',
    'field_species_appendix_2_date' => 'field_species_appendix_2_date',
    'field_species_appendix_1_date_1' => 'field_species_appendix_1_date_1',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_name_en' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_class' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_order' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_family' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_instruments' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_appendix_1_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_appendix_2_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_appendix_1_date_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Range states (field_species_range_states) */
  $handler->display->display_options['relationships']['field_species_range_states_value']['id'] = 'field_species_range_states_value';
  $handler->display->display_options['relationships']['field_species_range_states_value']['table'] = 'field_data_field_species_range_states';
  $handler->display->display_options['relationships']['field_species_range_states_value']['field'] = 'field_species_range_states_value';
  $handler->display->display_options['relationships']['field_species_range_states_value']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_species_range_states_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_species_range_state_target_id']['id'] = 'field_species_range_state_target_id';
  $handler->display->display_options['relationships']['field_species_range_state_target_id']['table'] = 'field_data_field_species_range_state';
  $handler->display->display_options['relationships']['field_species_range_state_target_id']['field'] = 'field_species_range_state_target_id';
  $handler->display->display_options['relationships']['field_species_range_state_target_id']['relationship'] = 'field_species_range_states_value';
  $handler->display->display_options['relationships']['field_species_range_state_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Scientific name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: English */
  $handler->display->display_options['fields']['field_species_name_en']['id'] = 'field_species_name_en';
  $handler->display->display_options['fields']['field_species_name_en']['table'] = 'field_data_field_species_name_en';
  $handler->display->display_options['fields']['field_species_name_en']['field'] = 'field_species_name_en';
  $handler->display->display_options['fields']['field_species_name_en']['label'] = 'Common name';
  $handler->display->display_options['fields']['field_species_name_en']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_species_name_en']['settings'] = array(
    'render_tr' => 1,
    'render_link' => '0',
  );
  /* Field: Content: CMS Instruments */
  $handler->display->display_options['fields']['field_species_instruments']['id'] = 'field_species_instruments';
  $handler->display->display_options['fields']['field_species_instruments']['table'] = 'field_data_field_species_instruments';
  $handler->display->display_options['fields']['field_species_instruments']['field'] = 'field_species_instruments';
  $handler->display->display_options['fields']['field_species_instruments']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_species_instruments']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_species_instruments']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_species_instruments']['separator'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_species_range_state_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'species' => 'species',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['path'] = 'country_species/%';

  /* Display: Project species */
  $handler = $view->new_display('page', 'Project species', 'project_species');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Project species';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_species_name_en' => 'field_species_name_en',
    'field_species_instruments' => 'field_species_instruments',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_name_en' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_instruments' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_species_project_target_id']['id'] = 'field_species_project_target_id';
  $handler->display->display_options['relationships']['field_species_project_target_id']['table'] = 'field_data_field_species_project';
  $handler->display->display_options['relationships']['field_species_project_target_id']['field'] = 'field_species_project_target_id';
  $handler->display->display_options['relationships']['field_species_project_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Scientific name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: English */
  $handler->display->display_options['fields']['field_species_name_en']['id'] = 'field_species_name_en';
  $handler->display->display_options['fields']['field_species_name_en']['table'] = 'field_data_field_species_name_en';
  $handler->display->display_options['fields']['field_species_name_en']['field'] = 'field_species_name_en';
  $handler->display->display_options['fields']['field_species_name_en']['label'] = 'Common name';
  $handler->display->display_options['fields']['field_species_name_en']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_species_name_en']['settings'] = array(
    'render_tr' => 1,
    'render_link' => '0',
  );
  /* Field: Content: CMS Instruments */
  $handler->display->display_options['fields']['field_species_instruments']['id'] = 'field_species_instruments';
  $handler->display->display_options['fields']['field_species_instruments']['table'] = 'field_data_field_species_instruments';
  $handler->display->display_options['fields']['field_species_instruments']['field'] = 'field_species_instruments';
  $handler->display->display_options['fields']['field_species_instruments']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_species_instruments']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_species_instruments']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_species_instruments']['separator'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_species_project_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'species' => 'species',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['path'] = 'project_species/%';

  /* Display: Meetings species */
  $handler = $view->new_display('page', 'Meetings species', 'meeting_species');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Meetings species';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_species_name_en' => 'field_species_name_en',
    'field_species_instruments' => 'field_species_instruments',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_name_en' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_instruments' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_species_meeting_target_id']['id'] = 'field_species_meeting_target_id';
  $handler->display->display_options['relationships']['field_species_meeting_target_id']['table'] = 'field_data_field_species_meeting';
  $handler->display->display_options['relationships']['field_species_meeting_target_id']['field'] = 'field_species_meeting_target_id';
  $handler->display->display_options['relationships']['field_species_meeting_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Scientific name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: English */
  $handler->display->display_options['fields']['field_species_name_en']['id'] = 'field_species_name_en';
  $handler->display->display_options['fields']['field_species_name_en']['table'] = 'field_data_field_species_name_en';
  $handler->display->display_options['fields']['field_species_name_en']['field'] = 'field_species_name_en';
  $handler->display->display_options['fields']['field_species_name_en']['label'] = 'Common name';
  $handler->display->display_options['fields']['field_species_name_en']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_species_name_en']['settings'] = array(
    'render_tr' => 1,
    'render_link' => '0',
  );
  /* Field: Content: CMS Instruments */
  $handler->display->display_options['fields']['field_species_instruments']['id'] = 'field_species_instruments';
  $handler->display->display_options['fields']['field_species_instruments']['table'] = 'field_data_field_species_instruments';
  $handler->display->display_options['fields']['field_species_instruments']['field'] = 'field_species_instruments';
  $handler->display->display_options['fields']['field_species_instruments']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_species_instruments']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_species_instruments']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_species_instruments']['separator'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_species_meeting_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'species' => 'species',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['path'] = 'meeting_species/%';

  /* Display: Plan species */
  $handler = $view->new_display('page', 'Plan species', 'plan_species');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Plan species';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_species_name_en' => 'field_species_name_en',
    'field_species_instruments' => 'field_species_instruments',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_name_en' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_instruments' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_species_plans_target_id']['id'] = 'field_species_plans_target_id';
  $handler->display->display_options['relationships']['field_species_plans_target_id']['table'] = 'field_data_field_species_plans';
  $handler->display->display_options['relationships']['field_species_plans_target_id']['field'] = 'field_species_plans_target_id';
  $handler->display->display_options['relationships']['field_species_plans_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Scientific name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: English */
  $handler->display->display_options['fields']['field_species_name_en']['id'] = 'field_species_name_en';
  $handler->display->display_options['fields']['field_species_name_en']['table'] = 'field_data_field_species_name_en';
  $handler->display->display_options['fields']['field_species_name_en']['field'] = 'field_species_name_en';
  $handler->display->display_options['fields']['field_species_name_en']['label'] = 'Common name';
  $handler->display->display_options['fields']['field_species_name_en']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_species_name_en']['settings'] = array(
    'render_tr' => 1,
    'render_link' => '0',
  );
  /* Field: Content: CMS Instruments */
  $handler->display->display_options['fields']['field_species_instruments']['id'] = 'field_species_instruments';
  $handler->display->display_options['fields']['field_species_instruments']['table'] = 'field_data_field_species_instruments';
  $handler->display->display_options['fields']['field_species_instruments']['field'] = 'field_species_instruments';
  $handler->display->display_options['fields']['field_species_instruments']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_species_instruments']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_species_instruments']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_species_instruments']['separator'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_species_plans_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'species' => 'species',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['path'] = 'plan_species/%';

  /* Display: National report species */
  $handler = $view->new_display('page', 'National report species', 'national_report_species');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'National report species';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_species_name_en' => 'field_species_name_en',
    'field_species_instruments' => 'field_species_instruments',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_name_en' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_instruments' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_species_national_report_target_id']['id'] = 'field_species_national_report_target_id';
  $handler->display->display_options['relationships']['field_species_national_report_target_id']['table'] = 'field_data_field_species_national_report';
  $handler->display->display_options['relationships']['field_species_national_report_target_id']['field'] = 'field_species_national_report_target_id';
  $handler->display->display_options['relationships']['field_species_national_report_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Scientific name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: English */
  $handler->display->display_options['fields']['field_species_name_en']['id'] = 'field_species_name_en';
  $handler->display->display_options['fields']['field_species_name_en']['table'] = 'field_data_field_species_name_en';
  $handler->display->display_options['fields']['field_species_name_en']['field'] = 'field_species_name_en';
  $handler->display->display_options['fields']['field_species_name_en']['label'] = 'Common name';
  $handler->display->display_options['fields']['field_species_name_en']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_species_name_en']['settings'] = array(
    'render_tr' => 1,
    'render_link' => '0',
  );
  /* Field: Content: CMS Instruments */
  $handler->display->display_options['fields']['field_species_instruments']['id'] = 'field_species_instruments';
  $handler->display->display_options['fields']['field_species_instruments']['table'] = 'field_data_field_species_instruments';
  $handler->display->display_options['fields']['field_species_instruments']['field'] = 'field_species_instruments';
  $handler->display->display_options['fields']['field_species_instruments']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_species_instruments']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_species_instruments']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_species_instruments']['separator'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_species_national_report_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'species' => 'species',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['path'] = 'national_report_species/%';

  /* Display: Other document species */
  $handler = $view->new_display('page', 'Other document species', 'other_document_species');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Other document species';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_species_name_en' => 'field_species_name_en',
    'field_species_instruments' => 'field_species_instruments',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_name_en' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_instruments' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_species_document_target_id']['id'] = 'field_species_document_target_id';
  $handler->display->display_options['relationships']['field_species_document_target_id']['table'] = 'field_data_field_species_document';
  $handler->display->display_options['relationships']['field_species_document_target_id']['field'] = 'field_species_document_target_id';
  $handler->display->display_options['relationships']['field_species_document_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Scientific name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: English */
  $handler->display->display_options['fields']['field_species_name_en']['id'] = 'field_species_name_en';
  $handler->display->display_options['fields']['field_species_name_en']['table'] = 'field_data_field_species_name_en';
  $handler->display->display_options['fields']['field_species_name_en']['field'] = 'field_species_name_en';
  $handler->display->display_options['fields']['field_species_name_en']['label'] = 'Common name';
  $handler->display->display_options['fields']['field_species_name_en']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_species_name_en']['settings'] = array(
    'render_tr' => 1,
    'render_link' => '0',
  );
  /* Field: Content: CMS Instruments */
  $handler->display->display_options['fields']['field_species_instruments']['id'] = 'field_species_instruments';
  $handler->display->display_options['fields']['field_species_instruments']['table'] = 'field_data_field_species_instruments';
  $handler->display->display_options['fields']['field_species_instruments']['field'] = 'field_species_instruments';
  $handler->display->display_options['fields']['field_species_instruments']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_species_instruments']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_species_instruments']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_species_instruments']['separator'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_species_document_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'species' => 'species',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['path'] = 'other_document_species/%';
  $translatables['species_admin'] = array(
    t('Master'),
    t('Species'),
    t('more'),
    t('Search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('There are no species matching the selected criteria'),
    t('field collection item from field_species_instruments'),
    t('term from field_species_class'),
    t('term from field_species_order'),
    t('term from field_species_family'),
    t('species_instrument'),
    t('Scientific name'),
    t('Common name'),
    t('Class'),
    t('Order'),
    t('Family'),
    t('CMS Instruments'),
    t(' / [field_species_appendix_2_date]'),
    t('Appendix (App. I / App. II)'),
    t('[field_species_appendix_1_date][field_species_appendix_2_date]'),
    t('CMS Instrument'),
    t('Species listing'),
    t('Data export'),
    t('Publication\'s species'),
    t('Publication species'),
    t('Content entity referenced from field_species_publication'),
    t('All'),
    t('Instrument species'),
    t('Content entity referenced from field_species_instrument'),
    t('Country species'),
    t('field collection item from field_species_range_states'),
    t('Content entity referenced from field_species_range_state'),
    t('Project species'),
    t('Content entity referenced from field_species_project'),
    t('Meetings species'),
    t('Content entity referenced from field_species_meeting'),
    t('Plan species'),
    t('Content entity referenced from field_species_plans'),
    t('National report species'),
    t('Content entity referenced from field_species_national_report'),
    t('Other document species'),
    t('Content entity referenced from field_species_document'),
  );
  $export['species_admin'] = $view;

  return $export;
}
