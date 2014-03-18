<?php
/**
 * @file
 * stanford_exhibition.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function stanford_exhibition_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_stanford_exhibition';
  $strongarm->value = '';
  $export['ant_pattern_stanford_exhibition'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_stanford_exhibition';
  $strongarm->value = 0;
  $export['ant_php_stanford_exhibition'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_stanford_exhibition';
  $strongarm->value = '2';
  $export['ant_stanford_exhibition'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__stanford_exhibition';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'stanford_8_col_banner' => array(
        'custom_settings' => FALSE,
      ),
      'taxonomy' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '21',
        ),
        'title' => array(
          'weight' => '2',
        ),
        'path' => array(
          'weight' => '20',
        ),
        'redirect' => array(
          'weight' => '19',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__stanford_exhibition'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_stanford_exhibition';
  $strongarm->value = array();
  $export['menu_options_stanford_exhibition'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_stanford_exhibition_importer';
  $strongarm->value = array();
  $export['menu_options_stanford_exhibition_importer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_stanford_exhibition';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_stanford_exhibition'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_stanford_exhibition_importer';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_stanford_exhibition_importer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformscols_field_placements_stanford_exhibition_default';
  $strongarm->value = array(
    'title' => array(
      'region' => 'main',
      'weight' => '0',
      'has_required' => FALSE,
      'title' => 'Title',
      'hidden' => 0,
    ),
    'additional_settings' => array(
      'region' => 'main',
      'weight' => '19',
      'has_required' => FALSE,
      'title' => 'Vertical tabs',
      'hidden' => 0,
    ),
    'actions' => array(
      'region' => 'main',
      'weight' => '20',
      'has_required' => FALSE,
      'title' => 'Save',
      'hidden' => 0,
    ),
    'body' => array(
      'region' => 'main',
      'weight' => '5',
      'has_required' => FALSE,
      'title' => 'Body',
      'hidden' => 0,
    ),
    'field_s_exh_event_id' => array(
      'region' => 'main',
      'weight' => '1',
      'has_required' => FALSE,
      'title' => 'Event Id',
      'hidden' => 1,
    ),
    'field_s_exh_url' => array(
      'region' => 'main',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => 'URL',
      'hidden' => 1,
    ),
    'field_s_exh_tags' => array(
      'region' => 'main',
      'weight' => '18',
      'has_required' => FALSE,
      'title' => 'Tags',
      'hidden' => 0,
    ),
    'field_s_exh_thumb' => array(
      'region' => 'main',
      'weight' => '6',
      'has_required' => FALSE,
      'title' => 'Thumb',
      'hidden' => 0,
    ),
    'field_s_exh_begin_time' => array(
      'region' => 'main',
      'weight' => '7',
      'has_required' => FALSE,
      'title' => 'Begin Time',
      'hidden' => 1,
    ),
    'field_s_exh_end_time' => array(
      'region' => 'main',
      'weight' => '8',
      'has_required' => FALSE,
      'title' => 'End Time',
      'hidden' => 1,
    ),
    'field_s_exh_admission' => array(
      'region' => 'main',
      'weight' => '9',
      'has_required' => FALSE,
      'title' => 'Admission',
      'hidden' => 0,
    ),
    'field_s_exh_sponsor' => array(
      'region' => 'main',
      'weight' => '10',
      'has_required' => FALSE,
      'title' => 'Sponsor',
      'hidden' => 0,
    ),
    'field_s_exh_location' => array(
      'region' => 'main',
      'weight' => '11',
      'has_required' => FALSE,
      'title' => 'Location',
      'hidden' => 0,
    ),
    'field_s_exh_contact_phone' => array(
      'region' => 'main',
      'weight' => '12',
      'has_required' => FALSE,
      'title' => 'Contact Phone',
      'hidden' => 0,
    ),
    'field_s_exh_contact_email' => array(
      'region' => 'main',
      'weight' => '13',
      'has_required' => FALSE,
      'title' => 'Contact Email',
      'hidden' => 0,
    ),
    'field_s_exh_calendar_path' => array(
      'region' => 'main',
      'weight' => '14',
      'has_required' => FALSE,
      'title' => 'Calendar Path',
      'hidden' => 1,
    ),
    'field_s_exh_details_path' => array(
      'region' => 'main',
      'weight' => '15',
      'has_required' => FALSE,
      'title' => 'Details Path',
      'hidden' => 1,
    ),
    'field_s_exh_audience' => array(
      'region' => 'main',
      'weight' => '16',
      'has_required' => FALSE,
      'title' => 'Audience',
      'hidden' => 0,
    ),
    'field_s_exh_map_url' => array(
      'region' => 'main',
      'weight' => '17',
      'has_required' => FALSE,
      'title' => 'Map URL',
      'hidden' => 1,
    ),
    'field_s_exh_date' => array(
      'region' => 'main',
      'weight' => '3',
      'has_required' => FALSE,
      'title' => 'Dates',
      'hidden' => 0,
    ),
    'field_s_exh_dates_duration' => array(
      'region' => 'main',
      'weight' => '4',
      'has_required' => FALSE,
      'title' => 'Dates Duration',
      'hidden' => 0,
    ),
  );
  $export['nodeformscols_field_placements_stanford_exhibition_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_stanford_exhibition';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
    2 => 'revision',
  );
  $export['node_options_stanford_exhibition'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_stanford_exhibition_importer';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_stanford_exhibition_importer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_stanford_exhibition';
  $strongarm->value = '1';
  $export['node_preview_stanford_exhibition'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_stanford_exhibition_importer';
  $strongarm->value = '0';
  $export['node_preview_stanford_exhibition_importer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_stanford_exhibition';
  $strongarm->value = 0;
  $export['node_submitted_stanford_exhibition'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_stanford_exhibition_importer';
  $strongarm->value = 0;
  $export['node_submitted_stanford_exhibition_importer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_stanford_exhibition_importer_pattern';
  $strongarm->value = '';
  $export['pathauto_node_stanford_exhibition_importer_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_stanford_exhibition_pattern';
  $strongarm->value = 'exhibition/[node:title]';
  $export['pathauto_node_stanford_exhibition_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_stanford_exhibition';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_stanford_exhibition'] = $strongarm;

  return $export;
}
