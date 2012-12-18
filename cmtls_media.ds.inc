<?php
/**
 * @file
 * cmtls_media.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function cmtls_media_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'comment|comment_node_media_gallery|cmtls_teaser';
  $ds_fieldsetting->entity_type = 'comment';
  $ds_fieldsetting->bundle = 'comment_node_media_gallery';
  $ds_fieldsetting->view_mode = 'cmtls_teaser';
  $ds_fieldsetting->settings = array(
    'post_date' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_post_date_short',
    ),
    'author' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'ds_user_picture' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_picture_cmtls_small',
    ),
  );
  $export['comment|comment_node_media_gallery|cmtls_teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'comment|comment_node_media_gallery|default';
  $ds_fieldsetting->entity_type = 'comment';
  $ds_fieldsetting->bundle = 'comment_node_media_gallery';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'cmtls_comment_spam_flag_link' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:4:{s:8:"sanitize";i:0;s:7:"context";s:28:"argument_entity_id:comment_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";}s:4:"type";s:5:"token";s:7:"subtype";s:45:"comment:flag-cmtls-inappropriate-comment-link";}',
        'load_terms' => 0,
      ),
    ),
    'post_date' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'ds_post_date_cmtls_timeago',
    ),
    'author' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'ds_user_picture' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_picture_cmtls_small',
    ),
  );
  $export['comment|comment_node_media_gallery|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|media_gallery|cmtls_gallery_preview';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'media_gallery';
  $ds_fieldsetting->view_mode = 'cmtls_gallery_preview';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
  );
  $export['node|media_gallery|cmtls_gallery_preview'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|media_gallery|cmtls_teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'media_gallery';
  $ds_fieldsetting->view_mode = 'cmtls_teaser';
  $ds_fieldsetting->settings = array(
    'cmtls_location_indicator' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
    'comments' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|media_gallery|cmtls_teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|media_gallery|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'media_gallery';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'comments' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|media_gallery|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|media_gallery|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'media_gallery';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'comments' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|media_gallery|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function cmtls_media_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'comment|comment_node_media_gallery|cmtls_teaser';
  $ds_layout->entity_type = 'comment';
  $ds_layout->bundle = 'comment_node_media_gallery';
  $ds_layout->view_mode = 'cmtls_teaser';
  $ds_layout->layout = 'cmtls_short_4region';
  $ds_layout->settings = array(
    'hide_empty_regions' => 1,
    'hide_sidebars' => 0,
    'regions' => array(
      'left_column' => array(
        0 => 'author',
        1 => 'ds_user_picture',
      ),
      'footer' => array(
        0 => 'post_date',
      ),
      'middle' => array(
        0 => 'comment_body',
      ),
    ),
    'fields' => array(
      'author' => 'left_column',
      'ds_user_picture' => 'left_column',
      'post_date' => 'footer',
      'comment_body' => 'middle',
    ),
    'classes' => array(),
  );
  $export['comment|comment_node_media_gallery|cmtls_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'comment|comment_node_media_gallery|default';
  $ds_layout->entity_type = 'comment';
  $ds_layout->bundle = 'comment_node_media_gallery';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'cmtls_short_4region';
  $ds_layout->settings = array(
    'hide_empty_regions' => 1,
    'hide_sidebars' => 0,
    'regions' => array(
      'left_column' => array(
        0 => 'ds_user_picture',
      ),
      'middle' => array(
        0 => 'author',
        1 => 'post_date',
        2 => 'comment_body',
      ),
      'footer' => array(
        0 => 'cmtls_comment_spam_flag_link',
      ),
    ),
    'fields' => array(
      'ds_user_picture' => 'left_column',
      'author' => 'middle',
      'post_date' => 'middle',
      'comment_body' => 'middle',
      'cmtls_comment_spam_flag_link' => 'footer',
    ),
    'classes' => array(),
  );
  $export['comment|comment_node_media_gallery|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|media_gallery|cmtls_gallery_preview';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'media_gallery';
  $ds_layout->view_mode = 'cmtls_gallery_preview';
  $ds_layout->layout = 'cmtls_short_4region';
  $ds_layout->settings = array(
    'hide_empty_regions' => 1,
    'hide_sidebars' => 0,
    'regions' => array(
      'left_column' => array(
        0 => 'media_gallery_media',
      ),
      'middle' => array(
        0 => 'title',
      ),
    ),
    'fields' => array(
      'media_gallery_media' => 'left_column',
      'title' => 'middle',
    ),
    'classes' => array(),
  );
  $export['node|media_gallery|cmtls_gallery_preview'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|media_gallery|cmtls_teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'media_gallery';
  $ds_layout->view_mode = 'cmtls_teaser';
  $ds_layout->layout = 'cmtls_short_4region';
  $ds_layout->settings = array(
    'hide_empty_regions' => 1,
    'hide_sidebars' => 0,
    'regions' => array(
      'middle' => array(
        0 => 'title',
        1 => 'media_gallery_media',
      ),
      'footer' => array(
        0 => 'cmtls_location_indicator',
        1 => 'field_cmtls_address',
        2 => 'field_cmtls_tags',
        3 => 'comments',
      ),
    ),
    'fields' => array(
      'title' => 'middle',
      'media_gallery_media' => 'middle',
      'cmtls_location_indicator' => 'footer',
      'field_cmtls_address' => 'footer',
      'field_cmtls_tags' => 'footer',
      'comments' => 'footer',
    ),
    'classes' => array(),
  );
  $export['node|media_gallery|cmtls_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|media_gallery|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'media_gallery';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 1,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'add_media_link',
        1 => 'media_gallery_description',
        2 => 'media_gallery_media',
        3 => 'comments',
      ),
    ),
    'fields' => array(
      'add_media_link' => 'ds_content',
      'media_gallery_description' => 'ds_content',
      'media_gallery_media' => 'ds_content',
      'comments' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|media_gallery|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|media_gallery|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'media_gallery';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_form';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => FALSE,
    'regions' => array(
      'header' => array(
        0 => 'title',
        1 => 'group_tabs',
        2 => 'media_gallery_description',
        3 => 'group_advanced',
        4 => 'field_cmtls_tags',
        5 => 'field_cmtls_geometry',
        6 => 'field_cmtls_address',
        7 => 'group_content_access',
        8 => 'group_audience',
        9 => 'field_cmtls_application',
        10 => 'group_gallery',
        11 => 'group_location',
      ),
      'hidden' => array(
        0 => 'media_gallery_block_columns',
        1 => 'media_gallery_media',
        2 => 'media_gallery_format',
        3 => 'media_gallery_lightbox_extras',
        4 => 'media_gallery_columns',
        5 => 'media_gallery_rows',
        6 => 'media_gallery_image_info_where',
        7 => 'media_gallery_expose_block',
        8 => 'media_gallery_allow_download',
        9 => 'media_gallery_block_rows',
        10 => 'media_gallery_collection',
        11 => 'redirect',
        12 => 'path',
        13 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title' => 'header',
      'group_tabs' => 'header',
      'media_gallery_description' => 'header',
      'group_advanced' => 'header',
      'field_cmtls_tags' => 'header',
      'field_cmtls_geometry' => 'header',
      'field_cmtls_address' => 'header',
      'media_gallery_block_columns' => 'hidden',
      'media_gallery_media' => 'hidden',
      'media_gallery_format' => 'hidden',
      'media_gallery_lightbox_extras' => 'hidden',
      'media_gallery_columns' => 'hidden',
      'media_gallery_rows' => 'hidden',
      'media_gallery_image_info_where' => 'hidden',
      'media_gallery_expose_block' => 'hidden',
      'group_content_access' => 'header',
      'media_gallery_allow_download' => 'hidden',
      'group_audience' => 'header',
      'media_gallery_block_rows' => 'hidden',
      'media_gallery_collection' => 'hidden',
      'field_cmtls_application' => 'header',
      'redirect' => 'hidden',
      'path' => 'hidden',
      '_add_existing_field' => 'hidden',
      'group_gallery' => 'header',
      'group_location' => 'header',
    ),
    'classes' => array(),
  );
  $export['node|media_gallery|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|media_gallery|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'media_gallery';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'add_media_link',
        1 => 'media_gallery_description',
        2 => 'media_gallery_media',
        3 => 'comments',
      ),
    ),
    'fields' => array(
      'add_media_link' => 'ds_content',
      'media_gallery_description' => 'ds_content',
      'media_gallery_media' => 'ds_content',
      'comments' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|media_gallery|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|media_gallery|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'media_gallery';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'media_gallery_media',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'media_gallery_media' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|media_gallery|teaser'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function cmtls_media_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'cmtls_gallery_preview';
  $ds_view_mode->label = 'CT Media teaser';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['cmtls_gallery_preview'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'cmtls_gallery_teaser';
  $ds_view_mode->label = 'CT gallery teaser';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['cmtls_gallery_teaser'] = $ds_view_mode;

  return $export;
}
