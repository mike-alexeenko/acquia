<?php
/**
 * @file
 * city_guides.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function city_guides_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_city-guides:city-guides
  $menu_links['main-menu_city-guides:city-guides'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'city-guides',
    'router_path' => 'city-guides',
    'link_title' => 'City guides',
    'options' => array(
      'identifier' => 'main-menu_city-guides:city-guides',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('City guides');


  return $menu_links;
}
