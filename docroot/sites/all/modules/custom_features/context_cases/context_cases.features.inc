<?php
/**
 * @file
 * context_cases.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function context_cases_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
