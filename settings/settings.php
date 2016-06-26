<?php
/**
 * @file
 * Drupal site-specific configuration file.
 */

/**
 * Include secret configuration.
 *
 * Contains database settings and other sensitive environment specific
 * information that shouldn't be in version control.
 */
if (file_exists(DRUPAL_ROOT . '/sites/default/secret.settings.php')) {
  include DRUPAL_ROOT . '/sites/default/secret.settings.php';
}

/**
 * Master module configuration.
 * @see https://www.drupal.org/project/master
 */
$conf['install_profile'] = 'standard';
$conf['master_version'] = 2;
$conf['master_modules'] = array(
  'base' => array(

    // Core modules.
    'block',
    'file',
    'help',
    'list',
    'menu',
    'number',
    'options',
    'path',
    'rdf',
    'search',
    'taxonomy',
    'url',
    'views',

    // Contrib modules.
    'admin_menu',
    'entity',
    'entityreference',
    'features',
    'features_extra',
    'fences',
    'field_group',
    'master',
    'panels',
    'pathauto',
    'strongarm',
    'token',
    'views',
    // More modules.
    'admin_views',
    'admin_menu_toolbar',
    'backup_migrate',
    'devel',
    'diff',
    'field_property',
    'google_analytics',
    'google_cse',
    'honeypot',
    'jqmulti',
    'jquery_update',
    'libraries',
    'menu_block',
    'module_filter',
    'pathologic',
    'views_bulk_operations',
    'webform',
    'wysiwyg',
    'xmlsitemap',
    'migrate',
    'migrate_d2d',
    'migrate_d2d_ui',
    'menu_import',
    'custom_pagers',
    'menu_node',
    'menu_node_views',
    'date',
    'link',
//    'mailchimp',
//    'mailchimp_activity',
//    'mailchimp_campaign',
//    'mailchimp_lists',
//    'mailchimp_signup',
    'panels_ipe',
    'panels_node',
    'page_manager',
    'panels_extras',
    'menu_node_access',
    'chosen',
    'linkit',
    'advanced_menu_core',
    'advanced_menu_menu_admin',
    'advanced_menu_blocks',
    'advanced_menu_submenu',
    'special_menu_items',
    'menu_attributes',
    'menu_expanded',

    // Custom modules.

    // Feature modules.
    'fate_taxonomies',
    'fate_content_type_article',
    'fate_menus',
    'fate_products',
    'fate_products_view',
    'fate_mailchimp_feature',
    'fate_layouts',
    'fate_theme'

  ),
  'local' => array(
    'coder',
    'devel',
    'devel_generate',
    'field_ui',
    'views_ui',
  ),
  'dev' => array(),
  'test' => array(),
  'live' => array(),
);

$update_free_access = FALSE;

ini_set('session.gc_probability', 1);
ini_set('session.gc_divisor', 100);
ini_set('session.gc_maxlifetime', 200000);
ini_set('session.cookie_lifetime', 2000000);

$conf['404_fast_paths_exclude'] = '/\/(?:styles)\//';
$conf['404_fast_paths'] = '/\.(?:txt|png|gif|jpe?g|css|js|ico|swf|flv|cgi|bat|pl|dll|exe|asp)$/i';
$conf['404_fast_html'] = '<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML+RDFa 1.0//EN" "http://www.w3.org/MarkUp/DTD/xhtml-rdfa-1.dtd"><html xmlns="http://www.w3.org/1999/xhtml"><head><title>404 Not Found</title></head><body><h1>Not Found</h1><p>The requested URL "@path" was not found on this server.</p></body></html>';

/**
 * Include local configuration.
 *
 * IMPORTANT: This block should remain at the bottom of this file.
 */
if (file_exists(DRUPAL_ROOT . '/sites/default/local.settings.php')) {
  include DRUPAL_ROOT . '/sites/default/local.settings.php';
}
