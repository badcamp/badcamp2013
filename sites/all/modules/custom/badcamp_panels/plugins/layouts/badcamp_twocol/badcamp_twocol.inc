<?php

// Plugin definition
$plugin = array(
  'title' => t('BADCamp Two column'),
  'category' => t('Columns: 2'),
  'icon' => 'badcamp-twocol.png',
  'theme' => 'badcamp_twocol',
  'css' => 'badcamp-twocol.css',
  'admin css' => 'badcamp-twocol-admin.css',
  'regions' => array(
    'left' => t('Left side'),
    'right' => t('Right sidebar')
  ),
);
