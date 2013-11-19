<?php
/**
 * @file
 * imagex_poll.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function imagex_poll_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function imagex_poll_node_info() {
  $items = array(
    'advpoll' => array(
      'name' => t('Poll'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Question'),
      'help' => '',
    ),
  );
  return $items;
}
