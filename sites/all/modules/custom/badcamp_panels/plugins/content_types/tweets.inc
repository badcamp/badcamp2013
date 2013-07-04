<?php
/**
 * Plugins are described by creating a $plugin array.
 */
$plugin = array(
  'single' => TRUE,
  'title' => t('Twitter widget'),
  'no title override' => TRUE,
  'icon' => 'icon.png',
  'description' => t('Twitter widget'),
  'category' => t('Home page'),
  'defaults' => array(),
);

/**
 * Returns the administrative title for a type.
 */
function badcamp_panels_tweets_content_type_admin_title($subtype, $conf, $context) {
  return t('Twitter widget');
}

/**
 * Render the custom content type.
 */
function badcamp_panels_tweets_content_type_render($subtype, $conf, $panel_args, $context) {
  // Build the content type block.
  $block = new stdClass();
  $block->module  = 'badcamp_panels';
  $block->delta   = 'tweets';
  $block->title   = t('Tweets');
  $block->content = '<a class="twitter-timeline" href="https://twitter.com/BADCamp" data-widget-id="352652656403169281">Tweets by @BADCamp</a>';
  // Don't forget to escape the quotes:  put a \ in front of every ' in this string.
  $block->content .= '<script>!function(d,s,id){var js,fjs=d.getElementsByTagName(s)[0],p=/^http:/.test(d.location)?\'http\':\'https\';if(!d.getElementById(id)){js=d.createElement(s);js.id=id;js.src=p+"://platform.twitter.com/widgets.js";fjs.parentNode.insertBefore(js,fjs);}}(document,"script","twitter-wjs");</script>';

  return $block;
}