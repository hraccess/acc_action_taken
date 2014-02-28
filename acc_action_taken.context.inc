<?php
/**
 * @file
 * acc_action_taken.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function acc_action_taken_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'acc_action_taken';
  $context->description = '';
  $context->tag = 'Access Action taken';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'acc_action_taken:list' => 'acc_action_taken:list',
        'acc_action_taken:master' => 'acc_action_taken:master',
        'acc_action_taken:table' => 'acc_action_taken:table',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'facetapi-oQ8bQXEG5BsN42O0Joi0klUsxaQS1WGT' => array(
          'module' => 'facetapi',
          'delta' => 'oQ8bQXEG5BsN42O0Joi0klUsxaQS1WGT',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-eBtuocZofWCgsAMPAbLaz9hVi3z8rr0k' => array(
          'module' => 'facetapi',
          'delta' => 'eBtuocZofWCgsAMPAbLaz9hVi3z8rr0k',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'facetapi-FkrEzi2pWssKCq1k0ijRaFTdB9UDBB0y' => array(
          'module' => 'facetapi',
          'delta' => 'FkrEzi2pWssKCq1k0ijRaFTdB9UDBB0y',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Access Action taken');
  $export['acc_action_taken'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'acc_action_taken_list';
  $context->description = '';
  $context->tag = 'Access Action taken';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'acc_action_taken:list' => 'acc_action_taken:list',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Access Action taken');
  $export['acc_action_taken_list'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'acc_action_taken_table';
  $context->description = '';
  $context->tag = 'Access Action taken';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'acc_action_taken:master' => 'acc_action_taken:master',
        'acc_action_taken:table' => 'acc_action_taken:table',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Access Action taken');
  $export['acc_action_taken_table'] = $context;

  return $export;
}
