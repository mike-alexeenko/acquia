<?php
/**
 * @file
 * houses_views.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function houses_views_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'property';
  $page->task = 'page';
  $page->admin_title = 'Property';
  $page->admin_description = '';
  $page->path = 'property';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Houses',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_property_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'property';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible:2_columns';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'right_' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7747696e-f06c-4785-9b75-57945a32a641';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ac038a73-94c3-408f-a297-1a0e4e5d3c49';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'properties-properties_listing';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ac038a73-94c3-408f-a297-1a0e4e5d3c49';
    $display->content['new-ac038a73-94c3-408f-a297-1a0e4e5d3c49'] = $pane;
    $display->panels['center'][0] = 'new-ac038a73-94c3-408f-a297-1a0e4e5d3c49';
    $pane = new stdClass();
    $pane->pid = 'new-72e18102-b88d-48df-b53f-06f5c68db5ee';
    $pane->panel = 'right_';
    $pane->type = 'block';
    $pane->subtype = 'views-9956837217cfd89327a874fde79fd6f9';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'inherit_path' => 1,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '72e18102-b88d-48df-b53f-06f5c68db5ee';
    $display->content['new-72e18102-b88d-48df-b53f-06f5c68db5ee'] = $pane;
    $display->panels['right_'][0] = 'new-72e18102-b88d-48df-b53f-06f5c68db5ee';
    $pane = new stdClass();
    $pane->pid = 'new-9f669575-154a-41e9-995a-150c4a1d108b';
    $pane->panel = 'right_';
    $pane->type = 'block';
    $pane->subtype = 'quicktabs-accordion';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9f669575-154a-41e9-995a-150c4a1d108b';
    $display->content['new-9f669575-154a-41e9-995a-150c4a1d108b'] = $pane;
    $display->panels['right_'][1] = 'new-9f669575-154a-41e9-995a-150c4a1d108b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['property'] = $page;

  return $pages;

}
