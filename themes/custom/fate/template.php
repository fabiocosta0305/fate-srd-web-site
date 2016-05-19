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
  // https://www.drupal.org/node/45295
  $form['search_block_form']['#attributes']['onblur'] = "jQuery(this).removeClass('search-active');";
  $form['search_block_form']['#attributes']['onfocus'] = "jQuery(this).addClass('search-active');";
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

  if ($vars['block']->module == 'menu' && $vars['block']->delta == 'menu-footer') {
    $vars['classes_array'][] = drupal_html_class('nav-footer');
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
  foreach ($css as $key => $value) {
    if ($value['group'] != CSS_THEME) {
      $exclude[$key] = FALSE;
    }
  }
  if (!(bool)$GLOBALS['user']->uid){
    $css = array_diff_key($css, $exclude);
  }
   unset($css[drupal_get_path('module', 'system') . '/system.theme.css']);
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
