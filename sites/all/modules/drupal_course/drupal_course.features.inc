<?php
/**
 * @file
 * drupal_course.features.inc
 */

/**
 * Implements hook_default_cl_billing_cycle_type().
 */
function drupal_course_default_cl_billing_cycle_type() {
  $items = array();
  $items['course_monthly_installments'] = entity_import('cl_billing_cycle_type', '{
    "engine" : "periodic",
    "name" : "course_monthly_installments",
    "title" : "Course Monthly Installments",
    "prepaid" : null,
    "wrapper" : {},
    "pce_period" : { "und" : [ { "value" : "month" } ] },
    "pce_async" : { "und" : [ { "value" : "0" } ] }
  }');
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function drupal_course_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function drupal_course_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function drupal_course_node_info() {
  $items = array(
    'course' => array(
      'name' => t('Course'),
      'base' => 'node_content',
      'description' => t('A <em>course</em> entity. This is the fundamental building bloc for Opigno. It can contain students, teachers, quizzes, files and many other ressources.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
