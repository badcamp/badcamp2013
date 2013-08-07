<?php
$plugin = array(
  'title' => t('Centerized pane title and content'),
  'description' => t('Center the pane title and pane content'),
  'render pane' => 'campsite_center_styled_content_render_pane',
  'weight' => -10,
);

/**
 * Theme function for the pane style.
 */
function theme_campsite_center_styled_content_render_pane($vars) {
  $content = $vars['content'];
  $pane = $vars['pane'];
  $display = $vars['display'];
  $plugin = $vars['style'];

  $content->css_class .= ' pane-center-styled-content clearfix';

  return theme('panels_pane', array('content' => $content, 'pane' => $pane, 'display' => $display));
}


