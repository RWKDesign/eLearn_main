<?php
/**
 * @file
 * courses_display.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function courses_display_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_course_dates|node|course|form';
  $field_group->group_name = 'group_course_dates';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Course Dates',
    'weight' => '4',
    'children' => array(
      0 => 'field_course_dates',
      1 => 'field_registration_dates',
      2 => 'field_capacity',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_course_dates|node|course|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_course_information|node|course|form';
  $field_group->group_name = 'group_course_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Course Information',
    'weight' => '2',
    'children' => array(
      0 => 'field_course_summary',
      1 => 'field_course_type',
      2 => 'field_course_fee',
      3 => 'field_course_format',
      4 => 'field_target_audience',
      5 => 'field_instrutor',
      6 => 'field_categories',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_course_information|node|course|form'] = $field_group;

  return $export;
}
