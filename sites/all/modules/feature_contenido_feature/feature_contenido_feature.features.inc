<?php
/**
 * @file
 * feature_contenido_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_contenido_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function feature_contenido_feature_node_info() {
  $items = array(
    'contenido_feature' => array(
      'name' => t('Contenido feature'),
      'base' => 'node_content',
      'description' => t('Tipo de contenido para exportar en features'),
      'has_title' => '1',
      'title_label' => t('Titlet'),
      'help' => '',
    ),
  );
  return $items;
}
