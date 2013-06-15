<?php
/**
 * Plugins are described by creating a $plugin array.
 */
$plugin = array(
  'single' => TRUE,
  'title' => t('User registration form'),
  'category' => t('User registration'),
  'no title override' => TRUE,
  'icon' => 'icon.png',
  'description' => t('User Registration form'),
);

/**
 * Render the custom content type.
 */
function badcamp_panels_user_signup_content_type_render($subtype, $conf, $panel_args, $context) {
  // Build the content type block.
  $block = new stdClass();
  $block->title   = t('User registration form');

	$form = drupal_get_form('user_register_form');

  $block->content  = $form;
  return $block;
}