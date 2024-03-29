<?php
/**
 * @file
 * sitetest.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sitetest_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function sitetest_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function sitetest_node_info() {
  $items = array(
    'site' => array(
      'name' => t('site'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
