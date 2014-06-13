<?php
/**
 * @file
 * about_the_author.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function about_the_author_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function about_the_author_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
