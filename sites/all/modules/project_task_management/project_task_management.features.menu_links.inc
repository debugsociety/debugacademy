<?php
/**
 * @file
 * project_task_management.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function project_task_management_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_project-management:admin/config/pm
  $menu_links['management_project-management:admin/config/pm'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/pm',
    'router_path' => 'admin/config/pm',
    'link_title' => 'Project Management',
    'options' => array(
      'attributes' => array(
        'title' => 'Project Management settings',
      ),
      'identifier' => 'management_project-management:admin/config/pm',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_project-management:admin/config/pm/pm
  $menu_links['management_project-management:admin/config/pm/pm'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/pm/pm',
    'router_path' => 'admin/config/pm/pm',
    'link_title' => 'Project Management',
    'options' => array(
      'attributes' => array(
        'title' => 'Project Management settings including display and taxation.',
      ),
      'identifier' => 'management_project-management:admin/config/pm/pm',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -100,
    'customized' => 0,
    'parent_identifier' => 'management_project-management:admin/config/pm',
  );
  // Exported menu link: navigation_project-management:pm
  $menu_links['navigation_project-management:pm'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'pm',
    'router_path' => 'pm',
    'link_title' => 'Project Management',
    'options' => array(
      'attributes' => array(
        'title' => 'Project Management dashboard',
      ),
      'identifier' => 'navigation_project-management:pm',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Project Management');


  return $menu_links;
}
