<?php

// Plugin definition
$plugin = array(
  'title' => t('BADCamp Three column 33/33/33'),
  'category' => t('Columns: 3'),
  'icon' => 'badcamp-threecol.png',
  'theme' => 'badcamp_threecol',
  'css' => 'badcamp-threecol.css',
  'admin css' => 'badcamp-threecol-admin.css',
  'regions' => array(
    'first_column' => t('First column'),
    'second_column' => t('Second column'),
    'third_column' => t('Third column'),
  ),
);
