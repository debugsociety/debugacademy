<?php
/**
 * @file
 * project_task_management.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function project_task_management_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'PM permission pmproject: delete if Project Manager'.
  $permissions['PM permission pmproject: delete if Project Manager'] = array(
    'name' => 'PM permission pmproject: delete if Project Manager',
    'roles' => array(),
    'module' => 'pmpermission',
  );

  // Exported permission: 'PM permission pmproject: update if Project Manager'.
  $permissions['PM permission pmproject: update if Project Manager'] = array(
    'name' => 'PM permission pmproject: update if Project Manager',
    'roles' => array(),
    'module' => 'pmpermission',
  );

  // Exported permission: 'PM permission pmproject: view if Project Manager'.
  $permissions['PM permission pmproject: view if Project Manager'] = array(
    'name' => 'PM permission pmproject: view if Project Manager',
    'roles' => array(),
    'module' => 'pmpermission',
  );

  // Exported permission: 'Project Management Organization: access'.
  $permissions['Project Management Organization: access'] = array(
    'name' => 'Project Management Organization: access',
    'roles' => array(),
    'module' => 'pmorganization',
  );

  // Exported permission: 'Project Management Project: access'.
  $permissions['Project Management Project: access'] = array(
    'name' => 'Project Management Project: access',
    'roles' => array(),
    'module' => 'pmproject',
  );

  // Exported permission: 'Project Management Task: access'.
  $permissions['Project Management Task: access'] = array(
    'name' => 'Project Management Task: access',
    'roles' => array(),
    'module' => 'pmtask',
  );

  // Exported permission: 'Project Management Team: access'.
  $permissions['Project Management Team: access'] = array(
    'name' => 'Project Management Team: access',
    'roles' => array(),
    'module' => 'pmteam',
  );

  // Exported permission: 'Project Management Ticket: access'.
  $permissions['Project Management Ticket: access'] = array(
    'name' => 'Project Management Ticket: access',
    'roles' => array(),
    'module' => 'pmticket',
  );

  // Exported permission: 'Project Management: access administration pages'.
  $permissions['Project Management: access administration pages'] = array(
    'name' => 'Project Management: access administration pages',
    'roles' => array(),
    'module' => 'pm',
  );

  // Exported permission: 'Project Management: access dashboard'.
  $permissions['Project Management: access dashboard'] = array(
    'name' => 'Project Management: access dashboard',
    'roles' => array(),
    'module' => 'pm',
  );

  // Exported permission: 'administer pm permission'.
  $permissions['administer pm permission'] = array(
    'name' => 'administer pm permission',
    'roles' => array(),
    'module' => 'pmpermission',
  );

  return $permissions;
}
