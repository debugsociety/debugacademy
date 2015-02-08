<?php
/**
 * @file
 * project_task_management.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function project_task_management_defaultconfig_features() {
  return array(
    'project_task_management' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function project_task_management_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'PM permission pmproject'.
  $permissions['PM permission pmproject'] = array(
    'name' => 'PM permission pmproject',
    'roles' => array(),
  );

  // Exported permission: 'Project Management Organization'.
  $permissions['Project Management Organization'] = array(
    'name' => 'Project Management Organization',
    'roles' => array(),
  );

  // Exported permission: 'Project Management Person'.
  $permissions['Project Management Person'] = array(
    'name' => 'Project Management Person',
    'roles' => array(),
  );

  // Exported permission: 'Project Management Project'.
  $permissions['Project Management Project'] = array(
    'name' => 'Project Management Project',
    'roles' => array(),
  );

  // Exported permission: 'Project Management Task'.
  $permissions['Project Management Task'] = array(
    'name' => 'Project Management Task',
    'roles' => array(),
  );

  // Exported permission: 'Project Management Team'.
  $permissions['Project Management Team'] = array(
    'name' => 'Project Management Team',
    'roles' => array(),
  );

  // Exported permission: 'Project Management Ticket'.
  $permissions['Project Management Ticket'] = array(
    'name' => 'Project Management Ticket',
    'roles' => array(),
  );

  // Exported permission: 'Project Management Timetracking'.
  $permissions['Project Management Timetracking'] = array(
    'name' => 'Project Management Timetracking',
    'roles' => array(),
  );

  // Exported permission: 'Project Management expense'.
  $permissions['Project Management expense'] = array(
    'name' => 'Project Management expense',
    'roles' => array(),
  );

  // Exported permission: 'Project Management note'.
  $permissions['Project Management note'] = array(
    'name' => 'Project Management note',
    'roles' => array(),
  );

  // Exported permission: 'Project Management'.
  $permissions['Project Management'] = array(
    'name' => 'Project Management',
    'roles' => array(),
  );

  return $permissions;
}
