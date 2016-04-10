<?php
/**
 * @file
 * fate_products.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function fate_products_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_crowdsourcing|node|fate_books|form';
  $field_group->group_name = 'group_crowdsourcing';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fate_books';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Crowdsourcing',
    'weight' => '3',
    'children' => array(
      0 => 'field_crowdsourced',
      1 => 'field_end_date',
      2 => 'field_patreon',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Crowdsourcing',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-crowdsourcing field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_crowdsourcing|node|fate_books|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_featured|node|fate_books|form';
  $field_group->group_name = 'group_featured';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fate_books';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Featured',
    'weight' => '1',
    'children' => array(
      0 => 'field_book_cover',
      1 => 'field_date_to_stop_being_feature',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Featured',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-featured field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_featured|node|fate_books|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Crowdsourcing');
  t('Featured');

  return $field_groups;
}
