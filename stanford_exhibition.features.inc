<?php
/**
 * @file
 * stanford_exhibition.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function stanford_exhibition_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function stanford_exhibition_node_info() {
  $items = array(
    'stanford_exhibition' => array(
      'name' => t('Stanford Exhibition'),
      'base' => 'node_content',
      'description' => t('Stanford Exhibition Events Content Type.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'stanford_exhibition_importer' => array(
      'name' => t('Stanford Exhibition Importer'),
      'base' => 'node_content',
      'description' => t('Stanford Exhibition Importer'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
