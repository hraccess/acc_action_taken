<?php
/**
 * @file
 * acc_action_taken.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function acc_action_taken_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'acc_action_taken';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_acc_action_taken';
  $view->human_name = 'Access Action Taken';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Access Action Taken';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_acc_action_taken';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Action Taken Date */
  $handler->display->display_options['fields']['field_action_taken_date']['id'] = 'field_action_taken_date';
  $handler->display->display_options['fields']['field_action_taken_date']['table'] = 'search_api_index_acc_action_taken';
  $handler->display->display_options['fields']['field_action_taken_date']['field'] = 'field_action_taken_date';
  $handler->display->display_options['fields']['field_action_taken_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Indexed Node: Action taken type */
  $handler->display->display_options['fields']['field_action_taken_type']['id'] = 'field_action_taken_type';
  $handler->display->display_options['fields']['field_action_taken_type']['table'] = 'search_api_index_acc_action_taken';
  $handler->display->display_options['fields']['field_action_taken_type']['field'] = 'field_action_taken_type';
  $handler->display->display_options['fields']['field_action_taken_type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_action_taken_type']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_action_taken_type']['bypass_access'] = 0;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_acc_action_taken';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    218860149 => 0,
    188284353 => 0,
    200153887 => 0,
    197637936 => 0,
    52310416 => 0,
    30037204 => 0,
    147444660 => 0,
    229782242 => 0,
  );

  /* Display: Master */
  $handler = $view->new_display('page', 'Master', 'master');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_action_taken_date' => 'field_action_taken_date',
    'field_action_taken_type' => 'field_action_taken_type',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_action_taken_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_action_taken_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_acc_action_taken';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Action Taken Date */
  $handler->display->display_options['fields']['field_action_taken_date']['id'] = 'field_action_taken_date';
  $handler->display->display_options['fields']['field_action_taken_date']['table'] = 'search_api_index_acc_action_taken';
  $handler->display->display_options['fields']['field_action_taken_date']['field'] = 'field_action_taken_date';
  $handler->display->display_options['fields']['field_action_taken_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Indexed Node: Action taken type */
  $handler->display->display_options['fields']['field_action_taken_type']['id'] = 'field_action_taken_type';
  $handler->display->display_options['fields']['field_action_taken_type']['table'] = 'search_api_index_acc_action_taken';
  $handler->display->display_options['fields']['field_action_taken_type']['field'] = 'field_action_taken_type';
  $handler->display->display_options['fields']['field_action_taken_type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_action_taken_type']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_action_taken_type']['bypass_access'] = 0;
  $handler->display->display_options['path'] = 'access/action_taken';

  /* Display: Table */
  $handler = $view->new_display('page', 'Table', 'table');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_action_taken_date' => 'field_action_taken_date',
    'field_action_taken_type' => 'field_action_taken_type',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_action_taken_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_action_taken_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'access/action_taken/table';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Table';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: List */
  $handler = $view->new_display('page', 'List', 'list');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'access/action_taken/list';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'List';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: XLS */
  $handler = $view->new_display('views_data_export', 'XLS', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_acc_action_taken';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Action Taken Date */
  $handler->display->display_options['fields']['field_action_taken_date']['id'] = 'field_action_taken_date';
  $handler->display->display_options['fields']['field_action_taken_date']['table'] = 'search_api_index_acc_action_taken';
  $handler->display->display_options['fields']['field_action_taken_date']['field'] = 'field_action_taken_date';
  $handler->display->display_options['fields']['field_action_taken_date']['settings'] = array(
    'format_type' => 'access_short_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Indexed Node: Action taken type */
  $handler->display->display_options['fields']['field_action_taken_type']['id'] = 'field_action_taken_type';
  $handler->display->display_options['fields']['field_action_taken_type']['table'] = 'search_api_index_acc_action_taken';
  $handler->display->display_options['fields']['field_action_taken_type']['field'] = 'field_action_taken_type';
  $handler->display->display_options['fields']['field_action_taken_type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_action_taken_type']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_action_taken_type']['bypass_access'] = 0;
  /* Field: Indexed Node: What did trigger this action? */
  $handler->display->display_options['fields']['field_action_trigger']['id'] = 'field_action_trigger';
  $handler->display->display_options['fields']['field_action_trigger']['table'] = 'search_api_index_acc_action_taken';
  $handler->display->display_options['fields']['field_action_trigger']['field'] = 'field_action_trigger';
  $handler->display->display_options['fields']['field_action_trigger']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_action_trigger']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_action_trigger']['bypass_access'] = 0;
  /* Field: Indexed Node: The main body text */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'search_api_index_acc_action_taken';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Description';
  $handler->display->display_options['path'] = 'access/action_taken/xls';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'master' => 'master',
    'table' => 'table',
    'list' => 'list',
  );
  $translatables['acc_action_taken'] = array(
    t('Master'),
    t('Access Action Taken'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Title'),
    t('Action Taken Date'),
    t('Action taken type'),
    t('Search'),
    t('Table'),
    t('List'),
    t('XLS'),
    t('What did trigger this action?'),
    t('Description'),
  );
  $export['acc_action_taken'] = $view;

  return $export;
}
