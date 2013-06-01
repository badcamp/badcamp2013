<?php
/**
 * Plugins are described by creating a $plugin array.
 */
$plugin = array(
  'single' => TRUE,
  'title' => t('Event highlights'),
  'no title override' => TRUE,
  'icon' => 'icon.png',
  'description' => t('Event highlights'),
  'category' => t('Home page'),
  'edit text' => t('Configure'),
  'defaults' => array('heading' => '', 'subheading' => ''),
);

/**
 * Returns the administrative title for a type.
 */
function badcamp_panels_highlights_content_type_admin_title($subtype, $conf, $context) {
  return t('Event highlights');
}

/**
 * Render the custom content type.
 */
function badcamp_panels_highlights_content_type_render($subtype, $conf, $panel_args, $context) {
  // Build the content type block.
  $block = new stdClass();
  $block->module  = 'badcamp_panels';
  $block->delta   = 'highlights';
  $block->title   = t('Event highlights');

  $block->content  = '<div class="highlight-photo">';
  $block->content .= '  <div class="highlight-text">';
  $block->content .= '    <h3>' . check_plain($conf['heading']) . '</h3>';
  $block->content .= '    <p>' . check_plain($conf['subheading']) . '</p>';
  $block->content .= '  </div>';
  $block->content .= '</div>';

  return $block;
}


/**
 * Returns an edit form for custom type settings.
 */
function badcamp_panels_highlights_content_type_edit_form($form, &$form_state) {
  // Get the default values.
  $conf = $form_state['conf'];

  $form['heading'] = array(
    '#type' => 'textfield',
    '#title' => t('Heading'),
    '#default_value' => $conf['heading'],
  );
  $form['subheading'] = array(
    '#type' => 'textfield',
    '#title' => t('Subheading'),
    '#default_value' => $conf['subheading'],
  );

  return $form;
}

/**
 * Submit handler for contact form.
 */
function badcamp_panels_highlights_content_type_edit_form_submit($form, &$form_state) {
  // Save everything included in our defaults.
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    $form_state['conf'][$key] = $form_state['values'][$key];
  }
}

