<?php
/**
 * @file
 * panelizer_feature.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function panelizer_feature_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:page:panelizer_01';
  $panelizer->title = 'Panelizer 01';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'page';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'full';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title, %node:field_date';
  $display->uuid = '481c8694-1228-4853-a8a4-3525f5ba5b46';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4819c246-1e7b-4c4d-a71a-173a5076ce3a';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4819c246-1e7b-4c4d-a71a-173a5076ce3a';
    $display->content['new-4819c246-1e7b-4c4d-a71a-173a5076ce3a'] = $pane;
    $display->panels['left'][0] = 'new-4819c246-1e7b-4c4d-a71a-173a5076ce3a';
    $pane = new stdClass();
    $pane->pid = 'new-8bcc853f-919f-4463-a1b2-ddff5fe59891';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'long',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8bcc853f-919f-4463-a1b2-ddff5fe59891';
    $display->content['new-8bcc853f-919f-4463-a1b2-ddff5fe59891'] = $pane;
    $display->panels['right'][0] = 'new-8bcc853f-919f-4463-a1b2-ddff5fe59891';
    $pane = new stdClass();
    $pane->pid = 'new-551f0738-5d80-4200-a47a-91c68f386ba8';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_basic_image_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => '',
        'image_link' => '',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '551f0738-5d80-4200-a47a-91c68f386ba8';
    $display->content['new-551f0738-5d80-4200-a47a-91c68f386ba8'] = $pane;
    $display->panels['right'][1] = 'new-551f0738-5d80-4200-a47a-91c68f386ba8';
    $pane = new stdClass();
    $pane->pid = 'new-8c6baf21-537c-4755-a282-5963fb31738f';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_number';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'number_integer',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'thousand_separator' => ' ',
        'decimal_separator' => '.',
        'scale' => 0,
        'prefix_suffix' => TRUE,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '8c6baf21-537c-4755-a282-5963fb31738f';
    $display->content['new-8c6baf21-537c-4755-a282-5963fb31738f'] = $pane;
    $display->panels['right'][2] = 'new-8c6baf21-537c-4755-a282-5963fb31738f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-4819c246-1e7b-4c4d-a71a-173a5076ce3a';
  $panelizer->display = $display;
  $export['node:page:panelizer_01'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:page:panelizer_02';
  $panelizer->title = 'Panelizer 02';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'page';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'full';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'threecol_33_34_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '920c87a1-bdf6-43af-bd5a-e700c291e0ab';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bcfbb830-0734-4dcf-abc9-c933a472cbb4';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bcfbb830-0734-4dcf-abc9-c933a472cbb4';
    $display->content['new-bcfbb830-0734-4dcf-abc9-c933a472cbb4'] = $pane;
    $display->panels['left'][0] = 'new-bcfbb830-0734-4dcf-abc9-c933a472cbb4';
    $pane = new stdClass();
    $pane->pid = 'new-4a088c70-8959-40d6-8b47-56064b887a94';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_number';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'number_integer',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'thousand_separator' => ' ',
        'decimal_separator' => '.',
        'scale' => 0,
        'prefix_suffix' => TRUE,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4a088c70-8959-40d6-8b47-56064b887a94';
    $display->content['new-4a088c70-8959-40d6-8b47-56064b887a94'] = $pane;
    $display->panels['left'][1] = 'new-4a088c70-8959-40d6-8b47-56064b887a94';
    $pane = new stdClass();
    $pane->pid = 'new-2e127a55-e549-4c76-b931-c09b2f8b7f61';
    $pane->panel = 'left';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'full',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '2e127a55-e549-4c76-b931-c09b2f8b7f61';
    $display->content['new-2e127a55-e549-4c76-b931-c09b2f8b7f61'] = $pane;
    $display->panels['left'][2] = 'new-2e127a55-e549-4c76-b931-c09b2f8b7f61';
    $pane = new stdClass();
    $pane->pid = 'new-20a57626-659c-48ce-83bb-65a5dea1a070';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_basic_image_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => '',
        'image_link' => '',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '20a57626-659c-48ce-83bb-65a5dea1a070';
    $display->content['new-20a57626-659c-48ce-83bb-65a5dea1a070'] = $pane;
    $display->panels['middle'][0] = 'new-20a57626-659c-48ce-83bb-65a5dea1a070';
    $pane = new stdClass();
    $pane->pid = 'new-3cad87d3-9a94-4af2-8c59-11b5119bfa93';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'long',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3cad87d3-9a94-4af2-8c59-11b5119bfa93';
    $display->content['new-3cad87d3-9a94-4af2-8c59-11b5119bfa93'] = $pane;
    $display->panels['right'][0] = 'new-3cad87d3-9a94-4af2-8c59-11b5119bfa93';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-bcfbb830-0734-4dcf-abc9-c933a472cbb4';
  $panelizer->display = $display;
  $export['node:page:panelizer_02'] = $panelizer;

  return $export;
}
