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
  $handler->display->display_options['title'] = 'Current Exhibitions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Dates Duration */
  $handler->display->display_options['fields']['field_s_exh_dates_duration']['id'] = 'field_s_exh_dates_duration';
  $handler->display->display_options['fields']['field_s_exh_dates_duration']['table'] = 'field_data_field_s_exh_dates_duration';
  $handler->display->display_options['fields']['field_s_exh_dates_duration']['field'] = 'field_s_exh_dates_duration';
  $handler->display->display_options['fields']['field_s_exh_dates_duration']['label'] = 'Start Date';
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
  $handler->display->display_options['fields']['field_s_exh_dates_duration_1']['label'] = 'End Date';
  $handler->display->display_options['fields']['field_s_exh_dates_duration_1']['settings'] = array(
    'format_type' => 'stanford_month_date_year',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
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
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value']['default_date'] = 'today';
  /* Filter criterion: Content: Dates Duration - end date (field_s_exh_dates_duration:value2) */
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value2']['id'] = 'field_s_exh_dates_duration_value2';
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value2']['table'] = 'field_data_field_s_exh_dates_duration';
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value2']['field'] = 'field_s_exh_dates_duration_value2';
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value2']['default_date'] = 'today';

  /* Display: Current Exhibitions */
  $handler = $view->new_display('page', 'Current Exhibitions', 'current_exhibitions');
  $handler->display->display_options['display_description'] = 'Current Exhibitions';
  $handler->display->display_options['path'] = 'exhibitions/current';

  /* Display: Current Exhibitions Block */
  $handler = $view->new_display('block', 'Current Exhibitions Block', 'current_exhibitions_block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';

  /* Display: Upcoming Exhibitions */
  $handler = $view->new_display('page', 'Upcoming Exhibitions', 'upcoming_exhibitions');
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
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value']['default_date'] = 'today';
  $handler->display->display_options['path'] = 'exhibitions/future';

  /* Display: Past Exhibitions */
  $handler = $view->new_display('page', 'Past Exhibitions', 'past_exhibitions');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Past Exhibitions';
  $handler->display->display_options['display_description'] = 'Previously Passed Exhibitions';
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
  $export['stanford_exhibitions'] = $view;

  return $export;
}
