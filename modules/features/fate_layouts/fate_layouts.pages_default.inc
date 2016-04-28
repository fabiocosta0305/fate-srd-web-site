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
  $pane->pid = 'new-bd542c2a-20dd-45e4-98ee-0b2b65d5a848';
  $pane->panel = 'aside';
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
  $pane->uuid = 'bd542c2a-20dd-45e4-98ee-0b2b65d5a848';
  $display->content['new-bd542c2a-20dd-45e4-98ee-0b2b65d5a848'] = $pane;
  $display->panels['aside'][0] = 'new-bd542c2a-20dd-45e4-98ee-0b2b65d5a848';
  $pane = new stdClass();
  $pane->pid = 'new-a1ef41ee-191b-4d9d-921a-b7a09d1c2c96';
  $pane->panel = 'aside';
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
  $pane->uuid = 'a1ef41ee-191b-4d9d-921a-b7a09d1c2c96';
  $display->content['new-a1ef41ee-191b-4d9d-921a-b7a09d1c2c96'] = $pane;
  $display->panels['aside'][1] = 'new-a1ef41ee-191b-4d9d-921a-b7a09d1c2c96';
  $pane = new stdClass();
  $pane->pid = 'new-9566e101-b567-4e85-83ce-84544d3f5588';
  $pane->panel = 'aside';
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
  $pane->uuid = '9566e101-b567-4e85-83ce-84544d3f5588';
  $display->content['new-9566e101-b567-4e85-83ce-84544d3f5588'] = $pane;
  $display->panels['aside'][2] = 'new-9566e101-b567-4e85-83ce-84544d3f5588';
  $pane = new stdClass();
  $pane->pid = 'new-850b4993-7c4b-472f-bb69-cf8b0618e9bb';
  $pane->panel = 'aside';
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
  $pane->uuid = '850b4993-7c4b-472f-bb69-cf8b0618e9bb';
  $display->content['new-850b4993-7c4b-472f-bb69-cf8b0618e9bb'] = $pane;
  $display->panels['aside'][3] = 'new-850b4993-7c4b-472f-bb69-cf8b0618e9bb';
  $pane = new stdClass();
  $pane->pid = 'new-6bbfb551-1ce9-4718-baa8-f8a12151f03c';
  $pane->panel = 'aside';
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
  $pane->uuid = '6bbfb551-1ce9-4718-baa8-f8a12151f03c';
  $display->content['new-6bbfb551-1ce9-4718-baa8-f8a12151f03c'] = $pane;
  $display->panels['aside'][4] = 'new-6bbfb551-1ce9-4718-baa8-f8a12151f03c';
  $pane = new stdClass();
  $pane->pid = 'new-65f68d30-dcdf-426e-b959-d227f5d68d5c';
  $pane->panel = 'aside';
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
  $pane->uuid = '65f68d30-dcdf-426e-b959-d227f5d68d5c';
  $display->content['new-65f68d30-dcdf-426e-b959-d227f5d68d5c'] = $pane;
  $display->panels['aside'][5] = 'new-65f68d30-dcdf-426e-b959-d227f5d68d5c';
  $pane = new stdClass();
  $pane->pid = 'new-02840372-cc86-4de8-90af-69e3b53b0c68';
  $pane->panel = 'aside';
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
  $pane->uuid = '02840372-cc86-4de8-90af-69e3b53b0c68';
  $display->content['new-02840372-cc86-4de8-90af-69e3b53b0c68'] = $pane;
  $display->panels['aside'][6] = 'new-02840372-cc86-4de8-90af-69e3b53b0c68';
  $pane = new stdClass();
  $pane->pid = 'new-d67dbc38-6775-4512-bbee-1be465f48e8a';
  $pane->panel = 'aside';
  $pane->type = 'menu_tree';
  $pane->subtype = 'menu-three-rocketeers';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'parent' => 'menu-three-rocketeers:0',
    'title_link' => 0,
    'admin_title' => '',
    'level' => '1',
    'follow' => 0,
    'depth' => '0',
    'depth_relative' => 0,
    'expanded' => 0,
    'sort' => 0,
    'menu_name' => 'menu-three-rocketeers',
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
  $pane->uuid = 'd67dbc38-6775-4512-bbee-1be465f48e8a';
  $display->content['new-d67dbc38-6775-4512-bbee-1be465f48e8a'] = $pane;
  $display->panels['aside'][7] = 'new-d67dbc38-6775-4512-bbee-1be465f48e8a';
  $pane = new stdClass();
  $pane->pid = 'new-0930504f-eee3-4f10-b1ec-152fd6f71a83';
  $pane->panel = 'aside';
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
  $pane->uuid = '0930504f-eee3-4f10-b1ec-152fd6f71a83';
  $display->content['new-0930504f-eee3-4f10-b1ec-152fd6f71a83'] = $pane;
  $display->panels['aside'][8] = 'new-0930504f-eee3-4f10-b1ec-152fd6f71a83';
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
  $pane->pid = 'new-74723dcd-a70d-4fe2-9efc-be8ea3039bdd';
  $pane->panel = 'main-content';
  $pane->type = 'block';
  $pane->subtype = 'custom_pagers-1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '74723dcd-a70d-4fe2-9efc-be8ea3039bdd';
  $display->content['new-74723dcd-a70d-4fe2-9efc-be8ea3039bdd'] = $pane;
  $display->panels['main-content'][2] = 'new-74723dcd-a70d-4fe2-9efc-be8ea3039bdd';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_dcfc0156-e7dc-4544-acc4-2f687ed78f00'] = $handler;

  return $export;
}
