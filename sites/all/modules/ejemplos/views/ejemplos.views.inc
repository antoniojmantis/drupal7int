<?php
/**
 * Implements hook_views_data_alter().
 */
function ejemplos_views_data_alter(&$data) {
  $data['node']['nid'] = array(
    'title' => 'Custom node nid',
    'help' => 'Custom node nid',
    'field' => array(
      'handler' => 'ejemplos_handler_nid',
    ),
  );
}