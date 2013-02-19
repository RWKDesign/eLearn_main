<?php
/**
 * @file
 * courses_display.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function courses_display_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'courses';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Courses';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Courses';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'panels_fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_course_fee' => 'field_course_fee',
  );
  $handler->display->display_options['row_options']['separator'] = '<br/>';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['layout'] = 'flexible:course_listing';
  $handler->display->display_options['row_options']['regions'] = array(
    'title' => 'center',
    'field_course_dates' => 'details',
    'field_course_fee' => 'details',
    'field_course_image' => 'image',
    'field_course_summary' => 'description',
    'field_course_type' => 'details',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Course Dates */
  $handler->display->display_options['fields']['field_course_dates']['id'] = 'field_course_dates';
  $handler->display->display_options['fields']['field_course_dates']['table'] = 'field_data_field_course_dates';
  $handler->display->display_options['fields']['field_course_dates']['field'] = 'field_course_dates';
  $handler->display->display_options['fields']['field_course_dates']['label'] = 'Course Available Through';
  $handler->display->display_options['fields']['field_course_dates']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_course_dates']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Course Fee */
  $handler->display->display_options['fields']['field_course_fee']['id'] = 'field_course_fee';
  $handler->display->display_options['fields']['field_course_fee']['table'] = 'field_data_field_course_fee';
  $handler->display->display_options['fields']['field_course_fee']['field'] = 'field_course_fee';
  $handler->display->display_options['fields']['field_course_fee']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Course Image */
  $handler->display->display_options['fields']['field_course_image']['id'] = 'field_course_image';
  $handler->display->display_options['fields']['field_course_image']['table'] = 'field_data_field_course_image';
  $handler->display->display_options['fields']['field_course_image']['field'] = 'field_course_image';
  $handler->display->display_options['fields']['field_course_image']['label'] = '';
  $handler->display->display_options['fields']['field_course_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_course_image']['settings'] = array(
    'image_style' => 'listing',
    'image_link' => '',
  );
  /* Field: Content: Course Summary */
  $handler->display->display_options['fields']['field_course_summary']['id'] = 'field_course_summary';
  $handler->display->display_options['fields']['field_course_summary']['table'] = 'field_data_field_course_summary';
  $handler->display->display_options['fields']['field_course_summary']['field'] = 'field_course_summary';
  $handler->display->display_options['fields']['field_course_summary']['label'] = '';
  $handler->display->display_options['fields']['field_course_summary']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['field_course_summary']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_course_summary']['element_label_colon'] = FALSE;
  /* Field: Content: Course Type */
  $handler->display->display_options['fields']['field_course_type']['id'] = 'field_course_type';
  $handler->display->display_options['fields']['field_course_type']['table'] = 'field_data_field_course_type';
  $handler->display->display_options['fields']['field_course_type']['field'] = 'field_course_type';
  $handler->display->display_options['fields']['field_course_type']['element_label_type'] = 'strong';
  /* Sort criterion: Content: Course Dates - end date (field_course_dates:value2) */
  $handler->display->display_options['sorts']['field_course_dates_value2']['id'] = 'field_course_dates_value2';
  $handler->display->display_options['sorts']['field_course_dates_value2']['table'] = 'field_data_field_course_dates';
  $handler->display->display_options['sorts']['field_course_dates_value2']['field'] = 'field_course_dates_value2';
  $handler->display->display_options['sorts']['field_course_dates_value2']['order'] = 'DESC';
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
    'course' => 'course',
  );
  /* Filter criterion: Content: Course Dates - end date (field_course_dates:value2) */
  $handler->display->display_options['filters']['field_course_dates_value2']['id'] = 'field_course_dates_value2';
  $handler->display->display_options['filters']['field_course_dates_value2']['table'] = 'field_data_field_course_dates';
  $handler->display->display_options['filters']['field_course_dates_value2']['field'] = 'field_course_dates_value2';
  $handler->display->display_options['filters']['field_course_dates_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_course_dates_value2']['default_date'] = 'now';
  /* Filter criterion: Content: Categories (field_categories) */
  $handler->display->display_options['filters']['field_categories_tid']['id'] = 'field_categories_tid';
  $handler->display->display_options['filters']['field_categories_tid']['table'] = 'field_data_field_categories';
  $handler->display->display_options['filters']['field_categories_tid']['field'] = 'field_categories_tid';
  $handler->display->display_options['filters']['field_categories_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_categories_tid']['expose']['operator_id'] = 'field_categories_tid_op';
  $handler->display->display_options['filters']['field_categories_tid']['expose']['label'] = 'Categories';
  $handler->display->display_options['filters']['field_categories_tid']['expose']['operator'] = 'field_categories_tid_op';
  $handler->display->display_options['filters']['field_categories_tid']['expose']['identifier'] = 'field_categories_tid';
  $handler->display->display_options['filters']['field_categories_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_categories_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_categories_tid']['vocabulary'] = 'course_categories';

  /* Display: Course Listing */
  $handler = $view->new_display('page', 'Course Listing', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'courses';
  $export['courses'] = $view;

  return $export;
}
