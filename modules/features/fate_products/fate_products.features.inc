<?php
/**
 * @file
 * fate_products.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fate_products_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function fate_products_node_info() {
  $items = array(
    'fate_books' => array(
      'name' => t('Fate Publications'),
      'base' => 'node_content',
      'description' => t('This content type is for listing Fate publications on the site.'),
      'has_title' => '1',
      'title_label' => t('Book Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
