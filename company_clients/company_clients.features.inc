<?php
/**
 * @file
 * company_clients.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function company_clients_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function company_clients_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function company_clients_node_info() {
  $items = array(
    'client' => array(
      'name' => t('Client'),
      'base' => 'node_content',
      'description' => t('A client\'s profile'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
