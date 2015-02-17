<?php
/**
 * @file
 * debug_course.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function debug_course_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_course';
  $strongarm->value = 0;
  $export['comment_anonymous_course'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_course';
  $strongarm->value = 1;
  $export['comment_default_mode_course'] = $strongarm;

  return $export;
}
