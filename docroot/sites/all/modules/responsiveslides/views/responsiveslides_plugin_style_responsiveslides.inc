<?php

/**
 * @file
 * Contains the list style plugin.
 */

/**
 * Style plugin to render each item in a ul and configure for responsiveslides.js.
 *
 * @ingroup views_style_plugins
 */
class responsiveslides_plugin_style_responsiveslides extends views_plugin_style {

  // Set default options
  function option_definition() {
    $options = parent::option_definition();
    return $options;
  }

  // Build the settings form for the view.
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    // Gather current options for pre-populating the form.
    $default_options = empty($this->options['responsiveslides']) ? array() : $this->options['responsiveslides'];
    // ResponsiveSlides settings.
    $form['responsiveslides_header'] = array(
      '#markup' => '<h2>' . t('ResponsiveSlides settings') . '</h2>',
    );
    $form['responsiveslides'] = responsiveslides_option_list($default_options);
  }

  // Run any validation on the form settings.
  function options_validate(&$form, &$form_state) {

  }

  // Run any necessary actions on submit.
  function options_submit(&$form, &$form_state) {

  }
}
