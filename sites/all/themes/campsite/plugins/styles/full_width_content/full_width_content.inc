<?php
$plugin = array(
  'title' => t('Full Width Content'),
  'description' => t('Pulls the content outside of the standard frame'),
  'render pane' => 'campsite_full_width_content_render_pane',
  'weight' => -10,
);

/**
 * Theme function for the pane style.
 */
function theme_campsite_full_width_content_render_pane($vars) {
  $content = $vars['content'];
  $pane = $vars['pane'];
  $display = $vars['display'];
  $plugin = $vars['style'];

  $content->css_class .= ' pane-full-width-content clearfix';

  return theme('panels_pane', array('content' => $content, 'pane' => $pane, 'display' => $display));
}


