<?php
/**
 * @file
 * sitetest.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function sitetest_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'check_log';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Check log';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Check log';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Field collection item: Entity with the Results (field_site_results) */
  $handler->display->display_options['relationships']['field_site_results_node']['id'] = 'field_site_results_node';
  $handler->display->display_options['relationships']['field_site_results_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_site_results_node']['field'] = 'field_site_results_node';
  $handler->display->display_options['relationships']['field_site_results_node']['required'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_site_results_node';
  $handler->display->display_options['fields']['title']['label'] = 'Site name';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Field collection item: Date */
  $handler->display->display_options['fields']['field_check_date']['id'] = 'field_check_date';
  $handler->display->display_options['fields']['field_check_date']['table'] = 'field_data_field_check_date';
  $handler->display->display_options['fields']['field_check_date']['field'] = 'field_check_date';
  $handler->display->display_options['fields']['field_check_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_check_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_check_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_check_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_check_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_check_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_check_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_check_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_check_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_check_date']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_check_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_check_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_check_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_check_date']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_check_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_check_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_check_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_check_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_check_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_check_date']['field_api_classes'] = 0;
  /* Field: Field collection item: Code */
  $handler->display->display_options['fields']['field_check_code']['id'] = 'field_check_code';
  $handler->display->display_options['fields']['field_check_code']['table'] = 'field_data_field_check_code';
  $handler->display->display_options['fields']['field_check_code']['field'] = 'field_check_code';
  $handler->display->display_options['fields']['field_check_code']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_check_code']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_check_code']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_check_code']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_check_code']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_check_code']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_check_code']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_check_code']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_check_code']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_check_code']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_check_code']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_check_code']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_check_code']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_check_code']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_check_code']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_check_code']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_check_code']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_check_code']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_check_code']['field_api_classes'] = 0;
  /* Field: Field collection item: Status */
  $handler->display->display_options['fields']['field_check_status']['id'] = 'field_check_status';
  $handler->display->display_options['fields']['field_check_status']['table'] = 'field_data_field_check_status';
  $handler->display->display_options['fields']['field_check_status']['field'] = 'field_check_status';
  $handler->display->display_options['fields']['field_check_status']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_check_status']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_check_status']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_check_status']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_check_status']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_check_status']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_check_status']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_check_status']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_check_status']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_check_status']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_check_status']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_check_status']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_check_status']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_check_status']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_check_status']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_check_status']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_check_status']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_check_status']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_check_status']['field_api_classes'] = 0;
  /* Field: Field collection item: Error */
  $handler->display->display_options['fields']['field_check_error']['id'] = 'field_check_error';
  $handler->display->display_options['fields']['field_check_error']['table'] = 'field_data_field_check_error';
  $handler->display->display_options['fields']['field_check_error']['field'] = 'field_check_error';
  $handler->display->display_options['fields']['field_check_error']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_check_error']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_check_error']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_check_error']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_check_error']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_check_error']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_check_error']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_check_error']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_check_error']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_check_error']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_check_error']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_check_error']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_check_error']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_check_error']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_check_error']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_check_error']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_check_error']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_check_error']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_check_error']['field_api_classes'] = 0;
  /* Field: Field collection item: Protocol */
  $handler->display->display_options['fields']['field_check_protocol']['id'] = 'field_check_protocol';
  $handler->display->display_options['fields']['field_check_protocol']['table'] = 'field_data_field_check_protocol';
  $handler->display->display_options['fields']['field_check_protocol']['field'] = 'field_check_protocol';
  $handler->display->display_options['fields']['field_check_protocol']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_check_protocol']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_check_protocol']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_check_protocol']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_check_protocol']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_check_protocol']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_check_protocol']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_check_protocol']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_check_protocol']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_check_protocol']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_check_protocol']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_check_protocol']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_check_protocol']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_check_protocol']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_check_protocol']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_check_protocol']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_check_protocol']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_check_protocol']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_check_protocol']['field_api_classes'] = 0;
  /* Field: Field collection item: Redirect code */
  $handler->display->display_options['fields']['field_check_redirect_code']['id'] = 'field_check_redirect_code';
  $handler->display->display_options['fields']['field_check_redirect_code']['table'] = 'field_data_field_check_redirect_code';
  $handler->display->display_options['fields']['field_check_redirect_code']['field'] = 'field_check_redirect_code';
  $handler->display->display_options['fields']['field_check_redirect_code']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_check_redirect_code']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_check_redirect_code']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_check_redirect_code']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_check_redirect_code']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_check_redirect_code']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_check_redirect_code']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_check_redirect_code']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_check_redirect_code']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_check_redirect_code']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_check_redirect_code']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_check_redirect_code']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_check_redirect_code']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_check_redirect_code']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_check_redirect_code']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_check_redirect_code']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_check_redirect_code']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_check_redirect_code']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_check_redirect_code']['field_api_classes'] = 0;
  /* Field: Field collection item: Redirect URL */
  $handler->display->display_options['fields']['field_check_redirect_url']['id'] = 'field_check_redirect_url';
  $handler->display->display_options['fields']['field_check_redirect_url']['table'] = 'field_data_field_check_redirect_url';
  $handler->display->display_options['fields']['field_check_redirect_url']['field'] = 'field_check_redirect_url';
  $handler->display->display_options['fields']['field_check_redirect_url']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_check_redirect_url']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_check_redirect_url']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_check_redirect_url']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_check_redirect_url']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_check_redirect_url']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_check_redirect_url']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_check_redirect_url']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_check_redirect_url']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_check_redirect_url']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_check_redirect_url']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_check_redirect_url']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_check_redirect_url']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_check_redirect_url']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_check_redirect_url']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_check_redirect_url']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_check_redirect_url']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_check_redirect_url']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_check_redirect_url']['field_api_classes'] = 0;
  /* Sort criterion: Field collection item: Date (field_check_date) */
  $handler->display->display_options['sorts']['field_check_date_value']['id'] = 'field_check_date_value';
  $handler->display->display_options['sorts']['field_check_date_value']['table'] = 'field_data_field_check_date';
  $handler->display->display_options['sorts']['field_check_date_value']['field'] = 'field_check_date_value';
  $handler->display->display_options['sorts']['field_check_date_value']['order'] = 'DESC';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_site_results_node';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Site name';
  $handler->display->display_options['filters']['title']['expose']['use_operator'] = 1;
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['required'] = 0;
  $handler->display->display_options['filters']['title']['expose']['multiple'] = FALSE;
  /* Filter criterion: Field collection item: Code (field_check_code) */
  $handler->display->display_options['filters']['field_check_code_value']['id'] = 'field_check_code_value';
  $handler->display->display_options['filters']['field_check_code_value']['table'] = 'field_data_field_check_code';
  $handler->display->display_options['filters']['field_check_code_value']['field'] = 'field_check_code_value';
  $handler->display->display_options['filters']['field_check_code_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_check_code_value']['expose']['operator_id'] = 'field_check_code_value_op';
  $handler->display->display_options['filters']['field_check_code_value']['expose']['label'] = 'Code';
  $handler->display->display_options['filters']['field_check_code_value']['expose']['use_operator'] = 1;
  $handler->display->display_options['filters']['field_check_code_value']['expose']['operator'] = 'field_check_code_value_op';
  $handler->display->display_options['filters']['field_check_code_value']['expose']['identifier'] = 'field_check_code_value';
  $handler->display->display_options['filters']['field_check_code_value']['expose']['required'] = 0;
  $handler->display->display_options['filters']['field_check_code_value']['expose']['multiple'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'check-log';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Full log';
  $handler->display->display_options['menu']['name'] = 'user-menu';
  $export['check_log'] = $view;

  $view = new view;
  $view->name = 'sites';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sites';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sites';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'table';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'You have not registered any sites.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Site name';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_site_link']['id'] = 'field_site_link';
  $handler->display->display_options['fields']['field_site_link']['table'] = 'field_data_field_site_link';
  $handler->display->display_options['fields']['field_site_link']['field'] = 'field_site_link';
  $handler->display->display_options['fields']['field_site_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_site_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_site_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_site_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_site_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_site_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_site_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_site_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_site_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_site_link']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_site_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_site_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_site_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_site_link']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_site_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_site_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_site_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_site_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_site_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_site_link']['type'] = 'link_url';
  $handler->display->display_options['fields']['field_site_link']['field_api_classes'] = 0;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Active';
  $handler->display->display_options['fields']['status']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['status']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['status']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['status']['alter']['external'] = 0;
  $handler->display->display_options['fields']['status']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['status']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['status']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['status']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['status']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['status']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['status']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['status']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['status']['alter']['html'] = 0;
  $handler->display->display_options['fields']['status']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['status']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['status']['hide_empty'] = 0;
  $handler->display->display_options['fields']['status']['empty_zero'] = 0;
  $handler->display->display_options['fields']['status']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Node: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = 'Operations';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['view_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['view_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['view_node']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['view_node']['text'] = 'View report';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'node';
  $export['sites'] = $view;

  return $export;
}
