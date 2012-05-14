<?php
/**
 * @file
 * cmtls_media.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function cmtls_media_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'cmtls_media_latest';
  $context->description = 'The latest media galleries block on the group page';
  $context->tag = 'CT media';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'cmtls_group' => 'cmtls_group',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-cmtls_media-block_1' => array(
          'module' => 'views',
          'delta' => 'cmtls_media-block_1',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('CT media');
  t('The latest media galleries block on the group page');
  $export['cmtls_media_latest'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'cmtls_media_page';
  $context->description = 'Community Tools media page';
  $context->tag = 'CT media';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'media_gallery' => 'media_gallery',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-cb129c8a19431ae6b2fd1711646e2de2' => array(
          'module' => 'views',
          'delta' => 'cb129c8a19431ae6b2fd1711646e2de2',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-d3b739be3a716e61b54f0c1254eefd60' => array(
          'module' => 'views',
          'delta' => 'd3b739be3a716e61b54f0c1254eefd60',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('CT media');
  t('Community Tools media page');
  $export['cmtls_media_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'cmtls_medias_page';
  $context->description = 'Community Tools medias page';
  $context->tag = 'CT media';
  $context->conditions = array(
    'cmtls_app_type' => array(
      'values' => array(
        'cmtls_media' => 'cmtls_media',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'node' => array(
      'values' => array(
        'cmtls_app' => 'cmtls_app',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-cmtls_media-block' => array(
          'module' => 'views',
          'delta' => 'cmtls_media-block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('CT media');
  t('Community Tools medias page');
  $export['cmtls_medias_page'] = $context;

  return $export;
}
