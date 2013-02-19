<?php
/**
 * @file
 * courses_display.features.inc
 */

/**
 * Implements hook_views_api().
 */
function courses_display_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function courses_display_image_default_styles() {
  $styles = array();

  // Exported image style: listing.
  $styles['listing'] = array(
    'name' => 'listing',
    'effects' => array(
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '150',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function courses_display_node_info() {
  $items = array(
    'course' => array(
      'name' => t('Course'),
      'base' => 'node_content',
      'description' => t('A <em>course</em> containing Drupal learning objects.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
