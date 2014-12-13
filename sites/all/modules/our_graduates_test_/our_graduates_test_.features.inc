<?php
/**
 * @file
 * our_graduates_test_.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function our_graduates_test__ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function our_graduates_test__views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
