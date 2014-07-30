<?php
/**
 * @file
 * quicktabs_feature.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function quicktabs_feature_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'accordion';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Accordion';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'system_delta_main-menu',
      'hide_title' => 0,
      'title' => 'Block: Main menu',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'vid' => 'slides',
      'display' => 'default',
      'args' => '',
      'title' => 'View: Slides',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'nid' => '26',
      'view_mode' => 'full',
      'hide_title' => 0,
      'title' => 'Node: #26',
      'weight' => '-98',
      'type' => 'node',
    ),
  );
  $quicktabs->renderer = 'accordion';
  $quicktabs->style = 'default';
  $quicktabs->options = array(
    'history' => 0,
    'jquery_ui' => array(
      'autoHeight' => 1,
      'collapsible' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Accordion');
  t('Block: Main menu');
  t('Node: #26');
  t('View: Slides');

  $export['accordion'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'quicktabs01';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Quicktabs';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'system_delta_main-menu',
      'hide_title' => 1,
      'title' => 'Block',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'vid' => 'books',
      'display' => 'block_1',
      'args' => '',
      'title' => 'View: Books block',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'nid' => '55',
      'view_mode' => 'full',
      'hide_title' => 0,
      'title' => 'Node',
      'weight' => '-98',
      'type' => 'node',
    ),
    3 => array(
      'path' => 'pages_list',
      'title' => 'Callback',
      'weight' => '-97',
      'type' => 'callback',
    ),
    4 => array(
      'machine_name' => 'accordion',
      'title' => 'Qtabs: Accordion',
      'weight' => '-96',
      'type' => 'qtabs',
    ),
    5 => array(
      'machine_name' => 'ui_tabs',
      'title' => 'Qtabs: UI Tabs',
      'weight' => '-95',
      'type' => 'qtabs',
    ),
    6 => array(
      'vid' => 'webform_view',
      'display' => 'page',
      'args' => '',
      'title' => 'Webform',
      'weight' => '-94',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Basic';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Block');
  t('Callback');
  t('Node');
  t('Qtabs: Accordion');
  t('Qtabs: UI Tabs');
  t('Quicktabs');
  t('View: Books block');
  t('Webform');

  $export['quicktabs01'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'ui_tabs';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 999999;
  $quicktabs->title = 'UI Tabs';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'block_delta_1',
      'hide_title' => 0,
      'title' => 'Block: Pages',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'block_delta_2',
      'hide_title' => 0,
      'title' => 'Block: Tags',
      'weight' => '-99',
      'type' => 'block',
    ),
    2 => array(
      'bid' => 'system_delta_powered-by',
      'hide_title' => 0,
      'title' => 'Block: Powered by',
      'weight' => '-98',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'ui_tabs';
  $quicktabs->style = 'default';
  $quicktabs->options = array(
    'history' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Block: Pages');
  t('Block: Powered by');
  t('Block: Tags');
  t('UI Tabs');

  $export['ui_tabs'] = $quicktabs;

  return $export;
}
