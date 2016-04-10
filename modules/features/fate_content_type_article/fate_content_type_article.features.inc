<?php
/**
 * @file
 * fate_content_type_article.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fate_content_type_article_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function fate_content_type_article_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Articles are the the content type used for entering Fate rules pages, e.g. Fate Core, FAE, or the System Toolkit.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
