<?php
/**
 * @file
 * variables.features.fe_variable_core.inc
 */

/**
 * Implements hook_variable_core_default_values().
 */
function variables_variable_core_default_values() {
  $variables_core = array();

  $variables_core['admin_theme'] = array(
  'object' => FALSE,
  'value' => 'seven',
);
  $variables_core['annotate_deletion'] = array(
  'object' => FALSE,
  'value' => 1,
);
  $variables_core['annotate_limit_per_node'] = array(
  'object' => FALSE,
  'value' => 1,
);
  $variables_core['annotate_node_types'] = array(
  'object' => FALSE,
  'value' => array(
    'page' => 'page',
    'books' => 0,
    'webform' => 0,
    'flexslider_example' => 0,
    'house' => 0,
    'panel' => 0,
    'slides' => 0,
  ),
);
  $variables_core['theme_default'] = array(
  'object' => FALSE,
  'value' => 'batcopy',
);
  return $variables_core;
}
