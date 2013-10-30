<?php
/**
 * @file
 * species.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function species_views_default_views() {
  $export = array();

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
  $handler->display->display_options['fields']['field_species_appendix_2_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_species_appendix_2_date']['settings'] = array(
    'format_type' => 'year_date_type',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Date of entry in Appendix I */
  $handler->display->display_options['fields']['field_species_appendix_1_date_1']['id'] = 'field_species_appendix_1_date_1';
  $handler->display->display_options['fields']['field_species_appendix_1_date_1']['table'] = 'field_data_field_species_appendix_1_date';
  $handler->display->display_options['fields']['field_species_appendix_1_date_1']['field'] = 'field_species_appendix_1_date';
  $handler->display->display_options['fields']['field_species_appendix_1_date_1']['label'] = 'Appendix (App. I / App. II)';
  $handler->display->display_options['fields']['field_species_appendix_1_date_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_species_appendix_1_date_1']['alter']['text'] = '[field_species_appendix_1_date] / [field_species_appendix_2_date]';
  $handler->display->display_options['fields']['field_species_appendix_1_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_species_appendix_1_date_1']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'species_listing');
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
  $handler->display->display_options['path'] = 'species/export';
  $export['species_admin'] = $view;

  return $export;
}
