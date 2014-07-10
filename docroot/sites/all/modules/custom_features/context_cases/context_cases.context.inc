<?php
/**
 * @file
 * context_cases.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function context_cases_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'test1';
  $context->description = 'if path==pages_list -> pages html block';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'pages_list' => 'pages_list',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-1' => array(
          'module' => 'block',
          'delta' => '1',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('if path==pages_list -> pages html block');
  $export['test1'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'test2';
  $context->description = 'if node page has tags:alpha, beta, gamma -> Tags html block';
  $context->tag = '';
  $context->conditions = array(
    'node_taxonomy' => array(
      'values' => array(
        3 => 3,
        4 => 4,
        5 => 5,
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-2' => array(
          'module' => 'block',
          'delta' => '2',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('if node page has tags:alpha, beta, gamma -> Tags html block');
  $export['test2'] = $context;

  return $export;
}
