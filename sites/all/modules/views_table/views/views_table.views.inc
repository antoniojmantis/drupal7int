<?php
/**
 * @file
 * Descripción
 */

function views_table_views_data(){
    // Define el grupo base
    $data['views_table']['table']['group'] = t('Deportes');

    $data['views_table']['table']['base'] = array(
        'field' => 'nid',
        'title' => t('Tabla deportes'),
        'help' => t('Tabla deportes help.'),
        'weight' => -10,
    );

    // Define la relación con otras tablas (JOIN)
    $data['views_table']['table']['join'] = array(
        'node' => array(
            'left_field' => 'nid',
            'field' => 'nid',
        ),
    );    

    $data['views_table']['nid'] = array(
        'title' => t('Example content'),
        'help' => t('Some example content that references a node.'),
        'relationship' => array(
            'base' => 'node',
            'field' => 'nid',
            'handler' => 'views_handler_relationship',
            'label' => t('Example node'),
        ),
    );
    
    // Define los campos       
    $data['views_table']['deporte'] = array(
        'title' => t('Deportes'),
        'help' => t('Deportes help.'),
        'field' => array(
            'handler' => 'views_handler_field',
            'click sortable' => TRUE,
        ),
        'sort' => array(
            'handler' => 'views_handler_sort',
        ),
        'filter' => array(
            'handler' => 'views_handler_filter_string',
        ),
        'argument' => array(
            'handler' => 'views_handler_argument_string',
        ),
    );

    return $data;
}