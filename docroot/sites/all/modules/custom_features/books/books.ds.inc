<?php
/**
 * @file
 * books.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function books_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|books|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'books';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'panels-flexible:2_columns';
  $ds_layout->settings = array(
    'regions' => array(
      'center' => array(
        0 => 'field_price',
        1 => 'field_featured_image',
        2 => 'body',
      ),
      'right_' => array(
        3 => 'field_related_items',
      ),
    ),
    'fields' => array(
      'field_price' => 'center',
      'field_featured_image' => 'center',
      'body' => 'center',
      'field_related_items' => 'right_',
    ),
    'classes' => array(),
    'wrappers' => array(
      'center' => 'div',
      'right_' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|books|full'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function books_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'related_item_block';
  $ds_view_mode->label = 'Related item block';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['related_item_block'] = $ds_view_mode;

  return $export;
}
