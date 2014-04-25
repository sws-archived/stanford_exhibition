<?php
/**
 * @file
 * stanford_exhibition_layouts.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function stanford_exhibition_layouts_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'exhibitions_on_events_page';
  $context->description = 'Exhibitions on Events Page';
  $context->tag = 'Exhibitions';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'events/upcoming-events' => 'events/upcoming-events',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-0870b2f26d25cb15e901979bcc55506c' => array(
          'module' => 'views',
          'delta' => '0870b2f26d25cb15e901979bcc55506c',
          'region' => 'content_lower',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Exhibitions');
  t('Exhibitions on Events Page');
  $export['exhibitions_on_events_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'exhibitions_search';
  $context->description = 'Exhibitions search pages';
  $context->tag = 'Exhibitions';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'exhibitions/*' => 'exhibitions/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-5406a6eddcbdf5124ef483fef88bb7d0' => array(
          'module' => 'views',
          'delta' => '5406a6eddcbdf5124ef483fef88bb7d0',
          'region' => 'sidebar_first',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Exhibitions');
  t('Exhibitions search pages');
  $export['exhibitions_search'] = $context;

  return $export;
}
