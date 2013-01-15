<?php
/**
 * @file
 * company_clients.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function company_clients_taxonomy_default_vocabularies() {
  return array(
    'sector' => array(
      'name' => 'Sector',
      'machine_name' => 'sector',
      'description' => 'Sector related to client\'s work.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
