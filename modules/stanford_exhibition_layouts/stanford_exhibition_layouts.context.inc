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
  $context->name = 'exhibition_view_pages';
  $context->description = 'Exhibition view pages such as past present and future';
  $context->tag = 'Exhibitions';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'exhibitions/history' => 'exhibitions/history',
        'exhibitions' => 'exhibitions',
        'exhibitions/future' => 'exhibitions/future',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-e30231e94dae86d32b18bb157038eb34' => array(
          'module' => 'views',
          'delta' => 'e30231e94dae86d32b18bb157038eb34',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-008bead96b0bb35fa2fe6055a540af13' => array(
          'module' => 'views',
          'delta' => '008bead96b0bb35fa2fe6055a540af13',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Exhibition view pages such as past present and future');
  t('Exhibitions');
  $export['exhibition_view_pages'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'exhibitions_node';
  $context->description = 'Blocks that show up on all Exhibition nodes.';
  $context->tag = 'Exhibitions';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'stanford_exhibition' => 'stanford_exhibition',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-008bead96b0bb35fa2fe6055a540af13' => array(
          'module' => 'views',
          'delta' => '008bead96b0bb35fa2fe6055a540af13',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks that show up on all Exhibition nodes.');
  t('Exhibitions');
  $export['exhibitions_node'] = $context;

  return $export;
}
