<?php
/**
 * @file
 * city_guides.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function city_guides_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function city_guides_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function city_guides_node_info() {
  $items = array(
    'city_guide' => array(
      'name' => t('City guide'),
      'base' => 'node_content',
      'description' => t('A guide to a popular city.'),
      'has_title' => '1',
      'title_label' => t('City name'),
      'help' => '',
    ),
  );
  return $items;
}
