<?php

/**
 * @file
 * Admin page to update content on debugacademy theme2 homepage.
 */

/**
 * System settings form to manage theme 2 homepage content.
 */
function debugacademy_admin_settings() {
  $form['description'] = array(
    '#markup' => '<p>' . t('Form to modify Debug Academy Theme 2 Homepage content.') . '</p>',
  );

  /*Main content on homepage*/
  $form['main_section'] = array(
    '#type' => 'fieldset',
    '#title' => t('Main Section Content'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $form['main_section']['debugacademy_main_text'] = array(
    '#type' => 'textfield',
    '#title' => t('Main Header'),
    '#description' => t('Main text to grab attention.'),
    '#default_value' => variable_get('debugacademy_main_text', ''),
    '#required' => TRUE,
  );
  
  /*Orange hire popup*/
  $form['main_section']['debugacademy_hire_popup'] = array(
    '#type' => 'fieldset',
    '#title' => t('Small side popup'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );  
  $form['main_section']['debugacademy_hire_popup']['debugacademy_hire_pop_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Popup title'),
    '#description' => t('Attention grabbing one-liner for side popup'),
    '#default_value' => variable_get('debugacademy_hire_pop_title', 'Hire our next class to work on YOUR project'),
    '#required' => TRUE,
  );
  $form['main_section']['debugacademy_hire_popup']['debugacademy_hire_pop_body'] = array(
    '#type' => 'textfield',
    '#title' => t('Popup body'),
    '#description' => t('Small popup on right side of main page.'),
    '#default_value' => variable_get('debugacademy_hire_pop_body', 'Client projects are led by the teacher, a full-time senior developer.'),
    '#required' => TRUE,
  );

  /*Student Pane Content*/
  $form['main_section']['debugacademy_student_pane'] = array(
    '#type' => 'fieldset',
    '#title' => t('Student content pane'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );  
  $form['main_section']['debugacademy_student_pane']['debugacademy_student_pane_line_one'] = array(
    '#type' => 'textfield',
    '#title' => t('Student pane line one'),
    '#description' => t('First line in student pane'),
    '#default_value' => variable_get('debugacademy_student_pane_line_one', 'Only teach highly in-demand technologies.<br>Re-assess curriculum regularly.'),
    '#required' => TRUE,
  );
  $form['main_section']['debugacademy_student_pane']['debugacademy_student_pane_line_two'] = array(
    '#type' => 'textfield',
    '#title' => t('Student pane line two'),
    '#description' => t('Second line in student pane'),
    '#default_value' => variable_get('debugacademy_student_pane_line_two', 'Keep class sizes very small: 5-10 students per class.'),
    '#required' => TRUE,
  );
  $form['main_section']['debugacademy_student_pane']['debugacademy_student_pane_line_three'] = array(
    '#type' => 'textfield',
    '#title' => t('Student pane line three'),
    '#description' => t('Third line in student pane'),
    '#default_value' => variable_get('debugacademy_student_pane_line_three', 'Curriculum is customized mid-way per-student.'),
    '#required' => TRUE,
  );
  
  /*Employer Pane Content*/
  $form['main_section']['debugacademy_employer_pane'] = array(
    '#type' => 'fieldset',
    '#title' => t('Employer content pane'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );  
  $form['main_section']['debugacademy_employer_pane']['debugacademy_employer_pane_line_one'] = array(
    '#type' => 'textfield',
    '#title' => t('Employer pane line one'),
    '#description' => t('First line in employer pane'),
    '#default_value' => variable_get('debugacademy_employer_pane_line_one', 'Only teach highly in-demand technologies.<br>Re-assess curriculum regularly.'),
    '#required' => TRUE,
  );
  $form['main_section']['debugacademy_employer_pane']['debugacademy_employer_pane_line_two'] = array(
    '#type' => 'textfield',
    '#title' => t('Employer pane line two'),
    '#description' => t('Second line in employer pane'),
    '#default_value' => variable_get('debugacademy_employer_pane_line_two', 'Keep class sizes very small: 5-10 employers per class.'),
    '#required' => TRUE,
  );
  $form['main_section']['debugacademy_employer_pane']['debugacademy_employer_pane_line_three'] = array(
    '#type' => 'textfield',
    '#title' => t('Employer pane line three'),
    '#description' => t('Third line in employer pane'),
    '#default_value' => variable_get('debugacademy_employer_pane_line_three', 'Curriculum is customized mid-way per-employer.'),
    '#required' => TRUE,
  );
  
  /*Tabbed Section*/
  $form['tabbed_section'] = array(
    '#type' => 'fieldset',
    '#title' => t('Tabbed Section'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );  
  
  /*First tab*/
  $form['tabbed_section']['debugacademy_tab_one_pane'] = array(
    '#type' => 'fieldset',
    '#title' => t('First tab content'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );  
  $form['tabbed_section']['debugacademy_tab_one_pane']['debugacademy_tab_one_pane_title'] = array(
    '#type' => 'textfield',
    '#title' => t('First tab title'),
    '#description' => t('Title of the first tab in the four-tab section'),
    '#default_value' => variable_get('debugacademy_tab_one_pane_title', 'What are we teaching next?'),
    '#required' => TRUE,
  );
  $form['tabbed_section']['debugacademy_tab_one_pane']['debugacademy_tab_one_pane_body'] = array(
    '#type' => 'textarea',
    '#title' => t('First tab body'),
    '#description' => t('Body of first tab in the four-tab section'),
    '#default_value' => variable_get('debugacademy_tab_one_pane_body', 'This semester we will be teaching Drupal 7 development. 
						Students will learn how to be a valuable member of an enterprise-level Drupal development team. Your teacher currently works 
						on some of the largest Drupal websites in the world, and you will develop the same way his team does. You will be a great asset 
						to any Drupal development team!'),
    '#required' => TRUE,
  );

  /*Second tab*/
  $form['tabbed_section']['debugacademy_tab_two_pane'] = array(
    '#type' => 'fieldset',
    '#title' => t('Second tab content'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );  
  $form['tabbed_section']['debugacademy_tab_two_pane']['debugacademy_tab_two_pane_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Second tab title'),
    '#description' => t('Title of the second tab in the four-tab section'),
    '#default_value' => variable_get('debugacademy_tab_two_pane_title', 'What happens when the class is over?'),
    '#required' => TRUE,
  );
  $form['tabbed_section']['debugacademy_tab_two_pane']['debugacademy_tab_two_pane_body'] = array(
    '#type' => 'textarea',
    '#title' => t('Second tab body'),
    '#description' => t('Body of second tab in the four-tab section'),
    '#default_value' => variable_get('debugacademy_tab_two_pane_body', 'This course will take approximately 14 weeks. After the 
						course, we will not teach another class for 3 weeks - your teacher\'s job in that time is to help you get 
						paid work, and be available for questions to make your career transition smoother. This is appealing to 
						employers - they will hire you, and you have your network as a resource for advanced questions.'),
    '#required' => TRUE,
  );
 
  /*Third tab*/
  $form['tabbed_section']['debugacademy_tab_three_pane'] = array(
    '#type' => 'fieldset',
    '#title' => t('Third tab content'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );  
  $form['tabbed_section']['debugacademy_tab_three_pane']['debugacademy_tab_three_pane_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Third tab title'),
    '#description' => t('Title of the third tab in the four-tab section'),
    '#default_value' => variable_get('debugacademy_tab_three_pane_title', 'Where is the next class located?'),
    '#required' => TRUE,
  );
  $form['tabbed_section']['debugacademy_tab_three_pane']['debugacademy_tab_three_pane_body'] = array(
    '#type' => 'textarea',
    '#title' => t('Third tab body'),
    '#description' => t('Body of third tab in the four-tab section'),
    '#default_value' => variable_get('debugacademy_tab_three_pane_body', 'The class will be held in Fairfax, VA - 
						near Washington, D.C. Graduates will be well placed to score a great job with the active D.C. Drupal community.'),
    '#required' => TRUE,
  );
  
  /*Fourth tab*/
  $form['tabbed_section']['debugacademy_tab_four_pane'] = array(
    '#type' => 'fieldset',
    '#title' => t('Fourth tab content'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );  
  $form['tabbed_section']['debugacademy_tab_four_pane']['debugacademy_tab_four_pane_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Fourth tab title'),
    '#description' => t('Title of the fourth tab in the four-tab section'),
    '#default_value' => variable_get('debugacademy_tab_four_pane_title', 'What are the payment options?'),
    '#required' => TRUE,
  );
  $form['tabbed_section']['debugacademy_tab_four_pane']['debugacademy_tab_four_pane_body'] = array(
    '#type' => 'textarea',
    '#title' => t('Fourth tab body'),
    '#description' => t('Body of fourth tab in the four-tab section'),
    '#default_value' => variable_get('debugacademy_tab_four_pane_body', 'Coming soon.'),
    '#required' => TRUE,
  );
  
  /*Banners*/
  $form['banners'] = array(
    '#type' => 'fieldset',
    '#title' => t('Banners with attention grabbing headlines'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );  
  $form['banners']['debugacademy_banner_one_headline'] = array(
    '#type' => 'textfield',
    '#title' => t('Banner one headline'),
    '#description' => t('Headline for the first banner.'),
    '#default_value' => variable_get('debugacademy_banner_one_headline', 'JOIN THE MOVEMENT'),
    '#required' => TRUE,
  );
  $form['banners']['debugacademy_banner_two_headline'] = array(
    '#type' => 'textfield',
    '#title' => t('Banner two headline'),
    '#description' => t('Headline for the second banner.'),
    '#default_value' => variable_get('debugacademy_banner_two_headline', 'PREVIOUS GRADUATE STATISTICS'),
    '#required' => TRUE,
  );
  
  /*How Debug Academy is Different*/
  $form['different'] = array(
    '#type' => 'fieldset',
    '#title' => t('How Debug Academy is Different'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );  
  $form['different']['debugacademy_different_intro'] = array(
    '#type' => 'textarea',
    '#title' => t('How Debug Academy is Different'),
    '#description' => t('Small paragraph on what separates Debug Academy from similar programs.'),
    '#default_value' => variable_get('debugacademy_different_intro', 'Our personalized approach to teaching allows us to cater to individual student
						strengths and interests. Students are part of a real development team working on real projects. They leave the class with
						a working portfolio and applied experience on a software project lead by a senior developer.'),
    '#required' => TRUE,
  );
  $form['different']['debugacademy_different_bullets'] = array(
    '#type' => 'fieldset',
    '#title' => t('Bulleted list of how Debug Academy is different'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['different']['debugacademy_different_bullets']['debugacademy_different_bullet_one'] = array(
    '#type' => 'textfield',
    '#title' => t('Bullet One'),
    '#description' => t('Bullet one on how Debug Academy is different'),
    '#default_value' => variable_get('debugacademy_different_bullet_one', 'Bullet one'),
    '#required' => TRUE,
  );
  $form['different']['debugacademy_different_bullets']['debugacademy_different_bullet_two'] = array(
    '#type' => 'textfield',
    '#title' => t('Bullet Two'),
    '#description' => t('Bullet two on how Debug Academy is different'),
    '#default_value' => variable_get('debugacademy_different_bullet_two', 'Bullet two'),
    '#required' => TRUE,
  );
  $form['different']['debugacademy_different_bullets']['debugacademy_different_bullet_three'] = array(
    '#type' => 'textfield',
    '#title' => t('Bullet Three'),
    '#description' => t('Bullet three on how Debug Academy is different'),
    '#default_value' => variable_get('debugacademy_different_bullet_three', 'Bullet three'),
    '#required' => TRUE,
  );
  $form['different']['debugacademy_different_bullets']['debugacademy_different_bullet_four'] = array(
    '#type' => 'textfield',
    '#title' => t('Bullet Four'),
    '#description' => t('Bullet four on how Debug Academy is different'),
    '#default_value' => variable_get('debugacademy_different_bullet_four', 'Bullet four'),
    '#required' => TRUE,
  );
  $form['different']['debugacademy_different_bullets']['debugacademy_different_bullet_five'] = array(
    '#type' => 'textfield',
    '#title' => t('Bullet Five'),
    '#description' => t('Bullet five on how Debug Academy is different'),
    '#default_value' => variable_get('debugacademy_different_bullet_five', 'Bullet five'),
    '#required' => TRUE,
  );
  $form['different']['debugacademy_different_bullets']['debugacademy_different_bullet_six'] = array(
    '#type' => 'textfield',
    '#title' => t('Bullet Six'),
    '#description' => t('Bullet six on how Debug Academy is different'),
    '#default_value' => variable_get('debugacademy_different_bullet_six', 'Bullet six'),
    '#required' => TRUE,
  );

 return system_settings_form($form);
}
