<?php
/**
 * This field handler displays a node's nid with custom text.
 *
 * @ingroup views_field_handlers
 */
class ejemplos_handler_nid extends views_handler_field_entity {
 
  function render($values) {
 
    return $values->nid . '-customizado con handlers';
  }
}