<?php
/**
 * @file
 * stanford_exhibition.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function stanford_exhibition_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'stanford_exhibition_importer';
  $feeds_importer->config = array(
    'name' => 'Stanford Exhibition Importer',
    'description' => 'Stanford Exhibition Importer from Stanford events feed',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:6' => 'eventID',
          'xpathparser:3' => 'url',
          'xpathparser:0' => 'eventID',
          'xpathparser:1' => 'Category/categoryName',
          'xpathparser:2' => 'Media/imageUrl',
          'xpathparser:4' => 'Instance/isoEventEndDate',
          'xpathparser:5' => 'Instance/isoEventDate',
          'xpathparser:7' => 'description',
          'xpathparser:8' => 'title',
          'xpathparser:9' => 'admissionDescription',
          'xpathparser:10' => 'Audience/audienceName',
          'xpathparser:11' => 'beginTime',
          'xpathparser:12' => 'calendarpath',
          'xpathparser:13' => 'contactEmail',
          'xpathparser:14' => 'contactPhone',
          'xpathparser:15' => 'detailpath',
          'xpathparser:16' => 'endTime',
          'xpathparser:17' => 'locationText',
          'xpathparser:18' => 'mapUrl',
          'xpathparser:19' => 'sponsor',
          'xpathparser:20' => '',
          'xpathparser:21' => '',
        ),
        'rawXML' => array(
          'xpathparser:6' => 0,
          'xpathparser:3' => 0,
          'xpathparser:0' => 0,
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:4' => 0,
          'xpathparser:5' => 0,
          'xpathparser:7' => 0,
          'xpathparser:8' => 0,
          'xpathparser:9' => 0,
          'xpathparser:10' => 0,
          'xpathparser:11' => 0,
          'xpathparser:12' => 0,
          'xpathparser:13' => 0,
          'xpathparser:14' => 0,
          'xpathparser:15' => 0,
          'xpathparser:16' => 0,
          'xpathparser:17' => 0,
          'xpathparser:18' => 0,
          'xpathparser:19' => 0,
          'xpathparser:20' => 0,
          'xpathparser:21' => 0,
        ),
        'context' => '//EventList/Event',
        'exp' => array(
          'errors' => 0,
          'debug' => array(
            'context' => 0,
            'xpathparser:6' => 0,
            'xpathparser:3' => 0,
            'xpathparser:0' => 0,
            'xpathparser:1' => 0,
            'xpathparser:2' => 0,
            'xpathparser:4' => 0,
            'xpathparser:5' => 0,
            'xpathparser:7' => 0,
            'xpathparser:8' => 0,
            'xpathparser:9' => 0,
            'xpathparser:10' => 0,
            'xpathparser:11' => 0,
            'xpathparser:12' => 0,
            'xpathparser:13' => 0,
            'xpathparser:14' => 0,
            'xpathparser:15' => 0,
            'xpathparser:16' => 0,
            'xpathparser:17' => 0,
            'xpathparser:18' => 0,
            'xpathparser:19' => 0,
            'xpathparser:20' => 0,
            'xpathparser:21' => 0,
          ),
        ),
        'allow_override' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:6',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'xpathparser:3',
            'target' => 'url',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'xpathparser:0',
            'target' => 'field_s_exh_event_id',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:1',
            'target' => 'field_s_exh_tags',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          4 => array(
            'source' => 'xpathparser:2',
            'target' => 'field_s_exh_thumb',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'xpathparser:4',
            'target' => 'field_s_exh_date:end',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:5',
            'target' => 'field_s_exh_date:start',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'xpathparser:7',
            'target' => 'body',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'xpathparser:8',
            'target' => 'title',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'xpathparser:9',
            'target' => 'field_s_exh_admission',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'xpathparser:10',
            'target' => 'field_s_exh_audience',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          11 => array(
            'source' => 'xpathparser:11',
            'target' => 'field_s_exh_begin_time',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'xpathparser:12',
            'target' => 'field_s_exh_calendar_path',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'xpathparser:13',
            'target' => 'field_s_exh_contact_email',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'xpathparser:14',
            'target' => 'field_s_exh_contact_phone',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'xpathparser:15',
            'target' => 'field_s_exh_details_path',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'xpathparser:16',
            'target' => 'field_s_exh_end_time',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'xpathparser:17',
            'target' => 'field_s_exh_location',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'xpathparser:18',
            'target' => 'field_s_exh_map_url:url',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'xpathparser:19',
            'target' => 'field_s_exh_sponsor',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'content_editor_text_format',
        'skip_hash_check' => 0,
        'bundle' => 'stanford_exhibition',
      ),
    ),
    'content_type' => 'stanford_exhibition_importer',
    'update' => 0,
    'import_period' => '3600',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['stanford_exhibition_importer'] = $feeds_importer;

  return $export;
}
