<?php
/**
 * @file
 * feature_contenido_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function feature_contenido_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_contenido_feature';
  $strongarm->value = 0;
  $export['comment_anonymous_contenido_feature'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_contenido_feature';
  $strongarm->value = '2';
  $export['comment_contenido_feature'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_contenido_feature';
  $strongarm->value = 1;
  $export['comment_default_mode_contenido_feature'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_contenido_feature';
  $strongarm->value = '50';
  $export['comment_default_per_page_contenido_feature'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_contenido_feature';
  $strongarm->value = 1;
  $export['comment_form_location_contenido_feature'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_contenido_feature';
  $strongarm->value = '1';
  $export['comment_preview_contenido_feature'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_contenido_feature';
  $strongarm->value = 1;
  $export['comment_subject_field_contenido_feature'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_contenido_feature';
  $strongarm->value = '0';
  $export['language_content_type_contenido_feature'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_contenido_feature';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_contenido_feature'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_contenido_feature';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_contenido_feature'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_contenido_feature';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_contenido_feature'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_contenido_feature';
  $strongarm->value = '1';
  $export['node_preview_contenido_feature'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_contenido_feature';
  $strongarm->value = 1;
  $export['node_submitted_contenido_feature'] = $strongarm;

  return $export;
}
