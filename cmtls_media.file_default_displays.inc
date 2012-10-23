<?php
/**
 * @file
 * cmtls_media.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function cmtls_media_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'default__cmtls_gallery_teaser__file_icon';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'cmtls_small',
    'icon_set' => 'default',
  );
  $export['default__cmtls_gallery_teaser__file_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'default__media_gallery_detail__file_icon';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'cmtls_small',
    'icon_set' => 'default',
  );
  $export['default__media_gallery_detail__file_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'default__media_gallery_lightbox__file_icon';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'cmtls_small',
    'icon_set' => 'default',
  );
  $export['default__media_gallery_lightbox__file_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'default__media_gallery_thumbnail__file_icon';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'cmtls_small',
    'icon_set' => 'default',
  );
  $export['default__media_gallery_thumbnail__file_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__cmtls_gallery_teaser__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__cmtls_gallery_teaser__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__cmtls_gallery_teaser__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__cmtls_gallery_teaser__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__cmtls_gallery_teaser__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__cmtls_gallery_teaser__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__cmtls_gallery_teaser__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__cmtls_gallery_teaser__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__cmtls_gallery_teaser__file_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
    'icon_set' => 'default',
  );
  $export['image__cmtls_gallery_teaser__file_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__cmtls_gallery_teaser__file_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'cmtls_small',
  );
  $export['image__cmtls_gallery_teaser__file_image'] = $file_display;

  return $export;
}
