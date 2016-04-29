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
      'menu' => NULL,
      'sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '82e4870a-21b4-42bc-82e4-4f2c26c7c7e3';
  $display->content = array();
  $display->panels = array();
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
  $pane = new stdClass();
  $pane->pid = 'new-3c9781f1-948a-48fb-b163-8883554c67b1';
  $pane->panel = 'main-content';
  $pane->type = 'custom_pagers_pane';
  $pane->subtype = 'custom_pagers_pane';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'pager_id' => '1',
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '3c9781f1-948a-48fb-b163-8883554c67b1';
  $display->content['new-3c9781f1-948a-48fb-b163-8883554c67b1'] = $pane;
  $display->panels['main-content'][2] = 'new-3c9781f1-948a-48fb-b163-8883554c67b1';
  $pane = new stdClass();
  $pane->pid = 'new-e6de4d28-7df6-4663-bae6-cc94cc944e83';
  $pane->panel = 'menu';
  $pane->type = 'menu_tree';
  $pane->subtype = 'menu-fate-core';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'parent' => 'menu-fate-core:0',
    'title_link' => 0,
    'admin_title' => '',
    'level' => '1',
    'follow' => 0,
    'depth' => '0',
    'depth_relative' => 0,
    'expanded' => 0,
    'sort' => 0,
    'menu_name' => 'menu-fate-core',
    'parent_mlid' => '0',
    'override_title' => 0,
    'override_title_text' => '',
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
  $pane->uuid = 'e6de4d28-7df6-4663-bae6-cc94cc944e83';
  $display->content['new-e6de4d28-7df6-4663-bae6-cc94cc944e83'] = $pane;
  $display->panels['menu'][0] = 'new-e6de4d28-7df6-4663-bae6-cc94cc944e83';
  $pane = new stdClass();
  $pane->pid = 'new-5decaa73-fa37-4646-b1ce-1ffee251e421';
  $pane->panel = 'menu';
  $pane->type = 'menu_tree';
  $pane->subtype = 'menu-fate-accelerated';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'parent' => 'menu-fate-accelerated:0',
    'title_link' => 0,
    'admin_title' => '',
    'level' => '1',
    'follow' => 0,
    'depth' => '0',
    'depth_relative' => 0,
    'expanded' => 0,
    'sort' => 0,
    'menu_name' => 'menu-fate-accelerated',
    'parent_mlid' => '0',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '5decaa73-fa37-4646-b1ce-1ffee251e421';
  $display->content['new-5decaa73-fa37-4646-b1ce-1ffee251e421'] = $pane;
  $display->panels['menu'][1] = 'new-5decaa73-fa37-4646-b1ce-1ffee251e421';
  $pane = new stdClass();
  $pane->pid = 'new-acdc5c4d-beae-4eea-af4f-07fbe71fc0a8';
  $pane->panel = 'menu';
  $pane->type = 'menu_tree';
  $pane->subtype = 'menu-fate-system-toolkit';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'parent' => 'menu-fate-system-toolkit:0',
    'title_link' => 0,
    'admin_title' => '',
    'level' => '1',
    'follow' => 0,
    'depth' => '0',
    'depth_relative' => 0,
    'expanded' => 0,
    'sort' => 0,
    'menu_name' => 'menu-fate-system-toolkit',
    'parent_mlid' => '0',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'acdc5c4d-beae-4eea-af4f-07fbe71fc0a8';
  $display->content['new-acdc5c4d-beae-4eea-af4f-07fbe71fc0a8'] = $pane;
  $display->panels['menu'][2] = 'new-acdc5c4d-beae-4eea-af4f-07fbe71fc0a8';
  $pane = new stdClass();
  $pane->pid = 'new-62476994-db3a-4d3e-88d1-4b16349f6b1b';
  $pane->panel = 'menu';
  $pane->type = 'menu_tree';
  $pane->subtype = 'menu-atomic-robo';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'parent' => 'menu-atomic-robo:0',
    'title_link' => 0,
    'admin_title' => '',
    'level' => '1',
    'follow' => 0,
    'depth' => '0',
    'depth_relative' => 0,
    'expanded' => 0,
    'sort' => 0,
    'menu_name' => 'menu-atomic-robo',
    'parent_mlid' => '0',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '62476994-db3a-4d3e-88d1-4b16349f6b1b';
  $display->content['new-62476994-db3a-4d3e-88d1-4b16349f6b1b'] = $pane;
  $display->panels['menu'][3] = 'new-62476994-db3a-4d3e-88d1-4b16349f6b1b';
  $pane = new stdClass();
  $pane->pid = 'new-f896c17e-e672-41d1-882d-f2385cc36c5b';
  $pane->panel = 'menu';
  $pane->type = 'menu_tree';
  $pane->subtype = 'menu-frontier-spirit';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'parent' => 'menu-frontier-spirit:0',
    'title_link' => 0,
    'admin_title' => '',
    'level' => '1',
    'follow' => 0,
    'depth' => '0',
    'depth_relative' => 0,
    'expanded' => 0,
    'sort' => 0,
    'menu_name' => 'menu-frontier-spirit',
    'parent_mlid' => '0',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'f896c17e-e672-41d1-882d-f2385cc36c5b';
  $display->content['new-f896c17e-e672-41d1-882d-f2385cc36c5b'] = $pane;
  $display->panels['menu'][4] = 'new-f896c17e-e672-41d1-882d-f2385cc36c5b';
  $pane = new stdClass();
  $pane->pid = 'new-8f376c70-720c-4565-b199-9e02d22d90db';
  $pane->panel = 'menu';
  $pane->type = 'menu_tree';
  $pane->subtype = 'menu-gods-and-monsters';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'parent' => 'menu-gods-and-monsters:0',
    'title_link' => 0,
    'admin_title' => '',
    'level' => '1',
    'follow' => 0,
    'depth' => '0',
    'depth_relative' => 0,
    'expanded' => 0,
    'sort' => 0,
    'menu_name' => 'menu-gods-and-monsters',
    'parent_mlid' => '0',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '8f376c70-720c-4565-b199-9e02d22d90db';
  $display->content['new-8f376c70-720c-4565-b199-9e02d22d90db'] = $pane;
  $display->panels['menu'][5] = 'new-8f376c70-720c-4565-b199-9e02d22d90db';
  $pane = new stdClass();
  $pane->pid = 'new-4998329e-81c2-4a64-91ba-04ff028930f5';
  $pane->panel = 'menu';
  $pane->type = 'menu_tree';
  $pane->subtype = 'menu-sails-full-of-stars';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'parent' => 'menu-sails-full-of-stars:0',
    'title_link' => 0,
    'admin_title' => '',
    'level' => '1',
    'follow' => 0,
    'depth' => '0',
    'depth_relative' => 0,
    'expanded' => 0,
    'sort' => 0,
    'menu_name' => 'menu-sails-full-of-stars',
    'parent_mlid' => '0',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '4998329e-81c2-4a64-91ba-04ff028930f5';
  $display->content['new-4998329e-81c2-4a64-91ba-04ff028930f5'] = $pane;
  $display->panels['menu'][6] = 'new-4998329e-81c2-4a64-91ba-04ff028930f5';
  $pane = new stdClass();
  $pane->pid = 'new-72fbbdd8-bd57-46a7-96db-2c7bd15a0c6d';
  $pane->panel = 'menu';
  $pane->type = 'menu_tree';
  $pane->subtype = 'menu-sails-full-of-stars';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'parent' => 'menu-sails-full-of-stars:0',
    'title_link' => 0,
    'admin_title' => '',
    'level' => '1',
    'follow' => 0,
    'depth' => '0',
    'depth_relative' => 0,
    'expanded' => 0,
    'sort' => 0,
    'menu_name' => 'menu-sails-full-of-stars',
    'parent_mlid' => '0',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '72fbbdd8-bd57-46a7-96db-2c7bd15a0c6d';
  $display->content['new-72fbbdd8-bd57-46a7-96db-2c7bd15a0c6d'] = $pane;
  $display->panels['menu'][7] = 'new-72fbbdd8-bd57-46a7-96db-2c7bd15a0c6d';
  $pane = new stdClass();
  $pane->pid = 'new-0bae365c-1f22-4bed-805a-e42b5612a481';
  $pane->panel = 'menu';
  $pane->type = 'menu_tree';
  $pane->subtype = 'menu-venture-city';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'parent' => 'menu-venture-city:0',
    'title_link' => 0,
    'admin_title' => '',
    'level' => '1',
    'follow' => 0,
    'depth' => '0',
    'depth_relative' => 0,
    'expanded' => 0,
    'sort' => 0,
    'menu_name' => 'menu-venture-city',
    'parent_mlid' => '0',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '0bae365c-1f22-4bed-805a-e42b5612a481';
  $display->content['new-0bae365c-1f22-4bed-805a-e42b5612a481'] = $pane;
  $display->panels['menu'][8] = 'new-0bae365c-1f22-4bed-805a-e42b5612a481';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_dcfc0156-e7dc-4544-acc4-2f687ed78f00'] = $handler;

  return $export;
}
