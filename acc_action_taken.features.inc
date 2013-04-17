<?php
/**
 * @file
 * acc_action_taken.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function acc_action_taken_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function acc_action_taken_node_info() {
  $items = array(
    'action_taken' => array(
      'name' => t('Action taken'),
      'base' => 'node_content',
      'description' => t('Action taken in response to an event'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
