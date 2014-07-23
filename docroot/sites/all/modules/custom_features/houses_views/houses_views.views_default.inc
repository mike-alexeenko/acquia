<?php
/**
 * @file
 * houses_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function houses_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'properties';
  $view->description = 'house content type';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Properties';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Price */
  $handler->display->display_options['fields']['field_property_price']['id'] = 'field_property_price';
  $handler->display->display_options['fields']['field_property_price']['table'] = 'field_data_field_property_price';
  $handler->display->display_options['fields']['field_property_price']['field'] = 'field_property_price';
  $handler->display->display_options['fields']['field_property_price']['settings'] = array(
    'thousand_separator' => '.',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Bedrooms */
  $handler->display->display_options['fields']['field_bedrooms']['id'] = 'field_bedrooms';
  $handler->display->display_options['fields']['field_bedrooms']['table'] = 'field_data_field_bedrooms';
  $handler->display->display_options['fields']['field_bedrooms']['field'] = 'field_bedrooms';
  /* Field: Content: Bathrooms */
  $handler->display->display_options['fields']['field_bathrooms']['id'] = 'field_bathrooms';
  $handler->display->display_options['fields']['field_bathrooms']['table'] = 'field_data_field_bathrooms';
  $handler->display->display_options['fields']['field_bathrooms']['field'] = 'field_bathrooms';
  /* Field: Content: Living area */
  $handler->display->display_options['fields']['field_living_area']['id'] = 'field_living_area';
  $handler->display->display_options['fields']['field_living_area']['table'] = 'field_data_field_living_area';
  $handler->display->display_options['fields']['field_living_area']['field'] = 'field_living_area';
  $handler->display->display_options['fields']['field_living_area']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Property status */
  $handler->display->display_options['fields']['field_property_status']['id'] = 'field_property_status';
  $handler->display->display_options['fields']['field_property_status']['table'] = 'field_data_field_property_status';
  $handler->display->display_options['fields']['field_property_status']['field'] = 'field_property_status';
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_property_category']['id'] = 'field_property_category';
  $handler->display->display_options['fields']['field_property_category']['table'] = 'field_data_field_property_category';
  $handler->display->display_options['fields']['field_property_category']['field'] = 'field_property_category';
  $handler->display->display_options['fields']['field_property_category']['delta_offset'] = '0';
  /* Field: Content: Property Type */
  $handler->display->display_options['fields']['field_type']['id'] = 'field_type';
  $handler->display->display_options['fields']['field_type']['table'] = 'field_data_field_type';
  $handler->display->display_options['fields']['field_type']['field'] = 'field_type';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['label'] = 'Country | City';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'ID';
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
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
    'house' => 'house',
  );

  /* Display: Properties Listing */
  $handler = $view->new_display('panel_pane', 'Properties Listing', 'properties_listing');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '3, 6, 12, 24, 48';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'no results found';
  $handler->display->display_options['empty']['area']['format'] = 'panopoly_wysiwyg_text';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Property photos */
  $handler->display->display_options['fields']['field_property_photos']['id'] = 'field_property_photos';
  $handler->display->display_options['fields']['field_property_photos']['table'] = 'field_data_field_property_photos';
  $handler->display->display_options['fields']['field_property_photos']['field'] = 'field_property_photos';
  $handler->display->display_options['fields']['field_property_photos']['label'] = '';
  $handler->display->display_options['fields']['field_property_photos']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_property_photos']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_property_photos']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'file',
  );
  $handler->display->display_options['fields']['field_property_photos']['delta_limit'] = '2';
  $handler->display->display_options['fields']['field_property_photos']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_property_photos']['separator'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Price */
  $handler->display->display_options['fields']['field_property_price']['id'] = 'field_property_price';
  $handler->display->display_options['fields']['field_property_price']['table'] = 'field_data_field_property_price';
  $handler->display->display_options['fields']['field_property_price']['field'] = 'field_property_price';
  $handler->display->display_options['fields']['field_property_price']['label'] = '';
  $handler->display->display_options['fields']['field_property_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_property_price']['settings'] = array(
    'thousand_separator' => '.',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_property_country']['id'] = 'field_property_country';
  $handler->display->display_options['fields']['field_property_country']['table'] = 'field_data_field_property_country';
  $handler->display->display_options['fields']['field_property_country']['field'] = 'field_property_country';
  $handler->display->display_options['fields']['field_property_country']['label'] = '';
  $handler->display->display_options['fields']['field_property_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_property_country']['type'] = 'hs_taxonomy_term_reference_hierarchical_links';
  $handler->display->display_options['fields']['field_property_country']['delta_offset'] = '0';
  /* Field: Content statistics: Most recent view */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'node_counter';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['exclude'] = TRUE;
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'long';
  $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'long';
  /* Field: Content statistics: Total views */
  $handler->display->display_options['fields']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['exclude'] = TRUE;
  /* Field: Views information */
  $handler->display->display_options['fields']['daycount']['id'] = 'daycount';
  $handler->display->display_options['fields']['daycount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['daycount']['field'] = 'daycount';
  $handler->display->display_options['fields']['daycount']['ui_name'] = 'Views information';
  $handler->display->display_options['fields']['daycount']['label'] = '';
  $handler->display->display_options['fields']['daycount']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['daycount']['alter']['text'] = '<span class="views-info-toggle">views count</span>
<div class="views-info">
Total views: [totalcount]<br>
Views today: [daycount]
</div>';
  $handler->display->display_options['fields']['daycount']['element_label_colon'] = FALSE;
  /* Field: Content: Bedrooms */
  $handler->display->display_options['fields']['field_bedrooms']['id'] = 'field_bedrooms';
  $handler->display->display_options['fields']['field_bedrooms']['table'] = 'field_data_field_bedrooms';
  $handler->display->display_options['fields']['field_bedrooms']['field'] = 'field_bedrooms';
  $handler->display->display_options['fields']['field_bedrooms']['label'] = '';
  $handler->display->display_options['fields']['field_bedrooms']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bedrooms']['element_label_colon'] = FALSE;
  /* Field: Content: Bathrooms */
  $handler->display->display_options['fields']['field_bathrooms']['id'] = 'field_bathrooms';
  $handler->display->display_options['fields']['field_bathrooms']['table'] = 'field_data_field_bathrooms';
  $handler->display->display_options['fields']['field_bathrooms']['field'] = 'field_bathrooms';
  $handler->display->display_options['fields']['field_bathrooms']['label'] = '';
  $handler->display->display_options['fields']['field_bathrooms']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bathrooms']['element_label_colon'] = FALSE;
  /* Field: Content: Living area */
  $handler->display->display_options['fields']['field_living_area']['id'] = 'field_living_area';
  $handler->display->display_options['fields']['field_living_area']['table'] = 'field_data_field_living_area';
  $handler->display->display_options['fields']['field_living_area']['field'] = 'field_living_area';
  $handler->display->display_options['fields']['field_living_area']['label'] = '';
  $handler->display->display_options['fields']['field_living_area']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_living_area']['alter']['text'] = '<span class="detailed-info-toggle">view details</span>
<div class="detailed-info">
    Bedrooms: [field_bedrooms]<br>
    Bathrooms: [field_bathrooms]<br>
    [field_living_area]
</div>';
  $handler->display->display_options['fields']['field_living_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_living_area']['settings'] = array(
    'thousand_separator' => '.',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['sorts']['changed']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['changed']['expose']['label'] = 'Date';
  /* Sort criterion: Content: Price (field_property_price) */
  $handler->display->display_options['sorts']['field_property_price_value']['id'] = 'field_property_price_value';
  $handler->display->display_options['sorts']['field_property_price_value']['table'] = 'field_data_field_property_price';
  $handler->display->display_options['sorts']['field_property_price_value']['field'] = 'field_property_price_value';
  $handler->display->display_options['sorts']['field_property_price_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_property_price_value']['expose']['label'] = 'Price';
  /* Sort criterion: Content: Living area (field_living_area) */
  $handler->display->display_options['sorts']['field_living_area_value']['id'] = 'field_living_area_value';
  $handler->display->display_options['sorts']['field_living_area_value']['table'] = 'field_data_field_living_area';
  $handler->display->display_options['sorts']['field_living_area_value']['field'] = 'field_living_area_value';
  $handler->display->display_options['sorts']['field_living_area_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_living_area_value']['expose']['label'] = 'Living area';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'house' => 'house',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Property Type (field_type) */
  $handler->display->display_options['filters']['field_type_tid']['id'] = 'field_type_tid';
  $handler->display->display_options['filters']['field_type_tid']['table'] = 'field_data_field_type';
  $handler->display->display_options['filters']['field_type_tid']['field'] = 'field_type_tid';
  $handler->display->display_options['filters']['field_type_tid']['value'] = array(
    268 => '268',
    269 => '269',
    270 => '270',
    271 => '271',
    272 => '272',
    273 => '273',
    274 => '274',
    275 => '275',
  );
  $handler->display->display_options['filters']['field_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_type_tid']['expose']['operator_id'] = 'field_type_tid_op';
  $handler->display->display_options['filters']['field_type_tid']['expose']['label'] = 'Property Type';
  $handler->display->display_options['filters']['field_type_tid']['expose']['description'] = 'please select';
  $handler->display->display_options['filters']['field_type_tid']['expose']['operator'] = 'field_type_tid_op';
  $handler->display->display_options['filters']['field_type_tid']['expose']['identifier'] = 'field_type_tid';
  $handler->display->display_options['filters']['field_type_tid']['expose']['remember_roles'] = array(
    2 => 0,
    1 => '1',
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_type_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_type_tid']['group_info']['label'] = 'Property Type (field_type)';
  $handler->display->display_options['filters']['field_type_tid']['group_info']['identifier'] = 'field_type_tid';
  $handler->display->display_options['filters']['field_type_tid']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_type_tid']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_tid']['vocabulary'] = 'house_type';
  /* Filter criterion: Content: Bathrooms (field_bathrooms) */
  $handler->display->display_options['filters']['field_bathrooms_value']['id'] = 'field_bathrooms_value';
  $handler->display->display_options['filters']['field_bathrooms_value']['table'] = 'field_data_field_bathrooms';
  $handler->display->display_options['filters']['field_bathrooms_value']['field'] = 'field_bathrooms_value';
  $handler->display->display_options['filters']['field_bathrooms_value']['value'] = array(
    1 => '1',
    2 => '2',
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['filters']['field_bathrooms_value']['group'] = 1;
  $handler->display->display_options['filters']['field_bathrooms_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_bathrooms_value']['expose']['operator_id'] = 'field_bathrooms_value_op';
  $handler->display->display_options['filters']['field_bathrooms_value']['expose']['label'] = 'Bathrooms';
  $handler->display->display_options['filters']['field_bathrooms_value']['expose']['operator'] = 'field_bathrooms_value_op';
  $handler->display->display_options['filters']['field_bathrooms_value']['expose']['identifier'] = 'field_bathrooms_value';
  $handler->display->display_options['filters']['field_bathrooms_value']['expose']['remember_roles'] = array(
    2 => 0,
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_bathrooms_value']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_bathrooms_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Property status (field_property_status) */
  $handler->display->display_options['filters']['field_property_status_value']['id'] = 'field_property_status_value';
  $handler->display->display_options['filters']['field_property_status_value']['table'] = 'field_data_field_property_status';
  $handler->display->display_options['filters']['field_property_status_value']['field'] = 'field_property_status_value';
  $handler->display->display_options['filters']['field_property_status_value']['value'] = array(
    0 => '0',
    1 => '1',
  );
  $handler->display->display_options['filters']['field_property_status_value']['group'] = 1;
  $handler->display->display_options['filters']['field_property_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_property_status_value']['expose']['operator_id'] = 'field_property_status_value_op';
  $handler->display->display_options['filters']['field_property_status_value']['expose']['label'] = 'Property status';
  $handler->display->display_options['filters']['field_property_status_value']['expose']['operator'] = 'field_property_status_value_op';
  $handler->display->display_options['filters']['field_property_status_value']['expose']['identifier'] = 'field_property_status_value';
  $handler->display->display_options['filters']['field_property_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_property_status_value']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_property_status_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Bedrooms (field_bedrooms) */
  $handler->display->display_options['filters']['field_bedrooms_value']['id'] = 'field_bedrooms_value';
  $handler->display->display_options['filters']['field_bedrooms_value']['table'] = 'field_data_field_bedrooms';
  $handler->display->display_options['filters']['field_bedrooms_value']['field'] = 'field_bedrooms_value';
  $handler->display->display_options['filters']['field_bedrooms_value']['value'] = array(
    1 => '1',
    2 => '2',
    3 => '3',
    4 => '4',
    5 => '5',
    6 => '6',
    7 => '7',
  );
  $handler->display->display_options['filters']['field_bedrooms_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_bedrooms_value']['expose']['operator_id'] = 'field_bedrooms_value_op';
  $handler->display->display_options['filters']['field_bedrooms_value']['expose']['label'] = 'Bedrooms';
  $handler->display->display_options['filters']['field_bedrooms_value']['expose']['operator'] = 'field_bedrooms_value_op';
  $handler->display->display_options['filters']['field_bedrooms_value']['expose']['identifier'] = 'field_bedrooms_value';
  $handler->display->display_options['filters']['field_bedrooms_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_bedrooms_value']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_bedrooms_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Category (field_property_category) */
  $handler->display->display_options['filters']['field_property_category_tid']['id'] = 'field_property_category_tid';
  $handler->display->display_options['filters']['field_property_category_tid']['table'] = 'field_data_field_property_category';
  $handler->display->display_options['filters']['field_property_category_tid']['field'] = 'field_property_category_tid';
  $handler->display->display_options['filters']['field_property_category_tid']['value'] = array(
    6 => '6',
    7 => '7',
    8 => '8',
    276 => '276',
    277 => '277',
  );
  $handler->display->display_options['filters']['field_property_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_property_category_tid']['expose']['operator_id'] = 'field_property_category_tid_op';
  $handler->display->display_options['filters']['field_property_category_tid']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_property_category_tid']['expose']['operator'] = 'field_property_category_tid_op';
  $handler->display->display_options['filters']['field_property_category_tid']['expose']['identifier'] = 'field_property_category_tid';
  $handler->display->display_options['filters']['field_property_category_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_property_category_tid']['expose']['remember_roles'] = array(
    2 => 0,
    1 => '1',
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_property_category_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_property_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_property_category_tid']['vocabulary'] = 'panopoly_categories';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['link_to_view'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Information */
  $handler = $view->new_display('panel_pane', 'Information', 'panel_pane_1');

  /* Display: Recently added  */
  $handler = $view->new_display('block', 'Recently added ', 'block_1');
  $handler->display->display_options['display_description'] = 'updated date(desc) filtering';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_property_country']['id'] = 'field_property_country';
  $handler->display->display_options['fields']['field_property_country']['table'] = 'field_data_field_property_country';
  $handler->display->display_options['fields']['field_property_country']['field'] = 'field_property_country';
  $handler->display->display_options['fields']['field_property_country']['label'] = '';
  $handler->display->display_options['fields']['field_property_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_property_country']['type'] = 'hs_taxonomy_term_reference_hierarchical_links';
  $handler->display->display_options['fields']['field_property_country']['delta_offset'] = '0';
  /* Field: Content: Property photos */
  $handler->display->display_options['fields']['field_property_photos']['id'] = 'field_property_photos';
  $handler->display->display_options['fields']['field_property_photos']['table'] = 'field_data_field_property_photos';
  $handler->display->display_options['fields']['field_property_photos']['field'] = 'field_property_photos';
  $handler->display->display_options['fields']['field_property_photos']['label'] = '';
  $handler->display->display_options['fields']['field_property_photos']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_property_photos']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_property_photos']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_property_photos']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_property_photos']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $export['properties'] = $view;

  return $export;
}
