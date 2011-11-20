<?php
/**
 * @file
 * portfolio.features.user_permission.inc
 */

/**
 * Implementation of hook_user_default_permissions().
 */
function portfolio_user_default_permissions() {
  $permissions = array();

  // Exported permission: create portfolio_entry content
  $permissions['create portfolio_entry content'] = array(
    'name' => 'create portfolio_entry content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any portfolio_entry content
  $permissions['delete any portfolio_entry content'] = array(
    'name' => 'delete any portfolio_entry content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own portfolio_entry content
  $permissions['delete own portfolio_entry content'] = array(
    'name' => 'delete own portfolio_entry content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any portfolio_entry content
  $permissions['edit any portfolio_entry content'] = array(
    'name' => 'edit any portfolio_entry content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own portfolio_entry content
  $permissions['edit own portfolio_entry content'] = array(
    'name' => 'edit own portfolio_entry content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
