<?php
/**
 * @file
 * company_staff.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function company_staff_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function company_staff_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function company_staff_node_info() {
  $items = array(
    'staff_profile' => array(
      'name' => t('Staff Profile'),
      'base' => 'node_content',
      'description' => t('Biography and picture of a staff member.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
