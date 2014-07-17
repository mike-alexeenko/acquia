<?php
/**
 * @file
 * panelizer_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function panelizer_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
}
