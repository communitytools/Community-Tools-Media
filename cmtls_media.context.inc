<?php
/**
 * @file
 * cmtls_media.context.inc
 */

/**
 * Implementation of hook_context_default_contexts().
 */
function cmtls_media_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'CT Media meta blocks';
  $context->description = 'Community Tools media metadata blocks';
  $context->tag = 'cmtls';
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
        'views-cmtls_media_location-block' => array(
          'module' => 'views',
          'delta' => 'cmtls_media_location-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-cmtls_media_tags-block' => array(
          'module' => 'views',
          'delta' => 'cmtls_media_tags-block',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Community Tools media metadata blocks');
  t('cmtls');
  $export['CT Media meta blocks'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'CT Media wall';
  $context->description = 'Community Tools media list';
  $context->tag = 'cmtls';
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
  t('Community Tools media list');
  t('cmtls');
  $export['CT Media wall'] = $context;

  return $export;
}
