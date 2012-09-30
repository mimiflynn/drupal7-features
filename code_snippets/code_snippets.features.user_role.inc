<?php
/**
 * @file
 * code_snippets.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function code_snippets_user_default_roles() {
  $roles = array();

  // Exported role: Contributor.
  $roles['Contributor'] = array(
    'name' => 'Contributor',
    'weight' => '2',
  );

  return $roles;
}
