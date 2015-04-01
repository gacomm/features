<?php
/**
 * @file
 * main_page_content_slider.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function main_page_content_slider_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'hero_slider';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'hero slider';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'clone_of_default';
  $handler->display->display_options['style_options']['captionfield'] = 'field_hero_copy';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: hero copy */
  $handler->display->display_options['fields']['field_hero_copy']['id'] = 'field_hero_copy';
  $handler->display->display_options['fields']['field_hero_copy']['table'] = 'field_data_field_hero_copy';
  $handler->display->display_options['fields']['field_hero_copy']['field'] = 'field_hero_copy';
  $handler->display->display_options['fields']['field_hero_copy']['label'] = '';
  $handler->display->display_options['fields']['field_hero_copy']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hero_copy']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hero_copy']['hide_empty'] = TRUE;
  /* Field: Content: hero image */
  $handler->display->display_options['fields']['field_hero_image']['id'] = 'field_hero_image';
  $handler->display->display_options['fields']['field_hero_image']['table'] = 'field_data_field_hero_image';
  $handler->display->display_options['fields']['field_hero_image']['field'] = 'field_hero_image';
  $handler->display->display_options['fields']['field_hero_image']['label'] = '';
  $handler->display->display_options['fields']['field_hero_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hero_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_hero_image']['settings'] = array(
    'image_style' => 'flexslider_full',
    'image_link' => '',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_type'] = 'span';
  $handler->display->display_options['fields']['edit_node']['element_class'] = 'edit-link';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = '[edit]';
  /* Sort criterion: Content: order (field_order) */
  $handler->display->display_options['sorts']['field_order_value']['id'] = 'field_order_value';
  $handler->display->display_options['sorts']['field_order_value']['table'] = 'field_data_field_order';
  $handler->display->display_options['sorts']['field_order_value']['field'] = 'field_order_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hero_slider' => 'hero_slider',
  );

  /* Display: Image Slider */
  $handler = $view->new_display('block', 'Image Slider', 'hero_slider');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'clone_of_default';
  $handler->display->display_options['style_options']['captionfield'] = 'field_hero_copy';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hero_slider' => 'hero_slider',
  );
  /* Filter criterion: Content: Consumer-HCP (field_consumer_hcp) */
  $handler->display->display_options['filters']['field_consumer_hcp_value']['id'] = 'field_consumer_hcp_value';
  $handler->display->display_options['filters']['field_consumer_hcp_value']['table'] = 'field_data_field_consumer_hcp';
  $handler->display->display_options['filters']['field_consumer_hcp_value']['field'] = 'field_consumer_hcp_value';
  $handler->display->display_options['filters']['field_consumer_hcp_value']['value'] = array(
    'Consumer' => 'Consumer',
  );

  /* Display: Thumb Slider */
  $handler = $view->new_display('block', 'Thumb Slider', 'thumb_slider');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'hero_thumb';
  $handler->display->display_options['style_options']['captionfield'] = 'field_hero_thumb';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: hero thumb */
  $handler->display->display_options['fields']['field_hero_thumb']['id'] = 'field_hero_thumb';
  $handler->display->display_options['fields']['field_hero_thumb']['table'] = 'field_data_field_hero_thumb';
  $handler->display->display_options['fields']['field_hero_thumb']['field'] = 'field_hero_thumb';
  $handler->display->display_options['fields']['field_hero_thumb']['label'] = '';
  $handler->display->display_options['fields']['field_hero_thumb']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hero_thumb']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_hero_thumb']['settings'] = array(
    'image_style' => 'flexslider_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: hero thumb copy */
  $handler->display->display_options['fields']['field_hero_thumb_copy']['id'] = 'field_hero_thumb_copy';
  $handler->display->display_options['fields']['field_hero_thumb_copy']['table'] = 'field_data_field_hero_thumb_copy';
  $handler->display->display_options['fields']['field_hero_thumb_copy']['field'] = 'field_hero_thumb_copy';
  $handler->display->display_options['fields']['field_hero_thumb_copy']['label'] = '';
  $handler->display->display_options['fields']['field_hero_thumb_copy']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hero_slider' => 'hero_slider',
  );
  /* Filter criterion: Content: Consumer-HCP (field_consumer_hcp) */
  $handler->display->display_options['filters']['field_consumer_hcp_value']['id'] = 'field_consumer_hcp_value';
  $handler->display->display_options['filters']['field_consumer_hcp_value']['table'] = 'field_data_field_consumer_hcp';
  $handler->display->display_options['filters']['field_consumer_hcp_value']['field'] = 'field_consumer_hcp_value';
  $handler->display->display_options['filters']['field_consumer_hcp_value']['value'] = array(
    'Consumer' => 'Consumer',
  );

  /* Display: HCP Image Slider */
  $handler = $view->new_display('block', 'HCP Image Slider', 'hcp_hero');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'clone_of_hero_thumb';
  $handler->display->display_options['style_options']['captionfield'] = 'field_hero_copy';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hero_slider' => 'hero_slider',
  );
  /* Filter criterion: Content: Consumer-HCP (field_consumer_hcp) */
  $handler->display->display_options['filters']['field_consumer_hcp_value']['id'] = 'field_consumer_hcp_value';
  $handler->display->display_options['filters']['field_consumer_hcp_value']['table'] = 'field_data_field_consumer_hcp';
  $handler->display->display_options['filters']['field_consumer_hcp_value']['field'] = 'field_consumer_hcp_value';
  $handler->display->display_options['filters']['field_consumer_hcp_value']['value'] = array(
    'HCP' => 'HCP',
  );
  $export['hero_slider'] = $view;

  return $export;
}
