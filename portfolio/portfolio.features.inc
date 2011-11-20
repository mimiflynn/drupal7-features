<?php
/**
 * @file
 * portfolio.features.inc
 */

/**
 * Implementation of hook_views_api().
 */
function portfolio_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => 3.0);
  }
}

/**
 * Implementation of hook_node_info().
 */
function portfolio_node_info() {
  $items = array(
    'portfolio_entry' => array(
      'name' => t('Project'),
      'base' => 'node_content',
      'description' => t('A portfolio item with an image and description.'),
      'has_title' => '1',
      'title_label' => t('Project Name'),
      'help' => t('Be as descriptive as possible.'),
    ),
  );
  return $items;
}
