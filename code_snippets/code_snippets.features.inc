<?php
/**
 * @file
 * code_snippets.features.inc
 */

/**
 * Implementation of hook_views_api().
 */
function code_snippets_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => 3.0);
  }
}

/**
 * Implementation of hook_node_info().
 */
function code_snippets_node_info() {
  $items = array(
    'code_snippet' => array(
      'name' => t('Code Snippet'),
      'base' => 'node_content',
      'description' => t('A useful piece of code that can be copied and pasted into a project when needed.'),
      'has_title' => '1',
      'title_label' => t('Purpose'),
      'help' => '',
    ),
  );
  return $items;
}
