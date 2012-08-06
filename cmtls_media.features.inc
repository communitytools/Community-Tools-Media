<?php
/**
 * @file
 * cmtls_media.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cmtls_media_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function cmtls_media_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function cmtls_media_flag_default_flags() {
  $flags = array();
  // Exported flag: "Follow".
  $flags['media_gallery_follow'] = array(
    'content_type' => 'node',
    'title' => 'Follow',
    'global' => '0',
    'types' => array(
      0 => 'media_gallery',
    ),
    'flag_short' => 'Follow',
    'flag_long' => 'Subscribe to [node:title]',
    'flag_message' => 'You are now subscribed to [node:title]',
    'unflag_short' => 'Unfollow',
    'unflag_long' => 'Unsubscribe from [node:title]',
    'unflag_message' => 'You are now unsubscribed from [node:title]',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '2',
        1 => '3',
      ),
      'unflag' => array(
        0 => '2',
        1 => '3',
      ),
    ),
    'weight' => 0,
    'show_on_page' => 1,
    'show_on_teaser' => 0,
    'show_on_form' => 0,
    'show_contextual_link' => FALSE,
    'access_author' => '',
    'i18n' => 0,
    'module' => 'cmtls_media',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  return $flags;
}
