<?php
/**
 * @file
 * project_task_management.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function project_task_management_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: management.
  $menus['management'] = array(
    'menu_name' => 'management',
    'title' => 'Management',
    'description' => 'The <em>Management</em> menu contains links for administrative tasks.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Management');
  t('The <em>Management</em> menu contains links for administrative tasks.');


  return $menus;
}
