<?php
/**
 * @file
 * about_the_author.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function about_the_author_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_slogan';
  $strongarm->value = 'custom slogan';
  $export['site_slogan'] = $strongarm;

  return $export;
}
