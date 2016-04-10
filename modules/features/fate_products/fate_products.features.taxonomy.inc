<?php
/**
 * @file
 * fate_products.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function fate_products_taxonomy_default_vocabularies() {
  return array(
    'publishers' => array(
      'name' => 'Publishers',
      'machine_name' => 'publishers',
      'description' => 'This is a list of Fate publishers.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
