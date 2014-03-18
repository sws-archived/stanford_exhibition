<?php
/**
 * @file
 * stanford_exhibition.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function stanford_exhibition_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_descriptor_info|node|stanford_exhibition|default';
  $field_group->group_name = 'group_descriptor_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_exhibition';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Descriptor group',
    'weight' => '1',
    'children' => array(
      0 => 'field_s_exh_admission',
      1 => 'field_s_exh_location',
      2 => 'field_s_exh_dates_duration',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Descriptor group',
      'instance_settings' => array(
        'classes' => 'group-descriptor-info field-group-div descriptor',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_descriptor_info|node|stanford_exhibition|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_floatright|node|stanford_exhibition|default';
  $field_group->group_name = 'group_floatright';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_exhibition';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Float Right',
    'weight' => '0',
    'children' => array(
      0 => 'field_s_exh_thumb',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Float Right',
      'instance_settings' => array(
        'classes' => 'group-floatright field-group-div float-right border-simple-nowidth border-shadow',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_floatright|node|stanford_exhibition|default'] = $field_group;

  return $export;
}
