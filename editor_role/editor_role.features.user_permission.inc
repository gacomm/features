<?php
/**
 * @file
 * editor_role.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function editor_role_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
