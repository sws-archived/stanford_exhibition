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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_postcard_content|node|stanford_exhibition|teaser';
  $field_group->group_name = 'group_postcard_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_exhibition';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_s_postcard';
  $field_group->data = array(
    'label' => 'Postcard Content',
    'weight' => '4',
    'children' => array(
      0 => 'field_s_exh_location',
      1 => 'field_s_exh_dates_duration',
      2 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard Content',
      'instance_settings' => array(
        'classes' => 'group-postcard-content field-group-div postcard-content',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_postcard_content|node|stanford_exhibition|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_exh_advanced|node|stanford_exhibition|form';
  $field_group->group_name = 'group_s_exh_advanced';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_exhibition';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Advanced',
    'weight' => '11',
    'children' => array(
      0 => 'field_s_exh_audience',
      1 => 'field_s_exh_tags',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Advanced',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-s-exh-advanced field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_s_exh_advanced|node|stanford_exhibition|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_exh_hidden|node|stanford_exhibition|form';
  $field_group->group_name = 'group_s_exh_hidden';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_exhibition';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'hidden',
    'weight' => '17',
    'children' => array(
      0 => 'field_s_exh_begin_time',
      1 => 'field_s_exh_calendar_path',
      2 => 'field_s_exh_details_path',
      3 => 'field_s_exh_end_time',
      4 => 'field_s_exh_map_url',
      5 => 'field_s_exh_url',
      6 => 'field_exhibition_related_person',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-s-exh-hidden field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_s_exh_hidden|node|stanford_exhibition|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_exhdates|node|stanford_exhibition|form';
  $field_group->group_name = 'group_s_exhdates';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_exhibition';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Exhibition Dates',
    'weight' => '2',
    'children' => array(
      0 => 'field_s_exh_date',
      1 => 'field_s_exh_dates_duration',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Exhibition Dates',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_s_exhdates|node|stanford_exhibition|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_postcard_image|node|stanford_exhibition|teaser';
  $field_group->group_name = 'group_s_postcard_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_exhibition';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_s_postcard';
  $field_group->data = array(
    'label' => 'Postcard Image',
    'weight' => '3',
    'children' => array(
      0 => 'field_s_exh_thumb',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard Image',
      'instance_settings' => array(
        'classes' => 'group-s-postcard-image field-group-div postcard-image',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_postcard_image|node|stanford_exhibition|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_postcard|node|stanford_exhibition|teaser';
  $field_group->group_name = 'group_s_postcard';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_exhibition';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Postcard',
    'weight' => '3',
    'children' => array(
      0 => 'group_postcard_content',
      1 => 'group_s_postcard_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard',
      'instance_settings' => array(
        'classes' => 'group-s-postcard field-group-div postcard clear-both postcard-left',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_postcard|node|stanford_exhibition|teaser'] = $field_group;

  return $export;
}
