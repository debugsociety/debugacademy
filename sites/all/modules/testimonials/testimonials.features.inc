<?php
/**
 * @file
 * testimonials.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function testimonials_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function testimonials_node_info() {
  $items = array(
    'testimonial' => array(
      'name' => t('Testimonial'),
      'base' => 'node_content',
      'description' => t('Content type for testimonials. Stores a person\'s name, a picture, a long text field, and an entity reference field to optionally point to a user account.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Please add the necessary student info: Username, Profile Picture, and a brief testimonial'),
    ),
  );
  return $items;
}
