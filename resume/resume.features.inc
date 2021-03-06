<?php
/**
 * @file
 * resume.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function resume_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function resume_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function resume_node_info() {
  $items = array(
    'resume_position' => array(
      'name' => t('Job Position'),
      'base' => 'node_content',
      'description' => t('A position to add to your resume.'),
      'has_title' => '1',
      'title_label' => t('Position'),
      'help' => '',
    ),
    'school' => array(
      'name' => t('School'),
      'base' => 'node_content',
      'description' => t('Add a school to the resume page.'),
      'has_title' => '1',
      'title_label' => t('School'),
      'help' => '',
    ),
  );
  return $items;
}
