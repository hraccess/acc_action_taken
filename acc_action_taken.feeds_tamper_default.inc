<?php
/**
 * @file
 * acc_action_taken.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function acc_action_taken_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'acc_action_taken-what_did_trigger_this_action-explode';
  $feeds_tamper->importer = 'acc_action_taken';
  $feeds_tamper->source = 'What did trigger this action';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['acc_action_taken-what_did_trigger_this_action-explode'] = $feeds_tamper;

  return $export;
}
