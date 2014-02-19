<?php
/**
 * @file
 * acc_action_taken.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function acc_action_taken_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'clear acc_action_taken feeds'.
  $permissions['clear acc_action_taken feeds'] = array(
    'name' => 'clear acc_action_taken feeds',
    'roles' => array(
      'access manager' => 'access manager',
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'create acc_action_taken content'.
  $permissions['create acc_action_taken content'] = array(
    'name' => 'create acc_action_taken content',
    'roles' => array(
      'access manager' => 'access manager',
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any acc_action_taken content'.
  $permissions['delete any acc_action_taken content'] = array(
    'name' => 'delete any acc_action_taken content',
    'roles' => array(
      'access manager' => 'access manager',
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own acc_action_taken content'.
  $permissions['delete own acc_action_taken content'] = array(
    'name' => 'delete own acc_action_taken content',
    'roles' => array(
      'access manager' => 'access manager',
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in acc_action_taken_type'.
  $permissions['delete terms in acc_action_taken_type'] = array(
    'name' => 'delete terms in acc_action_taken_type',
    'roles' => array(
      'access manager' => 'access manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any acc_action_taken content'.
  $permissions['edit any acc_action_taken content'] = array(
    'name' => 'edit any acc_action_taken content',
    'roles' => array(
      'access manager' => 'access manager',
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own acc_action_taken content'.
  $permissions['edit own acc_action_taken content'] = array(
    'name' => 'edit own acc_action_taken content',
    'roles' => array(
      'access manager' => 'access manager',
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in acc_action_taken_type'.
  $permissions['edit terms in acc_action_taken_type'] = array(
    'name' => 'edit terms in acc_action_taken_type',
    'roles' => array(
      'access manager' => 'access manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'import acc_action_taken feeds'.
  $permissions['import acc_action_taken feeds'] = array(
    'name' => 'import acc_action_taken feeds',
    'roles' => array(
      'access manager' => 'access manager',
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'tamper acc_action_taken'.
  $permissions['tamper acc_action_taken'] = array(
    'name' => 'tamper acc_action_taken',
    'roles' => array(
      'access manager' => 'access manager',
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper csv_access_action_taken_type'.
  $permissions['tamper csv_access_action_taken_type'] = array(
    'name' => 'tamper csv_access_action_taken_type',
    'roles' => array(
      'access manager' => 'access manager',
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'unlock acc_action_taken feeds'.
  $permissions['unlock acc_action_taken feeds'] = array(
    'name' => 'unlock acc_action_taken feeds',
    'roles' => array(
      'access manager' => 'access manager',
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  return $permissions;
}
