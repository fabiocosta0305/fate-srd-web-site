<?php

/**
 * Override or insert variables into the maintenance page template.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
/* -- Delete this line if you want to use this function
function fate_preprocess_maintenance_page(&$vars) {
  // When a variable is manipulated or added in preprocess_html or
  // preprocess_page, that same work is probably needed for the maintenance page
  // as well, so we can just re-use those functions to do that work here.
  // fate_preprocess_html($vars);
  // fate_preprocess_page($vars);

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
function fate_modernizr_load_alter(&$load) {

}

/**
 * Implements hook_preprocess_html()
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
/* -- Delete this line if you want to use this function
function fate_preprocess_html(&$vars) {

}

/**
 * Override or insert variables into the page template.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
function fate_preprocess_page(&$vars) {

  drupal_add_css(drupal_get_path('theme', 'fate') . '/css/main.css');
  drupal_add_js(drupal_get_path('theme', 'fate') . '/js/scripts.js');
  drupal_add_js(drupal_get_path('theme', 'fate') . '/js/modernizr-custom.js');

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

  /**
   * Add shirt promo
   */
  $promo_text = "Support the Fate SRD. <a href='https://www.amazon.com/dp/B01KF1DM5I'>Buy a shirt</a>";
  $promo = '<section class="promo shirt-promo-text">' . $promo_text . '</section>';
  $vars['promo'] = $promo;
}

/**
 * Search, change the style.
 * @param $form
 * @param $form_state
 * @param $form_id
 * https://www.drupal.org/node/154137.
 */
function fate_form_search_block_form_alter(&$form, &$form_state, $form_id) {
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
function fate_preprocess_region(&$vars) {

}
// */

/**
 * Override or insert variables into the block templates.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
function fate_preprocess_block(&$vars) {

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
function fate_preprocess_entity(&$vars) {

}
// */

/**
 * Override or insert variables into the node template.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
/* -- Delete this line if you want to use this function
function fate_preprocess_node(&$vars) {
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
function fate_preprocess_field(&$vars, $hook) {

}
// */

/**
 * Override or insert variables into the comment template.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
/* -- Delete this line if you want to use this function
function fate_preprocess_comment(&$vars) {
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
function fate_preprocess_views_view(&$vars) {
  $view = $vars['view'];
}
// */


/**
 * Override or insert css on the site.
 *
 * @param $css
 *   An array of all CSS items being requested on the page.
 */
function fate_css_alter(&$css) {
  /* Remove some default Drupal css */
  $exclude = array(
    'modules/aggregator/aggregator.css' => FALSE,
    'modules/block/block.css' => FALSE,
    'modules/book/book.css' => FALSE,
    'modules/comment/comment.css' => FALSE,
    'modules/dblog/dblog.css' => FALSE,
    'modules/field/theme/field.css' => FALSE,
    'modules/file/file.css' => FALSE,
    'modules/filter/filter.css' => FALSE,
    'modules/forum/forum.css' => FALSE,
    'modules/help/help.css' => FALSE,
    'modules/menu/menu.css' => FALSE,
    'modules/node/node.css' => FALSE,
    'modules/openid/openid.css' => FALSE,
    'modules/poll/poll.css' => FALSE,
    'modules/profile/profile.css' => FALSE,
    'modules/search/search.css' => FALSE,
    'modules/statistics/statistics.css' => FALSE,
    'modules/syslog/syslog.css' => FALSE,
    'modules/system/admin.css' => FALSE,
    'modules/system/maintenance.css' => FALSE,
    'modules/system/system.css' => FALSE,
    'modules/system/system.admin.css' => FALSE,
    'modules/system/system.maintenance.css' => FALSE,
    'modules/system/system.messages.css' => FALSE,
    'modules/system/system.theme.css' => FALSE,
    'modules/system/system.menus.css' => FALSE,
    'modules/taxonomy/taxonomy.css' => FALSE,
    'modules/tracker/tracker.css' => FALSE,
    'modules/update/update.css' => FALSE,
    'modules/user/user.css' => FALSE,
    drupal_get_path('module', 'views') . '/css/views.css' => FALSE,
  );
  $css = array_diff_key($css, $exclude);
}



// */

/**
 * Override or insert javascript on the site.
 *
 * @param $js
 *   An array of all JavaScript being presented on the page.
 */
/* -- Delete this line if you want to use this function
function fate_js_alter(&$js) {

}
// */


function insert_block($block_module, $block_delta, $print_title = NULL) {
  $block = block_load($block_module, $block_delta);
  $render_array = _block_get_renderable_array(_block_render_blocks(array($block)));
  $output = render($render_array);
  if ($print_title) {
    print "<h3>$block->title</h3>";
  }
  print $output;
}
