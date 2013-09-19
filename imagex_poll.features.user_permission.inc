<?php
/**
 * @file
 * imagex_poll.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function imagex_poll_user_default_permissions() {
  $permissions = array();

  // Exported permission: create advpoll content.
  $permissions['create advpoll content'] = array(
    'name' => 'create advpoll content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any advpoll content.
  $permissions['delete any advpoll content'] = array(
    'name' => 'delete any advpoll content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own advpoll content.
  $permissions['delete own advpoll content'] = array(
    'name' => 'delete own advpoll content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any advpoll content.
  $permissions['edit any advpoll content'] = array(
    'name' => 'edit any advpoll content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own advpoll content.
  $permissions['edit own advpoll content'] = array(
    'name' => 'edit own advpoll content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
