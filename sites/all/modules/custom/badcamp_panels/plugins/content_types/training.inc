<?php
/**
 * Plugins are described by creating a $plugin array.
 */
$plugin = array(
  'single' => TRUE,
  'title' => t('Training Introduction'),
  'icon' => 'icon.png',
  'description' => t('Training Introduction'),
  'category' => t('Taxonomy term'),
  'edit text' => t('Configure'),
  'defaults' => array('description' => ''),
);

/**
 * Returns the administrative title for a type.
 */
function badcamp_panels_training_content_type_admin_title($subtype, $conf, $context) {
  return t('What is a BADCamp Training?');
}

/**
 * Render the custom content type.
 */
function badcamp_panels_training_content_type_render($subtype, $conf, $panel_args, $context) {
  // Build the content type block.
  $block = new stdClass();
  $block->module  = 'badcamp_panels';
  $block->delta   = 'training';
  $block->title   = t('Training Introduction');

  $block->content = '    <p>' . check_plain($conf['description']) . '</p>';

  return $block;
}


/**
 * Returns an edit form for custom type settings.
 */
function badcamp_panels_training_content_type_edit_form($form, &$form_state) {
  // Get the default values.
  $conf = $form_state['conf'];

  $form['description'] = array(
    '#type' => 'textarea',
    '#title' => t('Description'),
    '#default_value' => $conf['description'],
  );

  return $form;
}

/**
 * Submit handler for contact form.
 */
function badcamp_panels_training_content_type_edit_form_submit($form, &$form_state) {
  // Save everything included in our defaults.
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    $form_state['conf'][$key] = $form_state['values'][$key];
  }
}

