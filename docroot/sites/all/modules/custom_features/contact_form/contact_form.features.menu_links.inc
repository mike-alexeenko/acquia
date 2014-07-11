<?php
/**
 * @file
 * contact_form.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function contact_form_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_contact-form:node/80
  $menu_links['main-menu_contact-form:node/80'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/80',
    'router_path' => 'node/%',
    'link_title' => 'Contact form',
    'options' => array(
      'identifier' => 'main-menu_contact-form:node/80',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: main-menu_webform-view:webform-view
  $menu_links['main-menu_webform-view:webform-view'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'webform-view',
    'router_path' => 'webform-view',
    'link_title' => 'Webform view',
    'options' => array(
      'identifier' => 'main-menu_webform-view:webform-view',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Contact form');
  t('Webform view');


  return $menu_links;
}
