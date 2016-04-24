<?php
/**
 * @file
 * fate_layouts.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function fate_layouts_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_dcfc0156-e7dc-4544-acc4-2f687ed78f00';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Article',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'logic' => 'or',
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'article' => 'article',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'fate_article_page';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left' => NULL,
      'right' => NULL,
      'aside' => NULL,
      'main-content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '82e4870a-21b4-42bc-82e4-4f2c26c7c7e3';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-9005fe69-4f86-4e6b-b843-c5a00629a9d5';
  $pane->panel = 'aside';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-fate-main-menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9005fe69-4f86-4e6b-b843-c5a00629a9d5';
  $display->content['new-9005fe69-4f86-4e6b-b843-c5a00629a9d5'] = $pane;
  $display->panels['aside'][0] = 'new-9005fe69-4f86-4e6b-b843-c5a00629a9d5';
  $pane = new stdClass();
  $pane->pid = 'new-99fa1c00-f46a-4263-81a7-41a4272f945d';
  $pane->panel = 'main-content';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'markup' => 'h1',
    'id' => 'page-title',
    'class' => '',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h1',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'page-title',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '99fa1c00-f46a-4263-81a7-41a4272f945d';
  $display->content['new-99fa1c00-f46a-4263-81a7-41a4272f945d'] = $pane;
  $display->panels['main-content'][0] = 'new-99fa1c00-f46a-4263-81a7-41a4272f945d';
  $pane = new stdClass();
  $pane->pid = 'new-1b17a648-b41b-4a56-b909-5ab4bb305a01';
  $pane->panel = 'main-content';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h1',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '1b17a648-b41b-4a56-b909-5ab4bb305a01';
  $display->content['new-1b17a648-b41b-4a56-b909-5ab4bb305a01'] = $pane;
  $display->panels['main-content'][1] = 'new-1b17a648-b41b-4a56-b909-5ab4bb305a01';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_dcfc0156-e7dc-4544-acc4-2f687ed78f00'] = $handler;

  return $export;
}
