<?php
/**
 * @file
 * header_theme_menu_links.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function header_theme_menu_links_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_apply-now:http://drupal.org
  $menu_links['main-menu_apply-now:http://drupal.org'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://drupal.org',
    'router_path' => '',
    'link_title' => 'Apply Now',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_apply-now:http://drupal.org',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -5,
    'customized' => 1,
  );
  // Exported menu link: main-menu_hire-our-alumni:http://drupal.org
  $menu_links['main-menu_hire-our-alumni:http://drupal.org'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://drupal.org',
    'router_path' => '',
    'link_title' => 'Hire Our Alumni',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_hire-our-alumni:http://drupal.org',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -8,
    'customized' => 1,
  );
  // Exported menu link: main-menu_how-were-different-:http://debugacademy.local:8083/node/%node
  $menu_links['main-menu_how-were-different-:http://debugacademy.local:8083/node/%node'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://debugacademy.local:8083/node/%node',
    'router_path' => '',
    'link_title' => 'How We\'re Different ',
    'options' => array(
      'attributes' => array(
        'title' => 'How We\'re Different',
      ),
      'identifier' => 'main-menu_how-were-different-:http://debugacademy.local:8083/node/%node',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Apply Now');
  t('Hire Our Alumni');
  t('How We\'re Different ');


  return $menu_links;
}
