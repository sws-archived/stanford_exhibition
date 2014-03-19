<?php
/**
 * @file
 * stanford_exhibition_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function stanford_exhibition_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'stanford_exhibitions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Stanford Exhibitions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Exhibitions';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '7';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Sorry, No exhibitions found.';
  $handler->display->display_options['empty']['area']['format'] = 'content_editor_text_format';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Dates Duration */
  $handler->display->display_options['fields']['field_s_exh_dates_duration']['id'] = 'field_s_exh_dates_duration';
  $handler->display->display_options['fields']['field_s_exh_dates_duration']['table'] = 'field_data_field_s_exh_dates_duration';
  $handler->display->display_options['fields']['field_s_exh_dates_duration']['field'] = 'field_s_exh_dates_duration';
  $handler->display->display_options['fields']['field_s_exh_dates_duration']['label'] = '';
  $handler->display->display_options['fields']['field_s_exh_dates_duration']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_exh_dates_duration']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_exh_dates_duration']['settings'] = array(
    'format_type' => 'stanford_month_date_year',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Dates Duration */
  $handler->display->display_options['fields']['field_s_exh_dates_duration_1']['id'] = 'field_s_exh_dates_duration_1';
  $handler->display->display_options['fields']['field_s_exh_dates_duration_1']['table'] = 'field_data_field_s_exh_dates_duration';
  $handler->display->display_options['fields']['field_s_exh_dates_duration_1']['field'] = 'field_s_exh_dates_duration';
  $handler->display->display_options['fields']['field_s_exh_dates_duration_1']['label'] = '';
  $handler->display->display_options['fields']['field_s_exh_dates_duration_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_exh_dates_duration_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_exh_dates_duration_1']['settings'] = array(
    'format_type' => 'stanford_month_date_year',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Dates Duration */
  $handler->display->display_options['fields']['field_s_exh_dates_duration_2']['id'] = 'field_s_exh_dates_duration_2';
  $handler->display->display_options['fields']['field_s_exh_dates_duration_2']['table'] = 'field_data_field_s_exh_dates_duration';
  $handler->display->display_options['fields']['field_s_exh_dates_duration_2']['field'] = 'field_s_exh_dates_duration';
  $handler->display->display_options['fields']['field_s_exh_dates_duration_2']['label'] = '';
  $handler->display->display_options['fields']['field_s_exh_dates_duration_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_exh_dates_duration_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_exh_dates_duration_2']['settings'] = array(
    'format_type' => 'stanford_date_year_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_s_exh_thumb']['id'] = 'field_s_exh_thumb';
  $handler->display->display_options['fields']['field_s_exh_thumb']['table'] = 'field_data_field_s_exh_thumb';
  $handler->display->display_options['fields']['field_s_exh_thumb']['field'] = 'field_s_exh_thumb';
  $handler->display->display_options['fields']['field_s_exh_thumb']['label'] = '';
  $handler->display->display_options['fields']['field_s_exh_thumb']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_exh_thumb']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_exh_thumb']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_exh_thumb']['settings'] = array(
    'image_style' => 'sm-square',
    'image_link' => 'content',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_s_exh_location']['id'] = 'field_s_exh_location';
  $handler->display->display_options['fields']['field_s_exh_location']['table'] = 'field_data_field_s_exh_location';
  $handler->display->display_options['fields']['field_s_exh_location']['field'] = 'field_s_exh_location';
  $handler->display->display_options['fields']['field_s_exh_location']['label'] = '';
  $handler->display->display_options['fields']['field_s_exh_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_exh_location']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="postcard-left">
  <div>
  <div class="event-image">[field_s_exh_thumb]</div>
  </div>
  <div>
  <div class="event-title"><h3>[title]</h3></div>
  <div class="descriptor">
  <div class="event-date-long">[field_s_exh_dates_duration_2]</div>
  <div class="event-location">[field_s_exh_location]</div>
  </div>
  </div>
  </div>';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Sort criterion: Content: Dates Duration -  start date (field_s_exh_dates_duration) */
  $handler->display->display_options['sorts']['field_s_exh_dates_duration_value']['id'] = 'field_s_exh_dates_duration_value';
  $handler->display->display_options['sorts']['field_s_exh_dates_duration_value']['table'] = 'field_data_field_s_exh_dates_duration';
  $handler->display->display_options['sorts']['field_s_exh_dates_duration_value']['field'] = 'field_s_exh_dates_duration_value';
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
    'stanford_exhibition' => 'stanford_exhibition',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Dates Duration -  start date (field_s_exh_dates_duration) */
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value']['id'] = 'field_s_exh_dates_duration_value';
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value']['table'] = 'field_data_field_s_exh_dates_duration';
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value']['field'] = 'field_s_exh_dates_duration_value';
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value']['group'] = 1;
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value']['default_date'] = 'today';
  /* Filter criterion: Content: Dates Duration - end date (field_s_exh_dates_duration:value2) */
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value2']['id'] = 'field_s_exh_dates_duration_value2';
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value2']['table'] = 'field_data_field_s_exh_dates_duration';
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value2']['field'] = 'field_s_exh_dates_duration_value2';
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value2']['group'] = 1;
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value2']['default_date'] = 'today';
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Search Keyword';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
    9 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'body' => 'body',
  );
  /* Filter criterion: Content: Location (field_s_exh_location) */
  $handler->display->display_options['filters']['field_s_exh_location_value']['id'] = 'field_s_exh_location_value';
  $handler->display->display_options['filters']['field_s_exh_location_value']['table'] = 'field_data_field_s_exh_location';
  $handler->display->display_options['filters']['field_s_exh_location_value']['field'] = 'field_s_exh_location_value';
  $handler->display->display_options['filters']['field_s_exh_location_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_s_exh_location_value']['group'] = 1;
  $handler->display->display_options['filters']['field_s_exh_location_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_s_exh_location_value']['expose']['operator_id'] = 'field_s_exh_location_value_op';
  $handler->display->display_options['filters']['field_s_exh_location_value']['expose']['label'] = 'Location';
  $handler->display->display_options['filters']['field_s_exh_location_value']['expose']['operator'] = 'field_s_exh_location_value_op';
  $handler->display->display_options['filters']['field_s_exh_location_value']['expose']['identifier'] = 'field_s_exh_location_value';
  $handler->display->display_options['filters']['field_s_exh_location_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
    9 => 0,
    7 => 0,
    8 => 0,
  );

  /* Display: Current Exhibitions Page */
  $handler = $view->new_display('page', 'Current Exhibitions Page', 'current_exhibitions');
  $handler->display->display_options['display_description'] = 'Current Exhibitions';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Upcoming Exhibitions</h2>';
  $handler->display->display_options['header']['area']['format'] = 'content_editor_text_format';
  $handler->display->display_options['path'] = 'exhibitions';

  /* Display: Upcoming Exhibitions Page */
  $handler = $view->new_display('page', 'Upcoming Exhibitions Page', 'upcoming_exhibitions');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming Exhibitions';
  $handler->display->display_options['display_description'] = 'Upcoming Exhibitions';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_s_exh_dates_duration' => 'field_s_exh_dates_duration',
    'field_s_exh_dates_duration_1' => 'field_s_exh_dates_duration_1',
  );
  $handler->display->display_options['style_options']['default'] = 'field_s_exh_dates_duration';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s_exh_dates_duration' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s_exh_dates_duration_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
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
    'stanford_exhibition' => 'stanford_exhibition',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Dates Duration -  start date (field_s_exh_dates_duration) */
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value']['id'] = 'field_s_exh_dates_duration_value';
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value']['table'] = 'field_data_field_s_exh_dates_duration';
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value']['field'] = 'field_s_exh_dates_duration_value';
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value']['default_date'] = 'tomorrow';
  $handler->display->display_options['path'] = 'exhibitions/future';

  /* Display: Past Exhibitions Page */
  $handler = $view->new_display('page', 'Past Exhibitions Page', 'past_exhibitions');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Past Exhibitions';
  $handler->display->display_options['display_description'] = 'Previously Passed Exhibitions';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_s_exh_dates_duration' => 'field_s_exh_dates_duration',
    'field_s_exh_dates_duration_1' => 'field_s_exh_dates_duration_1',
  );
  $handler->display->display_options['style_options']['default'] = 'field_s_exh_dates_duration';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s_exh_dates_duration' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s_exh_dates_duration_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Dates Duration - end date (field_s_exh_dates_duration:value2) */
  $handler->display->display_options['sorts']['field_s_exh_dates_duration_value2']['id'] = 'field_s_exh_dates_duration_value2';
  $handler->display->display_options['sorts']['field_s_exh_dates_duration_value2']['table'] = 'field_data_field_s_exh_dates_duration';
  $handler->display->display_options['sorts']['field_s_exh_dates_duration_value2']['field'] = 'field_s_exh_dates_duration_value2';
  $handler->display->display_options['sorts']['field_s_exh_dates_duration_value2']['order'] = 'DESC';
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
    'stanford_exhibition' => 'stanford_exhibition',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Dates Duration - end date (field_s_exh_dates_duration:value2) */
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value2']['id'] = 'field_s_exh_dates_duration_value2';
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value2']['table'] = 'field_data_field_s_exh_dates_duration';
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value2']['field'] = 'field_s_exh_dates_duration_value2';
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value2']['operator'] = '<';
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value2']['default_date'] = 'today';
  $handler->display->display_options['path'] = 'exhibitions/history';

  /* Display: Current Exhibitions Block */
  $handler = $view->new_display('block', 'Current Exhibitions Block', 'current_exhibitions_block');
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'current_exhibitions';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Dates Duration */
  $handler->display->display_options['fields']['field_s_exh_dates_duration']['id'] = 'field_s_exh_dates_duration';
  $handler->display->display_options['fields']['field_s_exh_dates_duration']['table'] = 'field_data_field_s_exh_dates_duration';
  $handler->display->display_options['fields']['field_s_exh_dates_duration']['field'] = 'field_s_exh_dates_duration';
  $handler->display->display_options['fields']['field_s_exh_dates_duration']['label'] = '';
  $handler->display->display_options['fields']['field_s_exh_dates_duration']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_exh_dates_duration']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_exh_dates_duration']['settings'] = array(
    'format_type' => 'stanford_month_date_year',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Dates Duration */
  $handler->display->display_options['fields']['field_s_exh_dates_duration_1']['id'] = 'field_s_exh_dates_duration_1';
  $handler->display->display_options['fields']['field_s_exh_dates_duration_1']['table'] = 'field_data_field_s_exh_dates_duration';
  $handler->display->display_options['fields']['field_s_exh_dates_duration_1']['field'] = 'field_s_exh_dates_duration';
  $handler->display->display_options['fields']['field_s_exh_dates_duration_1']['label'] = '';
  $handler->display->display_options['fields']['field_s_exh_dates_duration_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_exh_dates_duration_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_exh_dates_duration_1']['settings'] = array(
    'format_type' => 'stanford_month_date_year',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_s_exh_thumb']['id'] = 'field_s_exh_thumb';
  $handler->display->display_options['fields']['field_s_exh_thumb']['table'] = 'field_data_field_s_exh_thumb';
  $handler->display->display_options['fields']['field_s_exh_thumb']['field'] = 'field_s_exh_thumb';
  $handler->display->display_options['fields']['field_s_exh_thumb']['label'] = '';
  $handler->display->display_options['fields']['field_s_exh_thumb']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_exh_thumb']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_exh_thumb']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_exh_thumb']['settings'] = array(
    'image_style' => 'sm-square',
    'image_link' => 'content',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_s_exh_location']['id'] = 'field_s_exh_location';
  $handler->display->display_options['fields']['field_s_exh_location']['table'] = 'field_data_field_s_exh_location';
  $handler->display->display_options['fields']['field_s_exh_location']['field'] = 'field_s_exh_location';
  $handler->display->display_options['fields']['field_s_exh_location']['label'] = '';
  $handler->display->display_options['fields']['field_s_exh_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_exh_location']['element_label_colon'] = FALSE;
  /* Field: Content: Dates Duration */
  $handler->display->display_options['fields']['field_s_exh_dates_duration_2']['id'] = 'field_s_exh_dates_duration_2';
  $handler->display->display_options['fields']['field_s_exh_dates_duration_2']['table'] = 'field_data_field_s_exh_dates_duration';
  $handler->display->display_options['fields']['field_s_exh_dates_duration_2']['field'] = 'field_s_exh_dates_duration';
  $handler->display->display_options['fields']['field_s_exh_dates_duration_2']['label'] = '';
  $handler->display->display_options['fields']['field_s_exh_dates_duration_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_exh_dates_duration_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_exh_dates_duration_2']['settings'] = array(
    'format_type' => 'stanford_date_year_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="postcard-left">
  <div>
  <div class="event-image">[field_s_exh_thumb]</div>
  </div>
  <div>
  <div class="event-title"><h3>[title]</h3></div>
  <div class="descriptor">
  <div class="event-date-long">[field_s_exh_dates_duration_2]</div>
  <div class="event-location">[field_s_exh_location]</div>
  </div>
  </div>
  </div>';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_wrapper_class'] = 'edit-link';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;

  /* Display: Upcoming Exhibitions Block */
  $handler = $view->new_display('block', 'Upcoming Exhibitions Block', 'upcoming_exhibitions_block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming Exhibitions';
  $handler->display->display_options['display_description'] = 'Upcoming Exhibitions Block';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'upcoming_exhibitions';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Dates Duration */
  $handler->display->display_options['fields']['field_s_exh_dates_duration']['id'] = 'field_s_exh_dates_duration';
  $handler->display->display_options['fields']['field_s_exh_dates_duration']['table'] = 'field_data_field_s_exh_dates_duration';
  $handler->display->display_options['fields']['field_s_exh_dates_duration']['field'] = 'field_s_exh_dates_duration';
  $handler->display->display_options['fields']['field_s_exh_dates_duration']['label'] = '';
  $handler->display->display_options['fields']['field_s_exh_dates_duration']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_exh_dates_duration']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_exh_dates_duration']['settings'] = array(
    'format_type' => 'stanford_month_date_year',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Dates Duration */
  $handler->display->display_options['fields']['field_s_exh_dates_duration_1']['id'] = 'field_s_exh_dates_duration_1';
  $handler->display->display_options['fields']['field_s_exh_dates_duration_1']['table'] = 'field_data_field_s_exh_dates_duration';
  $handler->display->display_options['fields']['field_s_exh_dates_duration_1']['field'] = 'field_s_exh_dates_duration';
  $handler->display->display_options['fields']['field_s_exh_dates_duration_1']['label'] = '';
  $handler->display->display_options['fields']['field_s_exh_dates_duration_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_exh_dates_duration_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_exh_dates_duration_1']['settings'] = array(
    'format_type' => 'stanford_month_date_year',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_s_exh_thumb']['id'] = 'field_s_exh_thumb';
  $handler->display->display_options['fields']['field_s_exh_thumb']['table'] = 'field_data_field_s_exh_thumb';
  $handler->display->display_options['fields']['field_s_exh_thumb']['field'] = 'field_s_exh_thumb';
  $handler->display->display_options['fields']['field_s_exh_thumb']['label'] = '';
  $handler->display->display_options['fields']['field_s_exh_thumb']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_exh_thumb']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_exh_thumb']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_exh_thumb']['settings'] = array(
    'image_style' => 'sm-square',
    'image_link' => 'content',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_s_exh_location']['id'] = 'field_s_exh_location';
  $handler->display->display_options['fields']['field_s_exh_location']['table'] = 'field_data_field_s_exh_location';
  $handler->display->display_options['fields']['field_s_exh_location']['field'] = 'field_s_exh_location';
  $handler->display->display_options['fields']['field_s_exh_location']['label'] = '';
  $handler->display->display_options['fields']['field_s_exh_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_exh_location']['element_label_colon'] = FALSE;
  /* Field: Content: Dates Duration */
  $handler->display->display_options['fields']['field_s_exh_dates_duration_2']['id'] = 'field_s_exh_dates_duration_2';
  $handler->display->display_options['fields']['field_s_exh_dates_duration_2']['table'] = 'field_data_field_s_exh_dates_duration';
  $handler->display->display_options['fields']['field_s_exh_dates_duration_2']['field'] = 'field_s_exh_dates_duration';
  $handler->display->display_options['fields']['field_s_exh_dates_duration_2']['label'] = '';
  $handler->display->display_options['fields']['field_s_exh_dates_duration_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_exh_dates_duration_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_exh_dates_duration_2']['settings'] = array(
    'format_type' => 'stanford_date_year_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="postcard-left">
  <div>
  <div class="event-image">[field_s_exh_thumb]</div>
  </div>
  <div>
  <div class="event-title"><h3>[title]</h3></div>
  <div class="descriptor">
  <div class="event-date-long">[field_s_exh_dates_duration_2]</div>
  <div class="event-location">[field_s_exh_location]</div>
  </div>
  </div>
  </div>';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_wrapper_class'] = 'edit-link';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
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
    'stanford_exhibition' => 'stanford_exhibition',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Dates Duration -  start date (field_s_exh_dates_duration) */
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value']['id'] = 'field_s_exh_dates_duration_value';
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value']['table'] = 'field_data_field_s_exh_dates_duration';
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value']['field'] = 'field_s_exh_dates_duration_value';
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value']['default_date'] = 'tomorrow';

  /* Display: Previous Exhibitions Block */
  $handler = $view->new_display('block', 'Previous Exhibitions Block', 'previous_exhibitions_block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Past Exhibitions';
  $handler->display->display_options['display_description'] = 'Previous Exhibitions Block';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'past_exhibitions';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Dates Duration */
  $handler->display->display_options['fields']['field_s_exh_dates_duration']['id'] = 'field_s_exh_dates_duration';
  $handler->display->display_options['fields']['field_s_exh_dates_duration']['table'] = 'field_data_field_s_exh_dates_duration';
  $handler->display->display_options['fields']['field_s_exh_dates_duration']['field'] = 'field_s_exh_dates_duration';
  $handler->display->display_options['fields']['field_s_exh_dates_duration']['label'] = '';
  $handler->display->display_options['fields']['field_s_exh_dates_duration']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_exh_dates_duration']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_exh_dates_duration']['settings'] = array(
    'format_type' => 'stanford_month_date_year',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Dates Duration */
  $handler->display->display_options['fields']['field_s_exh_dates_duration_1']['id'] = 'field_s_exh_dates_duration_1';
  $handler->display->display_options['fields']['field_s_exh_dates_duration_1']['table'] = 'field_data_field_s_exh_dates_duration';
  $handler->display->display_options['fields']['field_s_exh_dates_duration_1']['field'] = 'field_s_exh_dates_duration';
  $handler->display->display_options['fields']['field_s_exh_dates_duration_1']['label'] = '';
  $handler->display->display_options['fields']['field_s_exh_dates_duration_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_exh_dates_duration_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_exh_dates_duration_1']['settings'] = array(
    'format_type' => 'stanford_month_date_year',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_s_exh_thumb']['id'] = 'field_s_exh_thumb';
  $handler->display->display_options['fields']['field_s_exh_thumb']['table'] = 'field_data_field_s_exh_thumb';
  $handler->display->display_options['fields']['field_s_exh_thumb']['field'] = 'field_s_exh_thumb';
  $handler->display->display_options['fields']['field_s_exh_thumb']['label'] = '';
  $handler->display->display_options['fields']['field_s_exh_thumb']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_exh_thumb']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_exh_thumb']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_exh_thumb']['settings'] = array(
    'image_style' => 'sm-square',
    'image_link' => 'content',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_s_exh_location']['id'] = 'field_s_exh_location';
  $handler->display->display_options['fields']['field_s_exh_location']['table'] = 'field_data_field_s_exh_location';
  $handler->display->display_options['fields']['field_s_exh_location']['field'] = 'field_s_exh_location';
  $handler->display->display_options['fields']['field_s_exh_location']['label'] = '';
  $handler->display->display_options['fields']['field_s_exh_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_exh_location']['element_label_colon'] = FALSE;
  /* Field: Content: Dates Duration */
  $handler->display->display_options['fields']['field_s_exh_dates_duration_2']['id'] = 'field_s_exh_dates_duration_2';
  $handler->display->display_options['fields']['field_s_exh_dates_duration_2']['table'] = 'field_data_field_s_exh_dates_duration';
  $handler->display->display_options['fields']['field_s_exh_dates_duration_2']['field'] = 'field_s_exh_dates_duration';
  $handler->display->display_options['fields']['field_s_exh_dates_duration_2']['label'] = '';
  $handler->display->display_options['fields']['field_s_exh_dates_duration_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_exh_dates_duration_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_exh_dates_duration_2']['settings'] = array(
    'format_type' => 'stanford_date_year_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="postcard-left">
  <div>
  <div class="event-image">[field_s_exh_thumb]</div>
  </div>
  <div>
  <div class="event-title"><h3>[title]</h3></div>
  <div class="descriptor">
  <div class="event-date-long">[field_s_exh_dates_duration_2]</div>
  <div class="event-location">[field_s_exh_location]</div>
  </div>
  </div>
  </div>';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_wrapper_class'] = 'edit-link';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Dates Duration -  start date (field_s_exh_dates_duration) */
  $handler->display->display_options['sorts']['field_s_exh_dates_duration_value']['id'] = 'field_s_exh_dates_duration_value';
  $handler->display->display_options['sorts']['field_s_exh_dates_duration_value']['table'] = 'field_data_field_s_exh_dates_duration';
  $handler->display->display_options['sorts']['field_s_exh_dates_duration_value']['field'] = 'field_s_exh_dates_duration_value';
  $handler->display->display_options['sorts']['field_s_exh_dates_duration_value']['order'] = 'DESC';
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
    'stanford_exhibition' => 'stanford_exhibition',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Dates Duration - end date (field_s_exh_dates_duration:value2) */
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value2']['id'] = 'field_s_exh_dates_duration_value2';
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value2']['table'] = 'field_data_field_s_exh_dates_duration';
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value2']['field'] = 'field_s_exh_dates_duration_value2';
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value2']['operator'] = '<=';
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value2']['default_date'] = 'yesterday';

  /* Display: Upcoming Exhibitions */
  $handler = $view->new_display('attachment', 'Upcoming Exhibitions', 'upcoming_exhibitions_attachment');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming Exhibitions';
  $handler->display->display_options['display_description'] = 'Upcoming Exhibitions';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<h2>Current Exhibitions</h2>';
  $handler->display->display_options['footer']['area']['format'] = 'content_editor_text_format';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Dates Duration */
  $handler->display->display_options['fields']['field_s_exh_dates_duration']['id'] = 'field_s_exh_dates_duration';
  $handler->display->display_options['fields']['field_s_exh_dates_duration']['table'] = 'field_data_field_s_exh_dates_duration';
  $handler->display->display_options['fields']['field_s_exh_dates_duration']['field'] = 'field_s_exh_dates_duration';
  $handler->display->display_options['fields']['field_s_exh_dates_duration']['label'] = '';
  $handler->display->display_options['fields']['field_s_exh_dates_duration']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_exh_dates_duration']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_exh_dates_duration']['settings'] = array(
    'format_type' => 'stanford_month_date_year',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Dates Duration */
  $handler->display->display_options['fields']['field_s_exh_dates_duration_1']['id'] = 'field_s_exh_dates_duration_1';
  $handler->display->display_options['fields']['field_s_exh_dates_duration_1']['table'] = 'field_data_field_s_exh_dates_duration';
  $handler->display->display_options['fields']['field_s_exh_dates_duration_1']['field'] = 'field_s_exh_dates_duration';
  $handler->display->display_options['fields']['field_s_exh_dates_duration_1']['label'] = '';
  $handler->display->display_options['fields']['field_s_exh_dates_duration_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_exh_dates_duration_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_exh_dates_duration_1']['settings'] = array(
    'format_type' => 'stanford_month_date_year',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_s_exh_thumb']['id'] = 'field_s_exh_thumb';
  $handler->display->display_options['fields']['field_s_exh_thumb']['table'] = 'field_data_field_s_exh_thumb';
  $handler->display->display_options['fields']['field_s_exh_thumb']['field'] = 'field_s_exh_thumb';
  $handler->display->display_options['fields']['field_s_exh_thumb']['label'] = '';
  $handler->display->display_options['fields']['field_s_exh_thumb']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_exh_thumb']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_exh_thumb']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_exh_thumb']['settings'] = array(
    'image_style' => 'sm-square',
    'image_link' => 'content',
  );
  /* Field: Content: Dates Duration */
  $handler->display->display_options['fields']['field_s_exh_dates_duration_2']['id'] = 'field_s_exh_dates_duration_2';
  $handler->display->display_options['fields']['field_s_exh_dates_duration_2']['table'] = 'field_data_field_s_exh_dates_duration';
  $handler->display->display_options['fields']['field_s_exh_dates_duration_2']['field'] = 'field_s_exh_dates_duration';
  $handler->display->display_options['fields']['field_s_exh_dates_duration_2']['label'] = '';
  $handler->display->display_options['fields']['field_s_exh_dates_duration_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_exh_dates_duration_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_exh_dates_duration_2']['settings'] = array(
    'format_type' => 'stanford_date_year_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_s_exh_location']['id'] = 'field_s_exh_location';
  $handler->display->display_options['fields']['field_s_exh_location']['table'] = 'field_data_field_s_exh_location';
  $handler->display->display_options['fields']['field_s_exh_location']['field'] = 'field_s_exh_location';
  $handler->display->display_options['fields']['field_s_exh_location']['label'] = '';
  $handler->display->display_options['fields']['field_s_exh_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_exh_location']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="postcard-left">
  <div>
  <div class="event-image">[field_s_exh_thumb]</div>
  </div>
  <div>
  <div class="event-title"><h3>[title]</h3></div>
  <div class="descriptor">
  <div class="event-date-long">[field_s_exh_dates_duration_2]</div>
  <div class="event-location">[field_s_exh_location]</div>
  </div>
  </div>
  </div>';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
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
    'stanford_exhibition' => 'stanford_exhibition',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Dates Duration -  start date (field_s_exh_dates_duration) */
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value']['id'] = 'field_s_exh_dates_duration_value';
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value']['table'] = 'field_data_field_s_exh_dates_duration';
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value']['field'] = 'field_s_exh_dates_duration_value';
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value']['default_date'] = 'tomorrow';
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Search Keyword';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
    9 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'body' => 'body',
  );
  /* Filter criterion: Content: Location (field_s_exh_location) */
  $handler->display->display_options['filters']['field_s_exh_location_value']['id'] = 'field_s_exh_location_value';
  $handler->display->display_options['filters']['field_s_exh_location_value']['table'] = 'field_data_field_s_exh_location';
  $handler->display->display_options['filters']['field_s_exh_location_value']['field'] = 'field_s_exh_location_value';
  $handler->display->display_options['filters']['field_s_exh_location_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_s_exh_location_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_s_exh_location_value']['expose']['operator_id'] = 'field_s_exh_location_value_op';
  $handler->display->display_options['filters']['field_s_exh_location_value']['expose']['label'] = 'Location';
  $handler->display->display_options['filters']['field_s_exh_location_value']['expose']['operator'] = 'field_s_exh_location_value_op';
  $handler->display->display_options['filters']['field_s_exh_location_value']['expose']['identifier'] = 'field_s_exh_location_value';
  $handler->display->display_options['filters']['field_s_exh_location_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
    9 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['displays'] = array(
    'current_exhibitions' => 'current_exhibitions',
    'default' => 0,
    'upcoming_exhibitions' => 0,
    'past_exhibitions' => 0,
    'current_exhibitions_block' => 0,
    'upcoming_exhibitions_block' => 0,
    'previous_exhibitions_block' => 0,
  );
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: Past Attachment */
  $handler = $view->new_display('attachment', 'Past Attachment', 'attachment_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Previous Exhibitions';
  $handler->display->display_options['display_description'] = 'Past Attachment';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Attachment Heading';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<span class="clear-both"></span>
<h2>Previous Exhibitions</h2>';
  $handler->display->display_options['header']['area']['format'] = 'content_editor_text_format';
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
    'stanford_exhibition' => 'stanford_exhibition',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Dates Duration - end date (field_s_exh_dates_duration:value2) */
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value2']['id'] = 'field_s_exh_dates_duration_value2';
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value2']['table'] = 'field_data_field_s_exh_dates_duration';
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value2']['field'] = 'field_s_exh_dates_duration_value2';
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value2']['operator'] = '<=';
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value2']['default_date'] = 'yesterday';
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Search Keyword';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
    9 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'body' => 'body',
  );
  /* Filter criterion: Content: Location (field_s_exh_location) */
  $handler->display->display_options['filters']['field_s_exh_location_value']['id'] = 'field_s_exh_location_value';
  $handler->display->display_options['filters']['field_s_exh_location_value']['table'] = 'field_data_field_s_exh_location';
  $handler->display->display_options['filters']['field_s_exh_location_value']['field'] = 'field_s_exh_location_value';
  $handler->display->display_options['filters']['field_s_exh_location_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_s_exh_location_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_s_exh_location_value']['expose']['operator_id'] = 'field_s_exh_location_value_op';
  $handler->display->display_options['filters']['field_s_exh_location_value']['expose']['label'] = 'Location';
  $handler->display->display_options['filters']['field_s_exh_location_value']['expose']['operator'] = 'field_s_exh_location_value_op';
  $handler->display->display_options['filters']['field_s_exh_location_value']['expose']['identifier'] = 'field_s_exh_location_value';
  $handler->display->display_options['filters']['field_s_exh_location_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
    9 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['displays'] = array(
    'current_exhibitions' => 'current_exhibitions',
    'default' => 0,
    'upcoming_exhibitions' => 0,
    'past_exhibitions' => 0,
    'current_exhibitions_block' => 0,
    'upcoming_exhibitions_block' => 0,
    'previous_exhibitions_block' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;
  $export['stanford_exhibitions'] = $view;

  return $export;
}
