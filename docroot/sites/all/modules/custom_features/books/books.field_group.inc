<?php
/**
 * @file
 * books.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function books_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_custom|node|books|form';
  $field_group->group_name = 'group_custom';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'books';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Custom fields',
    'weight' => '1',
    'children' => array(
      0 => 'field_featured_image',
      1 => 'field_price',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Custom fields',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-custom field-group-fieldset',
        'description' => 'additional fields',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_custom|node|books|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ref|node|books|form';
  $field_group->group_name = 'group_ref';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'books';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Reference',
    'weight' => '2',
    'children' => array(
      0 => 'field_related_items',
      1 => 'field_reference',
      2 => 'field_reference_availability',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Reference',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-ref field-group-fieldset',
        'description' => 'includes fields necessary for reference functionality',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_ref|node|books|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_system|node|books|form';
  $field_group->group_name = 'group_system';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'books';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Default fields',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'title',
      2 => 'path',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Default fields',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-system field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_system|node|books|form'] = $field_group;

  return $export;
}
