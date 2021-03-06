<?php
/**
 * @file
 * Views & Plugin information
 */


/**
 * Implements views_data_alter
 */
function stanford_exhibition_views_views_data() {

}

/**
 * Implements views_data_alter
 */
function stanford_exhibition_views_field_views_data_alter(&$data, &$field, &$module) {

  // $name = $field['field_name'];

  // if ($name == 'field_s_exh_date') {

  //   $data['field_data_field_s_exh_date']['field_s_exh_date_value']['filter']['handler'] = 'exhibition_dates_views_handler_filter';
  //   $data['field_data_field_s_exh_date']['field_s_exh_date_value2']['filter']['handler'] = 'exhibition_dates_views_handler_filter';

  // }

}


/**
 * Implements hook_views_query_alter
 * @return [type] [description]
 */
function stanford_exhibition_views_views_query_alter(&$view, &$query) {

  if ($view->name == 'stanford_exhibitions') {

    // // If current exhibitions. The min date and max date straddle today.
    // if ($view->current_display == "current_exhibitions" || $view->current_display == "current_exhibitions_block") {
    //   // Alter the filters to use the current time instead of a set value.
    //   $view->query->having[1]['conditions'][0]['value'][':field_data_field_s_exh_date_field_s_exh_date_value'] = strtotime('now');
    //   $view->query->having[1]['conditions'][1]['value'][':field_data_field_s_exh_date_field_s_exh_date_value2'] = strtotime('now');
    //   $query = $view->query;
    // }
    // // The upcoming exhibitions min start date is in the future.
    // else if ($view->current_display == "upcoming_exhibitions") {
    //   // Alter the filters to use the current time instead of a set value.
    //   $view->query->having[1]['conditions'][0]['value'][':field_data_field_s_exh_date_field_s_exh_date_value'] = strtotime('now');
    //   $query = $view->query;
    // }
    // // The past exhibitions max end date is in the past.
    // else if ($view->current_display == "past_exhibitions") {
    //   // Alter the filters to use the current time instead of a set value.
    //   $view->query->having[1]['conditions'][0]['value'][':field_data_field_s_exh_date_field_s_exh_date_value2'] = strtotime('now');
    //   $query = $view->query;
    // }
    // else {
      // For all new displays in the exhibitions view lets use a keyword to
      // replace.
      foreach ($view->query->having[1]['conditions'] as &$condition) {
        foreach ($condition['value'] as $key => &$val) {
          if ($val == "ALTERED IN MODULE CODE") {
            $val = strtotime('today');
          }
        }
      }
      $query = $view->query;
    // }

  }

}
