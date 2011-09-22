<?php
/**
 * @file
 * cmtls_media.features.user_permission.inc
 */

/**
 * Implementation of hook_user_default_permissions().
 */
function cmtls_media_user_default_permissions() {
  $permissions = array();

  // Exported permission: create cmtls_media content
  $permissions['create cmtls_media content'] = array(
    'name' => 'create cmtls_media content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any cmtls_media content
  $permissions['delete any cmtls_media content'] = array(
    'name' => 'delete any cmtls_media content',
    'roles' => array(),
  );

  // Exported permission: delete own cmtls_media content
  $permissions['delete own cmtls_media content'] = array(
    'name' => 'delete own cmtls_media content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any cmtls_media content
  $permissions['edit any cmtls_media content'] = array(
    'name' => 'edit any cmtls_media content',
    'roles' => array(),
  );

  // Exported permission: edit own cmtls_media content
  $permissions['edit own cmtls_media content'] = array(
    'name' => 'edit own cmtls_media content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
