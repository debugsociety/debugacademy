<?php
/**
 * @file
 * blog_section.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function blog_section_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function blog_section_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
