<?php
/**
 * Plugins are described by creating a $plugin array.
 */
$plugin = array(
  'single' => TRUE,
  'title' => t('BADCamp facts'),
  'no title override' => TRUE,
  'icon' => 'icon.png',
  'description' => t('BADCamp facts'),
  'category' => t('Home page'),
  'edit text' => t('Configure'),
  'defaults' => array('one-number' => '', 'one-string' => '', 'two-number' => '', 'two-string' => '', 'three-number' => '', 'three-string' => ''),
);

/**
 * Returns the administrative title for a type.
 */
function badcamp_panels_facts_content_type_admin_title($subtype, $conf, $context) {
  return t('BADCamp facts');
}

/**
 * Render the custom content type.
 */
function badcamp_panels_facts_content_type_render($subtype, $conf, $panel_args, $context) {
  // Build the content type block.
  $block = new stdClass();
  $block->module  = 'badcamp_panels';
  $block->delta   = 'highlights';
  $block->title   = t('BADCamp facts');

  $block->content  = '<div class="fact-one">';
  $block->content .= '  <h3>' . check_plain($conf['one-number']) . '</h3>';
  $block->content .= '  <p>' . check_plain($conf['one-string']) . '</p>';
  $block->content .= '</div>';
  $block->content .= '<div class="fact-two">';
  $block->content .= '  <h3>' . check_plain($conf['two-number']) . '</h3>';
  $block->content .= '  <p>' . check_plain($conf['two-string']) . '</p>';
  $block->content .= '</div>';
  $block->content .= '<div class="fact-three">';
  $block->content .= '  <h3>' . check_plain($conf['three-number']) . '</h3>';
  $block->content .= '  <p>' . check_plain($conf['three-string']) . '</p>';
  $block->content .= '</div>';

  return $block;
}


/**
 * Returns an edit form for custom type settings.
 */
function badcamp_panels_facts_content_type_edit_form($form, &$form_state) {
  // Get the default values.
  $conf = $form_state['conf'];

  $form['one'] = array(
    '#type' => 'fieldset',
    '#title' => t('Fact One'),
  );
  $form['one']['one-number'] = array(
    '#type' => 'textfield',
    '#title' => t('Number'),
    '#default_value' => $conf['one-number'],
  );
  $form['one']['one-string'] = array(
    '#type' => 'textfield',
    '#title' => t('Description'),
    '#default_value' => $conf['one-string'],
  );

  $form['two'] = array(
    '#type' => 'fieldset',
    '#title' => t('Fact Two'),
  );
  $form['two']['two-number'] = array(
    '#type' => 'textfield',
    '#title' => t('Number'),
    '#default_value' => $conf['two-number'],
  );
  $form['two']['two-string'] = array(
    '#type' => 'textfield',
    '#title' => t('Description'),
    '#default_value' => $conf['two-string'],
  );

  $form['three'] = array(
    '#type' => 'fieldset',
    '#title' => t('Fact Three'),
  );
  $form['three']['three-number'] = array(
    '#type' => 'textfield',
    '#title' => t('Number'),
    '#default_value' => $conf['three-number'],
  );
  $form['three']['three-string'] = array(
    '#type' => 'textfield',
    '#title' => t('Description'),
    '#default_value' => $conf['three-string'],
  );

  return $form;
}

/**
 * Submit handler for contact form.
 */
function badcamp_panels_facts_content_type_edit_form_submit($form, &$form_state) {
  // Save everything included in our defaults.
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    $form_state['conf'][$key] = $form_state['values'][$key];
  }
}

