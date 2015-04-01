<?php
/**
 * @file
 * main_page_content_slider.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function main_page_content_slider_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function main_page_content_slider_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function main_page_content_slider_node_info() {
  $items = array(
    'hero_slider' => array(
      'name' => t('hero-slider'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
