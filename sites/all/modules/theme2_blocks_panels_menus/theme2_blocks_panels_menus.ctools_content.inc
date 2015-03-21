<?php
/**
 * @file
 * theme2_blocks_panels_menus.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function theme2_blocks_panels_menus_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'class_over';
  $content->admin_title = 'Class Over';
  $content->admin_description = 'Information on what happens at course conclusion';
  $content->category = '';
  $content->settings = array(
    'admin_title' => '',
    'title' => variable_get('debugacademy_tab_two_pane_title'),
    'body' => '<h2 class="tab-header">'.variable_get('debugacademy_tab_two_pane_title').
			  '</h2><p>'.variable_get('debugacademy_tab_two_pane_body').
			  '</p><a href="http://www.w3schools.com/" id="class-over" target="_blank">SEE MORE DETAIL<img src="/sites/all/themes/debuga_theme2/images/more-detail.png"></a>',
    'format' => 'html',
    'substitute' => 1,
  );
  $export['class_over'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'copyright_info';
  $content->admin_title = 'Copyright info';
  $content->admin_description = 'Copyright information';
  $content->category = '';
  $content->settings = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<p>©Copyright 2014. All Rights Reserved.</p>',
    'format' => 'html',
    'substitute' => 1,
  );
  $export['copyright_info'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'employer_info';
  $content->admin_title = 'employer_info';
  $content->admin_description = 'Employer information';
  $content->category = '';
  $content->settings = array(
    'admin_title' => '',
    'title' => 'EMPLOYERS',
    'body' => '<p class="left-padding right-padding">'.variable_get('debugacademy_employer_pane_line_one').
	'</p><p class="left-padding right-padding">'.variable_get('debugacademy_employer_pane_line_two').
	'</p><p class="left-padding right-padding">'.variable_get('debugacademy_employer_pane_line_three').
	'</p><a href="www.cnn.com" id="hire-class">Hire our Class<img src="/sites/all/themes/debuga_theme2/images/hire-class-button.png"></a>',
    'format' => 'html',
    'substitute' => 1,
  );
  $export['employer_info'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'get_in_touch';
  $content->admin_title = 'Get In Touch';
  $content->admin_description = 'Address, Contact Info, and Hours';
  $content->category = '';
  $content->settings = array(
    'admin_title' => '',
    'title' => 'GET IN TOUCH',
    'body' => '<p><img src="/sites/all/themes/debuga_theme2/images/location-icon.PNG" style="line-height: 1.5; float: left;">&nbsp;<span style="line-height: 1.5;">Address: 13524 Gray Bill Court, Clifton</span></p><p><img alt="" src="/sites/all/themes/debuga_theme2/images/phone-icon.png" style="float: left;">&nbsp;Phone: 703-111-1111</p><p><img alt="" src="/sites/all/themes/debuga_theme2/images/skype-icon.png" style="float: left;">&nbsp;Skype: debugsociety</p><p><img alt="" src="/sites/all/themes/debuga_theme2/images/e-mail-icon.png" style="float: left; margin-top: 3px; margin-bottom: 3px;">&nbsp;E-mail: debugsociety@debug.com</p><p><img alt="" src="/sites/all/themes/debuga_theme2/images/clock-icon.png" style="float: left;">&nbsp;Weekend: from 9 am to 6 pm</p>',
    'format' => 'html',
    'substitute' => 1,
  );
  $export['get_in_touch'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'hire_class';
  $content->admin_title = 'Hire Class';
  $content->admin_description = 'Dialogue bubble - hire our class';
  $content->category = '';
  $content->settings = array(
    'admin_title' => '',
    'title' => variable_get('debugacademy_hire_pop_title',''),
    'body' => '<p>'.variable_get('debugacademy_hire_pop_body','').'</p>',
    'format' => 'html',
    'substitute' => 1,
  );
  $export['hire_class'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'how_different';
  $content->admin_title = 'How Different';
  $content->admin_description = 'How Debug Society is Different';
  $content->category = '';
  $content->settings = array(
    'admin_title' => '',
    'title' => 'HOW WE\'RE DIFFERENT',
    'body' => '<hr class="hr-light" id="diff-hr"><p class="left">'.variable_get('debugacademy_different_intro').
			  '</p><ul><li>'.variable_get('debugacademy_different_bullet_one').
			  '</li><li>'.variable_get('debugacademy_different_bullet_two').
			  '</li><li>'.variable_get('debugacademy_different_bullet_three').
			  '</li><li>'.variable_get('debugacademy_different_bullet_four').
			  '</li><li>'.variable_get('debugacademy_different_bullet_five').
			  '</li><li>'.variable_get('debugacademy_different_bullet_six').'</li></ul>',
    'format' => 'html',
    'substitute' => 1,
  );
  $export['how_different'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'join_the_movement';
  $content->admin_title = 'Join the Movement';
  $content->admin_description = 'Join the movement section with apply now link';
  $content->category = '';
  $content->settings = array(
    'admin_title' => '',
    'title' => variable_get('debugacademy_banner_one_headline'),
    'body' => '<hr><a href="/apply" id="apply-today">APPLY TODAY<img src="/sites/all/themes/debuga_theme2/images/apply-today-button.png"></a>',
    'format' => 'html',
    'substitute' => 1,
  );
  $export['join_the_movement'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'next_location';
  $content->admin_title = 'Next Location';
  $content->admin_description = 'Where the next class is located';
  $content->category = '';
  $content->settings = array(
    'admin_title' => '',
    'title' => variable_get('debugacademy_tab_three_pane_title'),
    'body' => '<h2 class="tab-header">'.variable_get('debugacademy_tab_three_pane_title').
			  '</h2><p>'.variable_get('debugacademy_tab_three_pane_body').
			  '</p><a href="http://www.w3schools.com/" id="next-location" target="_blank">SEE MORE DETAIL<img src="/sites/all/themes/debuga_theme2/images/more-detail.png"></a>',
    'format' => 'html',
    'substitute' => 1,
  );
  $export['next_location'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'payment_info';
  $content->admin_title = 'Payment Info';
  $content->admin_description = 'Tab with payment information';
  $content->category = '';
  $content->settings = array(
    'admin_title' => '',
    'title' => variable_get('debugacademy_tab_four_pane_title'),
    'body' => '<h2 class="tab-header">'.variable_get('debugacademy_tab_four_pane_title').
			  '</h2><p>'.variable_get('debugacademy_tab_four_pane_body').
			  '</p><a href="http://www.w3schools.com/" id="payment-info" target="_blank">SEE MORE DETAIL<img src="/sites/all/themes/debuga_theme2/images/more-detail.png"></a>',
    'format' => 'html',
    'substitute' => 1,
  );
  $export['payment_info'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'previous_graduate_statistics';
  $content->admin_title = 'Previous Graduate Statistics';
  $content->admin_description = 'Previous Graduate Statistics';
  $content->category = '';
  $content->settings = array(
    'admin_title' => '',
    'title' => variable_get('debugacademy_banner_two_headline'),
    'body' => '<hr><a href="https://debugs.slack.com" id="see-stats-link" target="_blank"><img src="/sites/all/themes/debuga_theme2/images/stats-button-bg.png"></a>',
    'format' => 'html',
    'substitute' => 1,
  );
  $export['previous_graduate_statistics'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'student_info';
  $content->admin_title = 'Student Info';
  $content->admin_description = 'Information for Students';
  $content->category = '';
  $content->settings = array(
    'admin_title' => '',
    'title' => 'STUDENTS',
    'body' => '<p class="left-padding right-padding">'.variable_get('debugacademy_student_pane_line_one').
			  '</p><p class="left-padding right-padding">'.variable_get('debugacademy_student_pane_line_two').
			  '</p><p class="left-padding right-padding">'.variable_get('debugacademy_student_pane_line_three').
			  '</p><a href="/apply" id="apply-now">Apply Now<img src="/sites/all/themes/debuga_theme2/images/apply-now-button.png"></a>',
    'format' => 'html',
    'substitute' => 1,
  );
  $export['student_info'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'teaching_next';
  $content->admin_title = 'Teaching Next';
  $content->admin_description = 'Information on what Debug Society will be teaching next';
  $content->category = '';
  $content->settings = array(
    'admin_title' => '',
    'title' => variable_get('debugacademy_tab_one_pane_title'),
    'body' => '<h2 class="tab-header">'.variable_get('debugacademy_tab_one_pane_title').
			  '</h2><p>'.variable_get('debugacademy_tab_one_pane_body').
			  '</p><a href="http://www.w3schools.com/" id="teaching-next" target="_blank">SEE MORE DETAIL<img src="/sites/all/themes/debuga_theme2/images/more-detail.png"></a>',
    'format' => 'html',
    'substitute' => 1,
  );
  $export['teaching_next'] = $content;

  return $export;
}
