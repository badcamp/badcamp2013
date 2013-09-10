<?php

/**
 * Implementation of hook_views_default_views().
 */
function badcamp_my_schedule_views_default_views() {

    $view = new view();
    $view->name = 'camp_my_schedule';
    $view->description = 'List of Schedule items for a logged in iuser';
    $view->tag = 'default';
    $view->base_table = 'node';
    $view->human_name = 'My Schedule';
    $view->core = 7;
    $view->api_version = '3.0';
    $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

    /* Display: Master */
    $handler = $view->new_display('default', 'Master', 'default');
    $handler->display->display_options['title'] = 'My Schedule';
    $handler->display->display_options['use_more_always'] = FALSE;
    $handler->display->display_options['access']['type'] = 'perm';
    $handler->display->display_options['cache']['type'] = 'none';
    $handler->display->display_options['query']['type'] = 'views_query';
    $handler->display->display_options['exposed_form']['type'] = 'basic';
    $handler->display->display_options['pager']['type'] = 'infinite_scroll';
    $handler->display->display_options['pager']['options']['items_per_page'] = '10';
    $handler->display->display_options['pager']['options']['offset'] = '0';
    $handler->display->display_options['pager']['options']['id'] = '0';
    $handler->display->display_options['pager']['options']['quantity'] = '9';
    $handler->display->display_options['style_plugin'] = 'default';
    $handler->display->display_options['row_plugin'] = 'fields';
    $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
    /* Relationship: Flags: registration */
    $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
    $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
    $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
    $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'registration';
    /* Field: Content: Title */
    $handler->display->display_options['fields']['title']['id'] = 'title';
    $handler->display->display_options['fields']['title']['table'] = 'node';
    $handler->display->display_options['fields']['title']['field'] = 'title';
    $handler->display->display_options['fields']['title']['label'] = '';
    $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
    $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
    /* Field: Content: Date */
    $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
    $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
    $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
    $handler->display->display_options['fields']['field_date']['label'] = '';
    $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['field_date']['settings'] = array(
        'format_type' => 'medium',
        'fromto' => 'value',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
    );
    /* Field: Content: Length */
    $handler->display->display_options['fields']['field_length']['id'] = 'field_length';
    $handler->display->display_options['fields']['field_length']['table'] = 'field_data_field_length';
    $handler->display->display_options['fields']['field_length']['field'] = 'field_length';
    /* Field: Field: Day */
    $handler->display->display_options['fields']['field_day']['id'] = 'field_day';
    $handler->display->display_options['fields']['field_day']['table'] = 'field_data_field_day';
    $handler->display->display_options['fields']['field_day']['field'] = 'field_day';
    $handler->display->display_options['fields']['field_day']['label'] = '';
    $handler->display->display_options['fields']['field_day']['exclude'] = TRUE;
    $handler->display->display_options['fields']['field_day']['element_label_colon'] = FALSE;
    /* Sort criterion: Content: Date -  start date (field_date) */
    $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
    $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
    $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
    /* Filter criterion: Content: Published */
    $handler->display->display_options['filters']['status']['id'] = 'status';
    $handler->display->display_options['filters']['status']['table'] = 'node';
    $handler->display->display_options['filters']['status']['field'] = 'status';
    $handler->display->display_options['filters']['status']['value'] = 1;
    $handler->display->display_options['filters']['status']['group'] = 1;
    $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
    /* Filter criterion: Content: Type */
    $handler->display->display_options['filters']['type']['id'] = 'type';
    $handler->display->display_options['filters']['type']['table'] = 'node';
    $handler->display->display_options['filters']['type']['field'] = 'type';
    $handler->display->display_options['filters']['type']['value'] = array(
        'event' => 'event',
        'session' => 'session',
    );
    /* Filter criterion: Content: Date -  start date (field_date) */
    $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
    $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
    $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
    $handler->display->display_options['filters']['field_date_value']['operator'] = '>=';
    $handler->display->display_options['filters']['field_date_value']['granularity'] = 'minute';
    $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now -5 minutes';
    $handler->display->display_options['use_ajax_flags'] = array(
        'registration' => 'registration',
        'featured' => 0,
        'vote' => 0,
    );
    $handler->display->display_options['use_ajax_flags_widget'] = 'throbber';

    /* Display: Page */
    $handler = $view->new_display('page', 'Page', 'page_1');
    $handler->display->display_options['defaults']['style_plugin'] = FALSE;
    $handler->display->display_options['style_plugin'] = 'default';
    $handler->display->display_options['style_options']['grouping'] = array(
        0 => array(
            'field' => 'field_day',
            'rendered' => 1,
            'rendered_strip' => 0,
        ),
    );
    $handler->display->display_options['defaults']['style_options'] = FALSE;
    $handler->display->display_options['defaults']['row_plugin'] = FALSE;
    $handler->display->display_options['row_plugin'] = 'fields';
    $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
    $handler->display->display_options['defaults']['row_options'] = FALSE;
    $handler->display->display_options['defaults']['fields'] = FALSE;
    /* Field: Content: Title */
    $handler->display->display_options['fields']['title']['id'] = 'title';
    $handler->display->display_options['fields']['title']['table'] = 'node';
    $handler->display->display_options['fields']['title']['field'] = 'title';
    $handler->display->display_options['fields']['title']['label'] = '';
    $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
    $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
    /* Field: Content: Date */
    $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
    $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
    $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
    $handler->display->display_options['fields']['field_date']['label'] = '';
    $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['field_date']['settings'] = array(
        'format_type' => 'medium',
        'fromto' => 'value',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
    );
    /* Field: Content: Venue */
    $handler->display->display_options['fields']['field_venue']['id'] = 'field_venue';
    $handler->display->display_options['fields']['field_venue']['table'] = 'field_data_field_venue';
    $handler->display->display_options['fields']['field_venue']['field'] = 'field_venue';
    $handler->display->display_options['fields']['field_venue']['label'] = '';
    $handler->display->display_options['fields']['field_venue']['element_label_colon'] = FALSE;
    /* Field: Field: Day */
    $handler->display->display_options['fields']['field_day']['id'] = 'field_day';
    $handler->display->display_options['fields']['field_day']['table'] = 'field_data_field_day';
    $handler->display->display_options['fields']['field_day']['field'] = 'field_day';
    $handler->display->display_options['fields']['field_day']['label'] = '';
    $handler->display->display_options['fields']['field_day']['exclude'] = TRUE;
    $handler->display->display_options['fields']['field_day']['element_label_colon'] = FALSE;
    $handler->display->display_options['path'] = 'user/%/schedule';

    /* Display: Attachment */
    $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
    $handler->display->display_options['defaults']['title'] = FALSE;
    $handler->display->display_options['pager']['type'] = 'some';
    $handler->display->display_options['pager']['options']['items_per_page'] = '1';
    $handler->display->display_options['pager']['options']['offset'] = '0';
    $handler->display->display_options['defaults']['style_plugin'] = FALSE;
    $handler->display->display_options['style_plugin'] = 'default';
    $handler->display->display_options['defaults']['style_options'] = FALSE;
    $handler->display->display_options['defaults']['row_plugin'] = FALSE;
    $handler->display->display_options['row_plugin'] = 'fields';
    $handler->display->display_options['defaults']['row_options'] = FALSE;
    $handler->display->display_options['defaults']['header'] = FALSE;
    /* Header: Global: Text area */
    $handler->display->display_options['header']['area']['id'] = 'area';
    $handler->display->display_options['header']['area']['table'] = 'views';
    $handler->display->display_options['header']['area']['field'] = 'area';
    $handler->display->display_options['header']['area']['label'] = 'next';
    $handler->display->display_options['header']['area']['content'] = '<h3>Next up:</h3>';
    $handler->display->display_options['header']['area']['format'] = 'filtered_html';
    $handler->display->display_options['defaults']['fields'] = FALSE;
    /* Field: Content: Title */
    $handler->display->display_options['fields']['title']['id'] = 'title';
    $handler->display->display_options['fields']['title']['table'] = 'node';
    $handler->display->display_options['fields']['title']['field'] = 'title';
    $handler->display->display_options['fields']['title']['label'] = '';
    $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
    $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
    /* Field: Content: Date */
    $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
    $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
    $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
    $handler->display->display_options['fields']['field_date']['label'] = '';
    $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['field_date']['settings'] = array(
        'format_type' => 'medium',
        'fromto' => 'value',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
    );
    /* Field: Content: Length */
    $handler->display->display_options['fields']['field_length']['id'] = 'field_length';
    $handler->display->display_options['fields']['field_length']['table'] = 'field_data_field_length';
    $handler->display->display_options['fields']['field_length']['field'] = 'field_length';
    /* Field: Content: Speaker(s) */
    $handler->display->display_options['fields']['field_speakers']['id'] = 'field_speakers';
    $handler->display->display_options['fields']['field_speakers']['table'] = 'field_data_field_speakers';
    $handler->display->display_options['fields']['field_speakers']['field'] = 'field_speakers';
    $handler->display->display_options['fields']['field_speakers']['delta_offset'] = '0';
    /* Field: Content: Venue */
    $handler->display->display_options['fields']['field_venue']['id'] = 'field_venue';
    $handler->display->display_options['fields']['field_venue']['table'] = 'field_data_field_venue';
    $handler->display->display_options['fields']['field_venue']['field'] = 'field_venue';
    /* Field: Field: Day */
    $handler->display->display_options['fields']['field_day']['id'] = 'field_day';
    $handler->display->display_options['fields']['field_day']['table'] = 'field_data_field_day';
    $handler->display->display_options['fields']['field_day']['field'] = 'field_day';
    $handler->display->display_options['fields']['field_day']['label'] = '';
    $handler->display->display_options['fields']['field_day']['exclude'] = TRUE;
    $handler->display->display_options['fields']['field_day']['element_label_colon'] = FALSE;
    $handler->display->display_options['use_ajax_flags'] = array(
        'registration' => 'registration',
        'featured' => 0,
        'vote' => 0,
    );
    $handler->display->display_options['use_ajax_flags_widget'] = 'throbber';
    $handler->display->display_options['displays'] = array(
        'default' => 'default',
        'page_1' => 'page_1',
    );

    $views[$view->name] = $view;
    return $views;
}