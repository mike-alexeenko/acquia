<?php

/**
 * @file
 * Process theme data.
 *
 * Use this file to run your theme specific implimentations of theme functions,
 * such preprocess, process, alters, and theme function overrides.
 *
 * Preprocess and process functions are used to modify or create variables for
 * templates and theme functions. They are a common theming tool in Drupal, often
 * used as an alternative to directly editing or adding code to templates. Its
 * worth spending some time to learn more about these functions - they are a
 * powerful way to easily modify the output of any template variable.
 * 
 * Preprocess and Process Functions SEE: http://drupal.org/node/254940#variables-processor
 * 1. Rename each function and instance of "custom_theme" to match
 *    your subthemes name, e.g. if your theme name is "footheme" then the function
 *    name will be "footheme_preprocess_hook". Tip - you can search/replace
 *    on "custom_theme".
 * 2. Uncomment the required function to use.
 */


/**
 Preprocess variables for the html template.
 */

 function custom_theme_preprocess_html(&$vars) {
 	global $theme_key;

  // Two examples of adding custom classes to the body.

  // Add a body class for the active theme name.
  // $vars['classes_array'][] = drupal_html_class($theme_key);

  // Browser/platform sniff - adds body classes such as ipad, webkit, chrome etc.
  // $vars['classes_array'][] = css_browser_selector();

 }
// */


/**
 * Process variables for the html template.
 */
function custom_theme_process_html(&$vars) {
}
// */


/**
 * Override or insert variables for the page templates.
 */
function custom_theme_preprocess_page(&$vars) {
	// $variables['custom_theme_styles'] = theme_get_setting('custom_theme_styles');
	// if ($variables['custom_theme_styles']==1) {		
	// 	drupal_add_css(drupal_get_path('theme', 'custom_theme') . '/css/custom_styles1.css');		
	// }
}
function custom_theme_process_page(&$vars) {
}
// */


/**
 * Override or insert variables into the node templates.
 */
function custom_theme_preprocess_node(&$vars) {
}
function custom_theme_process_node(&$vars) {
}
// */


/**
 * Override or insert variables into the comment templates.
 */
function custom_theme_preprocess_comment(&$vars) {
}
function custom_theme_process_comment(&$vars) {
}
// */


/**
 * Override or insert variables into the block templates.
 */
function custom_theme_preprocess_block(&$vars) {
}
function custom_theme_process_block(&$vars) {
}
// */
