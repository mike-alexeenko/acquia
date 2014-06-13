<?php

/**
 * @file
 * Implimentation of hook_form_system_theme_settings_alter()
 *
 * To use replace "custom_theme" with your themeName and uncomment by
 * deleting the comment line to enable.
 *
 * @param $form: Nested array of form elements that comprise the form.
 * @param $form_state: A keyed array containing the current state of the form.
 */

function custom_theme_form_system_theme_settings_alter(&$form, &$form_state)  {

  $form['custom_theme_styles'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable styles'),
    '#default_value' => '1',
    //'#checked' => 'checked',
    '#description' => t('Connect additional styles'),
    '#weight' => -2,
  );
  

}
// */