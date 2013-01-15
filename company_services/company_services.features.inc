<?php
/**
 * @file
 * company_services.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function company_services_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function company_services_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function company_services_node_info() {
  $items = array(
    'service' => array(
      'name' => t('Service'),
      'base' => 'node_content',
      'description' => t('A service provided by the company.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
