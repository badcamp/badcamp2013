<?php

// Plugin definition
$plugin = array(
  'title' => t('BADCamp Four column 25/25/25/25'),
  'category' => t('Columns: 4'),
  'icon' => 'badcamp-fourcol.png',
  'theme' => 'badcamp_fourcol',
  'css' => 'badcamp-fourcol.css',
  'admin css' => 'badcamp-fourcol-admin.css',
  'regions' => array(
      'left_outside' => t('Left outside'),
      'left_inside' => t('Left inside'),
      'right_inside' => t('Right inside'),
      'right_outside' => t('Right outside'),
  ),
);
