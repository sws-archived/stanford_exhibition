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
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_aggregator';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'nid' => 'nid',
    'field_s_exh_date' => 'field_s_exh_date',
    'field_s_exh_date_1' => 'field_s_exh_date_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_s_exh_date' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_s_exh_date_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
  );
  $handler->display->display_options['style_options']['totals_per_page'] = '1';
  $handler->display->display_options['style_options']['totals_row_position'] = array(
    1 => 0,
    2 => '2',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: MIN(Content: Dates) */
  $handler->display->display_options['fields']['field_s_exh_date']['id'] = 'field_s_exh_date';
  $handler->display->display_options['fields']['field_s_exh_date']['table'] = 'field_data_field_s_exh_date';
  $handler->display->display_options['fields']['field_s_exh_date']['field'] = 'field_s_exh_date';
  $handler->display->display_options['fields']['field_s_exh_date']['group_type'] = 'min';
  $handler->display->display_options['fields']['field_s_exh_date']['label'] = 'Starting Date';
  $handler->display->display_options['fields']['field_s_exh_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_exh_date']['settings'] = array(
    'format_type' => 'stanford_month_date_year',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_s_exh_date']['delta_offset'] = '0';
  /* Field: MAX(Content: Dates) */
  $handler->display->display_options['fields']['field_s_exh_date_1']['id'] = 'field_s_exh_date_1';
  $handler->display->display_options['fields']['field_s_exh_date_1']['table'] = 'field_data_field_s_exh_date';
  $handler->display->display_options['fields']['field_s_exh_date_1']['field'] = 'field_s_exh_date';
  $handler->display->display_options['fields']['field_s_exh_date_1']['group_type'] = 'max';
  $handler->display->display_options['fields']['field_s_exh_date_1']['label'] = 'End Date';
  $handler->display->display_options['fields']['field_s_exh_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_exh_date_1']['settings'] = array(
    'format_type' => 'stanford_month_date_year',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_s_exh_date_1']['group_column'] = 'value2';
  $handler->display->display_options['fields']['field_s_exh_date_1']['delta_offset'] = '0';
  /* Sort criterion: MIN(Content: Dates -  start date (field_s_exh_date)) */
  $handler->display->display_options['sorts']['field_s_exh_date_value']['id'] = 'field_s_exh_date_value';
  $handler->display->display_options['sorts']['field_s_exh_date_value']['table'] = 'field_data_field_s_exh_date';
  $handler->display->display_options['sorts']['field_s_exh_date_value']['field'] = 'field_s_exh_date_value';
  $handler->display->display_options['sorts']['field_s_exh_date_value']['group_type'] = 'min';
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
  /* Filter criterion: MIN(Content: Dates -  start date (field_s_exh_date)) */
  $handler->display->display_options['filters']['field_s_exh_date_value']['id'] = 'field_s_exh_date_value';
  $handler->display->display_options['filters']['field_s_exh_date_value']['table'] = 'field_data_field_s_exh_date';
  $handler->display->display_options['filters']['field_s_exh_date_value']['field'] = 'field_s_exh_date_value';
  $handler->display->display_options['filters']['field_s_exh_date_value']['group_type'] = 'min';
  $handler->display->display_options['filters']['field_s_exh_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_s_exh_date_value']['value']['value'] = 'ALTERED IN MODULE CODE';
  $handler->display->display_options['filters']['field_s_exh_date_value']['group'] = 1;
  /* Filter criterion: MAX(Content: Dates - end date (field_s_exh_date:value2)) */
  $handler->display->display_options['filters']['field_s_exh_date_value2']['id'] = 'field_s_exh_date_value2';
  $handler->display->display_options['filters']['field_s_exh_date_value2']['table'] = 'field_data_field_s_exh_date';
  $handler->display->display_options['filters']['field_s_exh_date_value2']['field'] = 'field_s_exh_date_value2';
  $handler->display->display_options['filters']['field_s_exh_date_value2']['group_type'] = 'max';
  $handler->display->display_options['filters']['field_s_exh_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_s_exh_date_value2']['value']['value'] = 'ALTERED IN MODULE CODE';
  $handler->display->display_options['filters']['field_s_exh_date_value2']['group'] = 1;
  /* Filter criterion: Content: Tags (field_s_exh_tags) */
  $handler->display->display_options['filters']['field_s_exh_tags_tid']['id'] = 'field_s_exh_tags_tid';
  $handler->display->display_options['filters']['field_s_exh_tags_tid']['table'] = 'field_data_field_s_exh_tags';
  $handler->display->display_options['filters']['field_s_exh_tags_tid']['field'] = 'field_s_exh_tags_tid';
  $handler->display->display_options['filters']['field_s_exh_tags_tid']['operator'] = 'and';
  $handler->display->display_options['filters']['field_s_exh_tags_tid']['value'] = array(
    0 => '16',
    1 => '17',
  );
  $handler->display->display_options['filters']['field_s_exh_tags_tid']['vocabulary'] = 'tags';

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
  $handler->display->display_options['style_plugin'] = 'views_aggregator';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'nid' => 'nid',
    'field_s_exh_date' => 'field_s_exh_date',
    'field_s_exh_date_1' => 'field_s_exh_date_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_s_exh_date' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_s_exh_date_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
  );
  $handler->display->display_options['style_options']['totals_per_page'] = '1';
  $handler->display->display_options['style_options']['totals_row_position'] = array(
    1 => 0,
    2 => '2',
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
  /* Filter criterion: MIN(Content: Dates -  start date (field_s_exh_date)) */
  $handler->display->display_options['filters']['field_s_exh_date_value']['id'] = 'field_s_exh_date_value';
  $handler->display->display_options['filters']['field_s_exh_date_value']['table'] = 'field_data_field_s_exh_date';
  $handler->display->display_options['filters']['field_s_exh_date_value']['field'] = 'field_s_exh_date_value';
  $handler->display->display_options['filters']['field_s_exh_date_value']['group_type'] = 'min';
  $handler->display->display_options['filters']['field_s_exh_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_s_exh_date_value']['value']['value'] = 'ALTERED IN MODULE CODE';
  $handler->display->display_options['filters']['field_s_exh_date_value']['group'] = 1;
  /* Filter criterion: Content: Tags (field_s_exh_tags) */
  $handler->display->display_options['filters']['field_s_exh_tags_tid']['id'] = 'field_s_exh_tags_tid';
  $handler->display->display_options['filters']['field_s_exh_tags_tid']['table'] = 'field_data_field_s_exh_tags';
  $handler->display->display_options['filters']['field_s_exh_tags_tid']['field'] = 'field_s_exh_tags_tid';
  $handler->display->display_options['filters']['field_s_exh_tags_tid']['operator'] = 'and';
  $handler->display->display_options['filters']['field_s_exh_tags_tid']['value'] = array(
    0 => '16',
    1 => '17',
  );
  $handler->display->display_options['filters']['field_s_exh_tags_tid']['vocabulary'] = 'tags';
  $handler->display->display_options['path'] = 'exhibitions/future';

  /* Display: Past Exhibitions */
  $handler = $view->new_display('page', 'Past Exhibitions', 'past_exhibitions');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Past Exhibitions';
  $handler->display->display_options['display_description'] = 'Previously Passed Exhibitions';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: MIN(Content: Dates -  start date (field_s_exh_date)) */
  $handler->display->display_options['sorts']['field_s_exh_date_value']['id'] = 'field_s_exh_date_value';
  $handler->display->display_options['sorts']['field_s_exh_date_value']['table'] = 'field_data_field_s_exh_date';
  $handler->display->display_options['sorts']['field_s_exh_date_value']['field'] = 'field_s_exh_date_value';
  $handler->display->display_options['sorts']['field_s_exh_date_value']['group_type'] = 'min';
  $handler->display->display_options['sorts']['field_s_exh_date_value']['order'] = 'DESC';
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
  /* Filter criterion: MAX(Content: Dates - end date (field_s_exh_date:value2)) */
  $handler->display->display_options['filters']['field_s_exh_date_value2']['id'] = 'field_s_exh_date_value2';
  $handler->display->display_options['filters']['field_s_exh_date_value2']['table'] = 'field_data_field_s_exh_date';
  $handler->display->display_options['filters']['field_s_exh_date_value2']['field'] = 'field_s_exh_date_value2';
  $handler->display->display_options['filters']['field_s_exh_date_value2']['group_type'] = 'max';
  $handler->display->display_options['filters']['field_s_exh_date_value2']['operator'] = '<=';
  $handler->display->display_options['filters']['field_s_exh_date_value2']['value']['value'] = 'ALTERED IN MODULE CODE';
  $handler->display->display_options['filters']['field_s_exh_date_value2']['group'] = 1;
  /* Filter criterion: Content: Tags (field_s_exh_tags) */
  $handler->display->display_options['filters']['field_s_exh_tags_tid']['id'] = 'field_s_exh_tags_tid';
  $handler->display->display_options['filters']['field_s_exh_tags_tid']['table'] = 'field_data_field_s_exh_tags';
  $handler->display->display_options['filters']['field_s_exh_tags_tid']['field'] = 'field_s_exh_tags_tid';
  $handler->display->display_options['filters']['field_s_exh_tags_tid']['operator'] = 'and';
  $handler->display->display_options['filters']['field_s_exh_tags_tid']['value'] = array(
    0 => '16',
    1 => '17',
  );
  $handler->display->display_options['filters']['field_s_exh_tags_tid']['vocabulary'] = 'tags';
  $handler->display->display_options['path'] = 'exhibitions/history';

  $export['stanford_exhibitions'] = $view;

  return $export;
}
