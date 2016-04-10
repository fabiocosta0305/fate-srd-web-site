<?php
/**
 * @file
 * fate_menus.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function fate_menus_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-fate-accelerated.
  $menus['menu-fate-accelerated'] = array(
    'menu_name' => 'menu-fate-accelerated',
    'title' => 'Fate Accelerated',
    'description' => '',
  );
  // Exported menu: menu-fate-core.
  $menus['menu-fate-core'] = array(
    'menu_name' => 'menu-fate-core',
    'title' => 'Fate Core',
    'description' => '',
  );
  // Exported menu: menu-fate-system-toolkit.
  $menus['menu-fate-system-toolkit'] = array(
    'menu_name' => 'menu-fate-system-toolkit',
    'title' => 'Fate System Toolkit',
    'description' => '',
  );
  // Exported menu: menu-venture-city.
  $menus['menu-venture-city'] = array(
    'menu_name' => 'menu-venture-city',
    'title' => 'Venture City',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Fate Accelerated');
  t('Fate Core');
  t('Fate System Toolkit');
  t('Venture City');

  return $menus;
}
