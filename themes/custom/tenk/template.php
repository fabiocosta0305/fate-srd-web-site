<?php

/**
 * Override or insert variables into the maintenance page template.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
/* -- Delete this line if you want to use this function
function tenk_preprocess_maintenance_page(&$vars) {
  // When a variable is manipulated or added in preprocess_html or
  // preprocess_page, that same work is probably needed for the maintenance page
  // as well, so we can just re-use those functions to do that work here.
  // tenk_preprocess_html($vars);
  // tenk_preprocess_page($vars);

  // This preprocessor will also be used if the db is inactive. To ensure your
  // theme is used, add the following line to your settings.php file:
  // $conf['maintenance_theme'] = 'fate';
  // Also, check $vars['db_is_active'] before doing any db queries.
}

/**
 * Implements hook_modernizr_load_alter().
 *
 * @return
 *   An array to be output as yepnope testObjects.
 */
/* -- Delete this line if you want to use this function
function tenk_modernizr_load_alter(&$load) {

}

/**
 * Implements hook_preprocess_html()
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
/* -- Delete this line if you want to use this function
function tenk_preprocess_html(&$vars) {

}

/**
 * Override or insert variables into the page template.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
function tenk_preprocess_page(&$vars) {

  drupal_add_css(drupal_get_path('theme', 'tenk') . '/css/main.css');

  /*
   * Main menu
   */
  $menus = [
    'menu-fate-core',
    'menu-fate-accelerated',
    'menu-fate-system-toolkit',
    'menu-atomic-robo',
    'menu-frontier-spirit',
    'menu-gods-and-monsters',
    'menu-sails-full-of-stars',
    'menu-three-rocketeers',
    'menu-venture-city',
  ];
  $block_module = 'menu';
  $navMenu = '<nav class="nav-menu">';

  foreach ($menus as &$menuItem) {
    $navMenu .= '<section class="nav-section">';
    $block = module_invoke($block_module, 'block_view', $menuItem);
    $navMenu .= '<h3 class="nav-section-title">' . $block['subject'] . '</h3>';
    $navMenu .= '<section class="nav-section-content">';
    $navMenu .= render($block['content']);
    $navMenu .= '</section></section>';
  }

  $navMenu .= '</nav>';
  $vars['navMenu'] = $navMenu;

  /*
   * Add Fate book term above page title.
   */
  $node = menu_get_object();

  if ($node && $node->type == "article") {

    $tid = $node->field_tags['und'][0]['tid'];
    $term = taxonomy_term_load($tid);
    $name = $term->name;

    // Sets breadcrumb
    $vars['section'] = $name;
  }
}

/**
 * Search, change the style.
 * @param $form
 * @param $form_state
 * @param $form_id
 * https://www.drupal.org/node/154137.
 */
function tenk_form_search_block_form_alter(&$form, &$form_state, $form_id) {
  // http://drupal.stackexchange.com/questions/77116/how-do-i-use-font-awesome-on-a-drupal-form-submit-button
  $form['actions']['submit']['#value'] = decode_entities('&#xf002;');
  $form['actions']['submit']['#attributes']['class'][] = 'search-submit';
  //https://www.drupal.org/node/154137
  $form['search_block_form']['#attributes']['placeholder'] = t('Search...');
  $form['search_block_form']['#title'] = t('<em>Search</em>'); // Change the text on the label element
  $form['search_block_form']['#title_display'] = 'invisible'; // Toggle label visibilty
}

/**
 * Override or insert variables into the region templates.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
/* -- Delete this line if you want to use this function
function tenk_preprocess_region(&$vars) {

}
// */

/**
 * Override or insert variables into the block templates.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
function tenk_preprocess_block(&$vars) {

  /**
   * Footer menu.
   */
  if ($vars['block']->module == 'menu' && $vars['block']->delta == 'menu-footer') {
    $vars['classes_array'][] = drupal_html_class('nav-footer');
  }

  /**
   * Mailchimp signup.
   */
  if ($vars['block']->module == 'mailchimp_signup' && $vars['block']->delta == 'main_mailchimp_signup_form') {
    $vars['classes_array'][] = drupal_html_class('mailchimp-signup');
  }

  /**
   * Shirt promo.
   */
  if ($vars['block']->module == 'block' && $vars['block']->delta == '2') {
    $vars['classes_array'][] = drupal_html_class('shirt-promo-block');
  }

}

// */

/**
 * Override or insert variables into the entity template.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
/* -- Delete this line if you want to use this function
function tenk_preprocess_entity(&$vars) {

}
// */

/**
 * Override or insert variables into the node template.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
/* -- Delete this line if you want to use this function
function tenk_preprocess_node(&$vars) {
  $node = $vars['node'];
}
// */

/**
 * Override or insert variables into the field template.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("field" in this case.)
 */
/* -- Delete this line if you want to use this function
function tenk_preprocess_field(&$vars, $hook) {

}
// */

/**
 * Override or insert variables into the comment template.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
/* -- Delete this line if you want to use this function
function tenk_preprocess_comment(&$vars) {
  $comment = $vars['comment'];
}
// */

/**
 * Override or insert variables into the views template.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
/* -- Delete this line if you want to use this function
function tenk_preprocess_views_view(&$vars) {
  $view = $vars['view'];
}
// */