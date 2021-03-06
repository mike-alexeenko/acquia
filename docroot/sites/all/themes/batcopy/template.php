<?php

/**
 * Add body classes if certain regions have content.
 * @param $variables
 */
function batcopy_preprocess_html(&$variables) {
  if (!empty($variables['page']['featured'])) {
    $variables['classes_array'][] = 'featured';
  }

  if (!empty($variables['page']['triptych_first'])
    || !empty($variables['page']['triptych_middle'])
    || !empty($variables['page']['triptych_last'])) {
    $variables['classes_array'][] = 'triptych';
  }

  if (!empty($variables['page']['footer_firstcolumn'])
    || !empty($variables['page']['footer_secondcolumn'])
    || !empty($variables['page']['footer_thirdcolumn'])
    || !empty($variables['page']['footer_fourthcolumn'])) {
    if (!empty($variables)) {
      $variables['classes_array'][] = 'footer-columns';
    }
  }

  // Add conditional stylesheets for IE
  drupal_add_css(path_to_theme() . '/css/ie.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'lte IE 7', '!IE' => FALSE), 'preprocess' => FALSE));
  drupal_add_css(path_to_theme() . '/css/ie6.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'IE 6', '!IE' => FALSE), 'preprocess' => FALSE));

  // Add js for mobile redirect
  //drupal_add_js(path_to_theme() . '/js/mobile_redirect.js');
}

/**
 * Override or insert variables into the page template for HTML output.
 */
function batcopy_process_html(&$variables) {
  // Hook into color.module.
  if (module_exists('color')) {
    _color_html_alter($variables);
  }
}

/**
 * Override or insert variables into the page template.
 */
function batcopy_process_page(&$variables) {
  // Hook into color.module.
  if (module_exists('color')) {
    _color_page_alter($variables);
  }
  // Always print the site name and slogan, but if they are toggled off, we'll
  // just hide them visually.
  $variables['hide_site_name']   = theme_get_setting('toggle_name') ? FALSE : TRUE;
  $variables['hide_site_slogan'] = theme_get_setting('toggle_slogan') ? FALSE : TRUE;
  if ($variables['hide_site_name']) {
    // If toggle_name is FALSE, the site_name will be empty, so we rebuild it.
    $variables['site_name'] = filter_xss_admin(variable_get('site_name', 'Drupal'));
  }
  if ($variables['hide_site_slogan']) {
    // If toggle_site_slogan is FALSE, the site_slogan will be empty, so we rebuild it.
    $variables['site_slogan'] = filter_xss_admin(variable_get('site_slogan', ''));
  }
  // Since the title and the shortcut link are both block level elements,
  // positioning them next to each other is much simpler with a wrapper div.
  if (!empty($variables['title_suffix']['add_or_remove_shortcut']) && $variables['title']) {
    // Add a wrapper div using the title_prefix and title_suffix render elements.
    $variables['title_prefix']['shortcut_wrapper'] = array(
      '#markup' => '<div class="shortcut-wrapper clearfix">',
      '#weight' => 100,
    );
    $variables['title_suffix']['shortcut_wrapper'] = array(
      '#markup' => '</div>',
      '#weight' => -99,
    );
    // Make sure the shortcut link is the first item in title_suffix.
    $variables['title_suffix']['add_or_remove_shortcut']['#weight'] = -100;
  }
}

/**
 * Implements hook_preprocess_maintenance_page().
 */
function batcopy_preprocess_maintenance_page(&$variables) {
  // By default, site_name is set to Drupal if no db connection is available
  // or during site installation. Setting site_name to an empty string makes
  // the site and update pages look cleaner.
  // @see template_preprocess_maintenance_page
  if (!$variables['db_is_active']) {
    $variables['site_name'] = '';
  }
  drupal_add_css(drupal_get_path('theme', 'batcopy') . '/css/maintenance-page.css');
}

/**
 * Override or insert variables into the maintenance page template.
 */
function batcopy_process_maintenance_page(&$variables) {
  // Always print the site name and slogan, but if they are toggled off, we'll
  // just hide them visually.
  $variables['hide_site_name']   = theme_get_setting('toggle_name') ? FALSE : TRUE;
  $variables['hide_site_slogan'] = theme_get_setting('toggle_slogan') ? FALSE : TRUE;
  if ($variables['hide_site_name']) {
    // If toggle_name is FALSE, the site_name will be empty, so we rebuild it.
    $variables['site_name'] = filter_xss_admin(variable_get('site_name', 'Drupal'));
  }
  if ($variables['hide_site_slogan']) {
    // If toggle_site_slogan is FALSE, the site_slogan will be empty, so we rebuild it.
    $variables['site_slogan'] = filter_xss_admin(variable_get('site_slogan', ''));
  }
}

/**
 * Override or insert variables into the node template.
 */
function batcopy_preprocess_node(&$variables) {
  if ($variables['view_mode'] == 'full' && node_is_page($variables['node'])) {
    $variables['classes_array'][] = 'node-full';
  }
}

/**
 * Override or insert variables into the block template.
 */
function batcopy_preprocess_block(&$variables) {
  // In the header region visually hide block titles.
  if ($variables['block']->region == 'header') {
    $variables['title_attributes_array']['class'][] = 'element-invisible';
  }
}

/**
 * Implements theme_menu_tree().
 */
function batcopy_menu_tree($variables) {
  return '<ul class="menu clearfix">' . $variables['tree'] . '</ul>';
}

/**
 * Implements theme_field__field_type().
 */
function batcopy_field__taxonomy_term_reference($variables) {
  $output = '';

  // Render the label, if it's not hidden.
  if (!$variables['label_hidden']) {
    $output .= '<h3 class="field-label">' . $variables['label'] . ': </h3>';
  }

  // Render the items.
  $output .= ($variables['element']['#label_display'] == 'inline') ? '<ul class="links inline">' : '<ul class="links">';
  foreach ($variables['items'] as $delta => $item) {
    $output .= '<li class="taxonomy-term-reference-' . $delta . '"' . $variables['item_attributes'][$delta] . '>' . drupal_render($item) . '</li>';
  }
  $output .= '</ul>';

  // Render the top-level DIV.
  $output = '<div class="' . $variables['classes'] . (!in_array('clearfix', $variables['classes_array']) ? ' clearfix' : '') . '"' . $variables['attributes'] .'>' . $output . '</div>';

  return $output;
}

/**
 * Change search result ouput to accept Manage Display settings.
 */
function batcopy_preprocess_search_result(&$variables) {
  $result = $variables['result'];
  if (isset($result['node'])) {
    $variables['snippet'] = $result['node']->rendered;
  }
}

/**
 * Search form output alter.
 */
function batcopy_form_alter(&$form, &$form_state, $form_id) {
  // add js for the particular webform node
  if ($form_id == 'webform_client_form_80') {
    $form['#attached']['js'] = array(
      drupal_get_path('module', 'webform') . '/js/form.js',
    );
  }
  if ($form_id == 'search_block_form') {
    $form['search_block_form']['#default_value'] = t('Start typing here');
    $form['actions']['submit'] = array('#type' => 'submit', '#value' => 'aa');
    // Add extra attributes to the text box
    $form['search_block_form']['#attributes']['onblur'] = "if (this.value == '') {this.value = 'Start typing here';}";
    $form['search_block_form']['#attributes']['onfocus'] = "if (this.value == 'Start typing here') {this.value = '';}";
    // Prevent user from searching the default text
    $form['#attributes']['onsubm  it'] = "if(this.search_block_form.value=='Search'){ alert('Please enter a search'); return false; }";
    // Alternative (HTML5) placeholder attribute instead of using the javascript
    $form['search_block_form']['#attributes']['placeholder'] = t('placeholder here');
  }
}

/**
 * Books page view field alter.
 */
function batcopy_preprocess_views_view_fields(&$vars) {
  if ($vars['view']->name=='books' && $vars['view']->current_display=='page_1') {
    if (preg_match("/book-/", $vars['fields']['title']->content)) {
      $vars['fields']['title']->wrapper_suffix='<em><sup>'.t("modified book").'</sup></em></div>';
    } else {
      $vars['fields']['title']->wrapper_suffix='<em><sup>'.t("sample book").'</sup></em></div>';
    }
  }
}

/**
 * Slides view result shuffle; connect css file.
 */
function batcopy_views_pre_render(&$view) {
  if ($view->name=='slides') {
    shuffle($view->result);
    drupal_add_css(path_to_theme().'/css/slides.css', array('group'=>CSS_THEME, 'weight'=>-10));
  }
}

/**
 * Switch home page template to page--home.tpl.php
 */
function batcopy_preprocess_page(&$vars) {
  if ($vars['is_front']=='true') {
    $vars['theme_hook_suggestions'][1] = 'page__home';
  }
  if (arg(0)=='property') {
    drupal_add_js(drupal_get_path('theme', 'batcopy') . '/js/property.js');
    $vars['scripts'] = drupal_get_js();
  }
}
?>
