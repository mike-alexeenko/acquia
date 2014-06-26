<?php

/**
 * @file
 * Theme hooks for responsiveslides.module.
 */

/**
 * Themes a responsiveslides view.
 *
 * @param array $vars
 *   The $vars array coming from views.  Includes:
 *   - view:           object
 *   - options:        array
 *   - grouping_level: integer
 *   - rows:           array
 *   - title:          string
 */
function template_preprocess_responsiveslides(&$vars) {
  $rs_options = $vars['options']['responsiveslides'];
  $path = drupal_get_path('module', 'responsiveslides');
  $styles = responsiveslides_styles();
  $js_settings = array();
  // Gather style's info and add any assets required.
  $style_info = $styles[$rs_options['style']];
  if (!empty($style_info['css_files'])) {
    foreach ($style_info['css_files'] as $style_css) {
      drupal_add_css($style_css);
    }
  }
  // Add to classes_array even though views isn't picking it up currently.
  $vars['classes_array'][] = 'rs-style-' . $rs_options['style'];
  // Namespace used to specify view.
  $vars['namespace'] = $namespace = $vars['view']->name . '-' . $vars['view']->current_display;
  // Classes passed and used on main <ul> for slider.
  $vars['ul_classes'] = 'rslides '. $namespace . ' rs-style-'. $rs_options['style'];
  $js_settings[$namespace] = array();
  $js_settings[$namespace]['namespace'] = $namespace;
  // Add responsiveslides.js.
  drupal_add_js($path . '/js/ResponsiveSlides/responsiveslides.min.js');
  drupal_add_css($path . '/js/ResponsiveSlides/responsiveslides.css');
  // Add our integration JS.
  drupal_add_js($path . '/js/responsiveslides_integration.js');
  // Add options set in views.
  $js_settings[$namespace] += $rs_options;
  drupal_add_js(array('responsiveslides' => $js_settings), 'setting');
}
