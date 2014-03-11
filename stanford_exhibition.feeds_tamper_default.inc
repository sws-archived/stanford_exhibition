<?php
/**
 * @file
 * stanford_exhibition.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function stanford_exhibition_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'stanford_exhibition_importer-xpathparser_4-strtotime';
  $feeds_tamper->importer = 'stanford_exhibition_importer';
  $feeds_tamper->source = 'xpathparser:4';
  $feeds_tamper->plugin_id = 'strtotime';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'String to Unix timestamp';
  $export['stanford_exhibition_importer-xpathparser_4-strtotime'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'stanford_exhibition_importer-xpathparser_5-strtotime';
  $feeds_tamper->importer = 'stanford_exhibition_importer';
  $feeds_tamper->source = 'xpathparser:5';
  $feeds_tamper->plugin_id = 'strtotime';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'String to Unix timestamp';
  $export['stanford_exhibition_importer-xpathparser_5-strtotime'] = $feeds_tamper;

  return $export;
}
