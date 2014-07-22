<?php
/**
 * @file
 * houses.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function houses_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function houses_node_info() {
  $items = array(
    'house' => array(
      'name' => t('House'),
      'base' => 'node_content',
      'description' => t('real estate houses'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
