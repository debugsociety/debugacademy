<?php
/**
 * @file
 * graduates.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function graduates_user_default_roles() {
  $roles = array();

  // Exported role: graduates.
  $roles['graduates'] = array(
    'name' => 'graduates',
    'weight' => 6,
  );

  return $roles;
}
