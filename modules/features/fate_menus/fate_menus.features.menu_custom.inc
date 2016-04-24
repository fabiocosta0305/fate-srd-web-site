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

  // Exported menu: menu-atomic-robo.
  $menus['menu-atomic-robo'] = array(
    'menu_name' => 'menu-atomic-robo',
    'title' => 'Atomic Robo',
    'description' => '',
  );
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
  // Exported menu: menu-fate-main-menu.
  $menus['menu-fate-main-menu'] = array(
    'menu_name' => 'menu-fate-main-menu',
    'title' => 'Fate Main Menu',
    'description' => '',
  );
  // Exported menu: menu-fate-system-toolkit.
  $menus['menu-fate-system-toolkit'] = array(
    'menu_name' => 'menu-fate-system-toolkit',
    'title' => 'Fate System Toolkit',
    'description' => '',
  );
  // Exported menu: menu-frontier-spirit.
  $menus['menu-frontier-spirit'] = array(
    'menu_name' => 'menu-frontier-spirit',
    'title' => 'Frontier Spirit',
    'description' => '',
  );
  // Exported menu: menu-gods-and-monsters.
  $menus['menu-gods-and-monsters'] = array(
    'menu_name' => 'menu-gods-and-monsters',
    'title' => 'Gods and Monsters',
    'description' => '',
  );
  // Exported menu: menu-sails-full-of-stars.
  $menus['menu-sails-full-of-stars'] = array(
    'menu_name' => 'menu-sails-full-of-stars',
    'title' => 'Sails Full of Stars',
    'description' => '',
  );
  // Exported menu: menu-three-rocketeers.
  $menus['menu-three-rocketeers'] = array(
    'menu_name' => 'menu-three-rocketeers',
    'title' => 'Three Rocketeers',
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
  t('Atomic Robo');
  t('Fate Accelerated');
  t('Fate Core');
  t('Fate Main Menu');
  t('Fate System Toolkit');
  t('Frontier Spirit');
  t('Gods and Monsters');
  t('Sails Full of Stars');
  t('Three Rocketeers');
  t('Venture City');

  return $menus;
}
