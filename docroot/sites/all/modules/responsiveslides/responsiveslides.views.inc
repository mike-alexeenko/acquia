<?php

/**
 * @file
 * Defines ResponsiveSlides style plugin to views.
 */

/**
 * Implements hook_views_plugins().
 */
function responsiveslides_views_plugins() {
  $path = drupal_get_path('module', 'responsiveslides');
  return array(
    'style' => array(
      'responsiveslides' => array(
        'title' => t('ResponsiveSlides'),
        'help' => t('Display the results as a responsiveslides slideshow.'),
        'handler' => 'responsiveslides_plugin_style_responsiveslides',
        'uses options' => TRUE,
        'uses row plugin' => TRUE,
        'uses grouping' => FALSE,
        'uses row class' => TRUE,
        'type' => 'normal',
        'path' => $path . '/views',
        'theme' => 'responsiveslides',
        'theme path' => $path . '/theme',
        'theme file' => 'responsiveslides.theme.inc',
      ),
    ),
  );
}
