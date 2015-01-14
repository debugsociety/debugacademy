<?php
/**
 * @file
 * graduates.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function graduates_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'our_graduates_test_';
  $page->task = 'page';
  $page->admin_title = 'Our Graduates (test)';
  $page->admin_description = 'Test for our graduate block on the homepage';
  $page->path = 'graduates';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_our_graduates_test__panel_context';
  $handler->task = 'page';
  $handler->subtask = 'our_graduates_test_';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '407474aa-a541-4ee9-b855-e09845f86c53';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e73ede44-8486-4846-ae6b-9a2723f4a752';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'graduates-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'block',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e73ede44-8486-4846-ae6b-9a2723f4a752';
    $display->content['new-e73ede44-8486-4846-ae6b-9a2723f4a752'] = $pane;
    $display->panels['center'][0] = 'new-e73ede44-8486-4846-ae6b-9a2723f4a752';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e73ede44-8486-4846-ae6b-9a2723f4a752';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['our_graduates_test_'] = $page;

  return $pages;

}
