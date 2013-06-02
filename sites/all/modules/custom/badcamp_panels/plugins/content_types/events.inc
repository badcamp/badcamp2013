<?php
/**
 * Plugins are described by creating a $plugin array.
 */
$plugin = array(
  'single' => TRUE,
  'title' => t('Events at a glance'),
  'no title override' => TRUE,
  'icon' => 'icon.png',
  'description' => t('Events at a glance'),
  'category' => t('Home page'),
  'edit text' => t('Configure'),
  'defaults' => array(
    'one-title' => '',
    'one-blurb' => '',
    'two-title' => '',
    'two-blurb' => '',
    'three-title' => '',
    'three-blurb' => '',
    'four-title' => '',
    'four-blurb' => '',
    'five-title' => '',
    'five-blurb' => '',
    'six-title' => '',
    'six-blurb' => '',
  ),
);

/**
 * Returns the administrative title for a type.
 */
function badcamp_panels_events_content_type_admin_title($subtype, $conf, $context) {
  return t('Events at a glance');
}

/**
 * Render the custom content type.
 */
function badcamp_panels_events_content_type_render($subtype, $conf, $panel_args, $context) {
  // Build the content type block.
  $block = new stdClass();
  $block->module  = 'badcamp_panels';
  $block->delta   = 'highlights';
  $block->title   = t('Events at a glance');

  $block->content  = '<ul>';
  $block->content  .= ' <li class="event-one">';
  $block->content .= '   <h3>' . check_plain($conf['one-title']) . '</h3>';
  $block->content .= '   <p>' . check_plain($conf['one-blurb']) . '</p>';
  $block->content .= ' </li>';
  $block->content .= ' <li class="event-two">';
  $block->content .= '   <h3>' . check_plain($conf['two-title']) . '</h3>';
  $block->content .= '   <p>' . check_plain($conf['two-blurb']) . '</p>';
  $block->content .= ' </li>';
  $block->content .= ' <li class="event-three">';
  $block->content .= '   <h3>' . check_plain($conf['three-title']) . '</h3>';
  $block->content .= '   <p>' . check_plain($conf['three-blurb']) . '</p>';
  $block->content .= ' </li>';
  $block->content .= ' <li class="event-four">';
  $block->content .= '   <h3>' . check_plain($conf['four-title']) . '</h3>';
  $block->content .= '   <p>' . check_plain($conf['four-blurb']) . '</p>';
  $block->content .= ' </li>';
  $block->content .= ' <li class="event-five">';
  $block->content .= '   <h3>' . check_plain($conf['five-title']) . '</h3>';
  $block->content .= '   <p>' . check_plain($conf['five-blurb']) . '</p>';
  $block->content .= ' </li>';
  $block->content .= ' <li class="event-six">';
  $block->content .= '   <h3>' . check_plain($conf['six-title']) . '</h3>';
  $block->content .= '   <p>' . check_plain($conf['six-blurb']) . '</p>';
  $block->content .= ' </li>';
  $block->content .= '</ul>';

  return $block;
}


/**
 * Returns an edit form for custom type settings.
 */
function badcamp_panels_events_content_type_edit_form($form, &$form_state) {
  // Get the default values.
  $conf = $form_state['conf'];

  $form['one'] = array(
    '#type' => 'fieldset',
    '#title' => t('Event One'),
  );
  $form['one']['one-title'] = array(
    '#type' => 'textfield',
    '#title' => t('Title'),
    '#default_value' => $conf['one-title'],
  );
  $form['one']['one-blurb'] = array(
    '#type' => 'textarea',
    '#rows' => 3,
    '#maxlength' => 200,
    '#title' => t('Description'),
    '#default_value' => $conf['one-blurb'],
  );

  $form['two'] = array(
    '#type' => 'fieldset',
    '#title' => t('Event Two'),
  );
  $form['two']['two-title'] = array(
    '#type' => 'textfield',
    '#title' => t('Title'),
    '#default_value' => $conf['two-title'],
  );
  $form['two']['two-blurb'] = array(
    '#type' => 'textarea',
    '#rows' => 3,
    '#maxlength' => 200,
    '#title' => t('Description'),
    '#default_value' => $conf['two-blurb'],
  );

  $form['three'] = array(
    '#type' => 'fieldset',
    '#title' => t('Event Three'),
  );
  $form['three']['three-title'] = array(
    '#type' => 'textfield',
    '#title' => t('Title'),
    '#default_value' => $conf['three-title'],
  );
  $form['three']['three-blurb'] = array(
    '#type' => 'textarea',
    '#rows' => 3,
    '#maxlength' => 200,
    '#title' => t('Description'),
    '#default_value' => $conf['three-blurb'],
  );

  $form['four'] = array(
    '#type' => 'fieldset',
    '#title' => t('Event Four'),
  );
  $form['four']['four-title'] = array(
    '#type' => 'textfield',
    '#title' => t('Title'),
    '#default_value' => $conf['four-title'],
  );
  $form['four']['four-blurb'] = array(
    '#type' => 'textarea',
    '#rows' => 3,
    '#maxlength' => 200,
    '#title' => t('Description'),
    '#default_value' => $conf['four-blurb'],
  );

  $form['five'] = array(
    '#type' => 'fieldset',
    '#title' => t('Event Five'),
  );
  $form['five']['five-title'] = array(
    '#type' => 'textfield',
    '#title' => t('Title'),
    '#default_value' => $conf['five-title'],
  );
  $form['five']['five-blurb'] = array(
    '#type' => 'textarea',
    '#rows' => 3,
    '#maxlength' => 200,
    '#title' => t('Description'),
    '#default_value' => $conf['five-blurb'],
  );

  $form['six'] = array(
    '#type' => 'fieldset',
    '#title' => t('Event Six'),
  );
  $form['six']['six-title'] = array(
    '#type' => 'textfield',
    '#title' => t('Title'),
    '#default_value' => $conf['six-title'],
  );
  $form['six']['six-blurb'] = array(
    '#type' => 'textarea',
    '#rows' => 3,
    '#maxlength' => 200,
    '#title' => t('Description'),
    '#default_value' => $conf['six-blurb'],
  );

  return $form;
}

/**
 * Submit handler for contact form.
 */
function badcamp_panels_events_content_type_edit_form_submit($form, &$form_state) {
  // Save everything included in our defaults.
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    $form_state['conf'][$key] = $form_state['values'][$key];
  }
}

