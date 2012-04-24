<?php
/**
 * @file
 * cmtls_media.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function cmtls_media_field_default_fields() {
  $fields = array();

  // Exported field: 'comment-comment_node_media_gallery-comment_body'
  $fields['comment-comment_node_media_gallery-comment_body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'comment',
      ),
      'field_name' => 'comment_body',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'comment_node_media_gallery',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'cmtls_teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'comment',
      'field_name' => 'comment_body',
      'label' => 'Comment',
      'required' => TRUE,
      'settings' => array(
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'rows' => 5,
        ),
        'type' => 'text_textarea',
        'weight' => 0,
      ),
    ),
  );

  // Exported field: 'node-media_gallery-field_cmtls_application'
  $fields['node-media_gallery-field_cmtls_application'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_cmtls_application',
      'foreign keys' => array(
        'nid' => array(
          'columns' => array(
            'nid' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'nid' => array(
          0 => 'nid',
        ),
      ),
      'module' => 'node_reference',
      'settings' => array(
        'referenceable_types' => array(
          'cmtls_app' => 'cmtls_app',
        ),
        'view' => array(
          'args' => array(),
          'display_name' => '',
          'view_name' => '',
        ),
      ),
      'translatable' => '0',
      'type' => 'node_reference',
    ),
    'field_instance' => array(
      'bundle' => 'media_gallery',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'cmtls_gallery_preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '16',
        ),
        'cmtls_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '17',
        ),
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '16',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'media_gallery_block' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '5',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_cmtls_application',
      'label' => 'Application',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '14',
      ),
    ),
  );

  // Exported field: 'node-media_gallery-field_cmtls_location'
  $fields['node-media_gallery-field_cmtls_location'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_cmtls_location',
      'foreign keys' => array(),
      'indexes' => array(
        'lid' => array(
          0 => 'lid',
        ),
      ),
      'module' => 'location_cck',
      'settings' => array(
        'gmap_macro' => '[gmap ]',
        'gmap_marker' => 'small orange',
        'location_settings' => array(
          'display' => array(
            'hide' => array(
              'additional' => 'additional',
              'city' => 0,
              'coords' => 'coords',
              'country' => 0,
              'country_name' => 'country_name',
              'fax' => 0,
              'locpick' => 'locpick',
              'map_link' => 0,
              'name' => 0,
              'phone' => 0,
              'postal_code' => 0,
              'province' => 0,
              'province_name' => 'province_name',
              'street' => 0,
            ),
          ),
          'form' => array(
            'fields' => array(
              'additional' => array(
                'collect' => '0',
                'default' => '',
                'weight' => '-97',
              ),
              'city' => array(
                'collect' => '1',
                'default' => '',
                'weight' => '-96',
              ),
              'country' => array(
                'collect' => '1',
                'default' => 'ee',
                'weight' => '-93',
              ),
              'fax' => array(
                'collect' => '0',
                'default' => '',
                'weight' => '30',
              ),
              'locpick' => array(
                'collect' => '1',
                'weight' => '-100',
              ),
              'name' => array(
                'collect' => '1',
                'default' => '',
                'weight' => '-99',
              ),
              'phone' => array(
                'collect' => '0',
                'default' => '',
                'weight' => '25',
              ),
              'postal_code' => array(
                'collect' => '1',
                'default' => '',
                'weight' => '-94',
              ),
              'province' => array(
                'collect' => '1',
                'default' => '',
                'weight' => '-95',
              ),
              'street' => array(
                'collect' => '1',
                'default' => '',
                'weight' => '-98',
              ),
            ),
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'location',
    ),
    'field_instance' => array(
      'bundle' => 'media_gallery',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'cmtls_gallery_preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '12',
        ),
        'cmtls_teaser' => array(
          'label' => 'above',
          'module' => 'location_cck',
          'settings' => array(),
          'type' => 'location_default',
          'weight' => '2',
        ),
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '12',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'media_gallery_block' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '4',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_cmtls_location',
      'label' => 'Location',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'node-media_gallery-field_cmtls_tags'
  $fields['node-media_gallery-field_cmtls_tags'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_cmtls_tags',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'parent' => '0',
            'vocabulary' => 'cmtls_tags',
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'media_gallery',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'cmtls_gallery_preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '14',
        ),
        'cmtls_teaser' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '3',
        ),
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '14',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'media_gallery_block' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '2',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_cmtls_tags',
      'label' => 'Tags',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'taxonomy',
        'settings' => array(
          'autocomplete_path' => 'taxonomy/autocomplete',
          'size' => 60,
        ),
        'type' => 'taxonomy_autocomplete',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'node-media_gallery-group_audience'
  $fields['node-media_gallery-group_audience'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'group_audience',
      'foreign keys' => array(
        'og' => array(
          'columns' => array(
            'gid' => 'gid',
          ),
          'table' => 'og',
        ),
      ),
      'indexes' => array(
        'gid' => array(
          0 => 'gid',
        ),
      ),
      'module' => 'og',
      'no_ui' => TRUE,
      'settings' => array(),
      'translatable' => '0',
      'type' => 'group',
    ),
    'field_instance' => array(
      'bundle' => 'media_gallery',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'cmtls_gallery_preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '25',
        ),
        'cmtls_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '25',
        ),
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '25',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'media_gallery_block' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'group_audience',
      'label' => 'Groups audience',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'view modes' => array(
        'full' => array(
          'custom settings' => FALSE,
          'label' => 'Full',
          'type' => 'og_list_default',
        ),
        'teaser' => array(
          'custom settings' => FALSE,
          'label' => 'Teaser',
          'type' => 'og_list_default',
        ),
      ),
      'widget' => array(
        'module' => 'og',
        'settings' => array(
          'opt_group' => 'auto',
        ),
        'type' => 'group_audience',
        'weight' => '13',
      ),
      'widget_type' => 'group_audience',
    ),
  );

  // Exported field: 'node-media_gallery-group_content_access'
  $fields['node-media_gallery-group_content_access'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'group_content_access',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'no_ui' => TRUE,
      'settings' => array(
        'allowed_values' => array(
          0 => 'Use group defaults',
          1 => 'Public - accessible to all site users',
          2 => 'Private - accessible only to group members',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_integer',
    ),
    'field_instance' => array(
      'bundle' => 'media_gallery',
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'cmtls_gallery_preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '26',
        ),
        'cmtls_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '26',
        ),
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '26',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'media_gallery_block' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'group_content_access',
      'label' => 'Group content visibility',
      'required' => TRUE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'view modes' => array(
        'full' => array(
          'label' => 'above',
          'type' => 'list_default',
        ),
        'teaser' => array(
          'label' => 'above',
          'type' => 'list_default',
        ),
      ),
      'widget' => array(
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '12',
      ),
      'widget_type' => 'options_select',
    ),
  );

  // Exported field: 'node-media_gallery-media_gallery_allow_download'
  $fields['node-media_gallery-media_gallery_allow_download'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'media_gallery_allow_download',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(),
        'allowed_values_function' => '_media_gallery_get_allow_download_values',
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'media_gallery',
      'default_value' => array(
        0 => array(
          'value' => 1,
        ),
      ),
      'deleted' => '0',
      'description' => 'Display a "download original image" link',
      'display' => array(
        'cmtls_gallery_preview' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '20',
        ),
        'cmtls_teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '20',
        ),
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '20',
        ),
        'full' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 8,
        ),
        'media_gallery_block' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 8,
        ),
        'teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 8,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'media_gallery_allow_download',
      'label' => 'Allow downloading of the original image',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'options',
        'settings' => array(
          'display_label' => 0,
        ),
        'type' => 'options_onoff',
        'weight' => '11',
      ),
    ),
  );

  // Exported field: 'node-media_gallery-media_gallery_block_columns'
  $fields['node-media_gallery-media_gallery_block_columns'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'media_gallery_block_columns',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(),
        'allowed_values_function' => '_media_gallery_get_block_columns_values',
      ),
      'translatable' => '0',
      'type' => 'list_float',
    ),
    'field_instance' => array(
      'bundle' => 'media_gallery',
      'default_value' => array(
        0 => array(
          'value' => 2,
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'cmtls_gallery_preview' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '22',
        ),
        'cmtls_teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '22',
        ),
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '22',
        ),
        'full' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 10,
        ),
        'media_gallery_block' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 10,
        ),
        'teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 10,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'media_gallery_block_columns',
      'label' => 'Number of columns',
      'required' => TRUE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'node-media_gallery-media_gallery_block_rows'
  $fields['node-media_gallery-media_gallery_block_rows'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'media_gallery_block_rows',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'number',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'media_gallery',
      'default_value' => array(
        0 => array(
          'value' => 3,
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'cmtls_gallery_preview' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '23',
        ),
        'cmtls_teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '23',
        ),
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '23',
        ),
        'full' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 11,
        ),
        'media_gallery_block' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 11,
        ),
        'teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 11,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'media_gallery_block_rows',
      'label' => 'Number of rows',
      'required' => TRUE,
      'settings' => array(
        'max' => '',
        'min' => 1,
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '12',
      ),
    ),
  );

  // Exported field: 'node-media_gallery-media_gallery_collection'
  $fields['node-media_gallery-media_gallery_collection'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'media_gallery_collection',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'gallery_collections',
            'parent' => 0,
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'media_gallery',
      'default_value' => array(
        0 => array(
          'tid' => '4',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'cmtls_gallery_preview' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '24',
        ),
        'cmtls_teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '24',
        ),
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '24',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'media_gallery_block' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 12,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'media_gallery_collection',
      'label' => 'Gallery collection',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '13',
      ),
    ),
  );

  // Exported field: 'node-media_gallery-media_gallery_columns'
  $fields['node-media_gallery-media_gallery_columns'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'media_gallery_columns',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(),
        'allowed_values_function' => '_media_gallery_get_columns_values',
      ),
      'translatable' => '0',
      'type' => 'list_float',
    ),
    'field_instance' => array(
      'bundle' => 'media_gallery',
      'default_value' => array(
        0 => array(
          'value' => 4,
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'cmtls_gallery_preview' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '17',
        ),
        'cmtls_teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '16',
        ),
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '17',
        ),
        'full' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 5,
        ),
        'media_gallery_block' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 5,
        ),
        'teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 5,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'media_gallery_columns',
      'label' => 'Number of columns',
      'required' => TRUE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '6',
      ),
    ),
  );

  // Exported field: 'node-media_gallery-media_gallery_description'
  $fields['node-media_gallery-media_gallery_description'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'media_gallery_description',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'media_gallery',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'cmtls_gallery_preview' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '5',
        ),
        'cmtls_teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '12',
        ),
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 0,
        ),
        'media_gallery_block' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'media_gallery_description',
      'label' => 'Description',
      'required' => FALSE,
      'settings' => array(
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'rows' => 4,
        ),
        'type' => 'text_textarea',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'node-media_gallery-media_gallery_expose_block'
  $fields['node-media_gallery-media_gallery_expose_block'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'media_gallery_expose_block',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(),
        'allowed_values_function' => '_media_gallery_get_expose_block_values',
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'media_gallery',
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'cmtls_gallery_preview' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '21',
        ),
        'cmtls_teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '21',
        ),
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '21',
        ),
        'full' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 9,
        ),
        'media_gallery_block' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 9,
        ),
        'teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 9,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'media_gallery_expose_block',
      'label' => 'Create a block of most recently added media',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'options',
        'settings' => array(
          'display_label' => 0,
        ),
        'type' => 'options_onoff',
        'weight' => '10',
      ),
    ),
  );

  // Exported field: 'node-media_gallery-media_gallery_format'
  $fields['node-media_gallery-media_gallery_format'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'media_gallery_format',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(),
        'allowed_values_function' => '_media_gallery_get_format_values',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'media_gallery',
      'default_value' => array(
        0 => array(
          'value' => 'lightbox',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'cmtls_gallery_preview' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '13',
        ),
        'cmtls_teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '14',
        ),
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '13',
        ),
        'full' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 3,
        ),
        'media_gallery_block' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 3,
        ),
        'teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 3,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'media_gallery_format',
      'label' => 'Gallery format',
      'required' => TRUE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'node-media_gallery-media_gallery_image_info_where'
  $fields['node-media_gallery-media_gallery_image_info_where'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'media_gallery_image_info_where',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(),
        'allowed_values_function' => '_media_gallery_get_image_info_placement_values',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'media_gallery',
      'default_value' => array(
        0 => array(
          'value' => 'hover',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'cmtls_gallery_preview' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '19',
        ),
        'cmtls_teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '19',
        ),
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '19',
        ),
        'full' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 7,
        ),
        'media_gallery_block' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 7,
        ),
        'teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 7,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'media_gallery_image_info_where',
      'label' => 'Media information',
      'required' => TRUE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '8',
      ),
    ),
  );

  // Exported field: 'node-media_gallery-media_gallery_lightbox_extras'
  $fields['node-media_gallery-media_gallery_lightbox_extras'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'media_gallery_lightbox_extras',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(),
        'allowed_values_function' => '_media_gallery_get_lightbox_extras_values',
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'media_gallery',
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => '0',
      'description' => 'Show title and description',
      'display' => array(
        'cmtls_gallery_preview' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '15',
        ),
        'cmtls_teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '15',
        ),
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '15',
        ),
        'full' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 4,
        ),
        'media_gallery_block' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 4,
        ),
        'teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 4,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'media_gallery_lightbox_extras',
      'label' => 'Lightbox title and description',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'options',
        'settings' => array(
          'display_label' => 0,
        ),
        'type' => 'options_onoff',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'node-media_gallery-media_gallery_media'
  $fields['node-media_gallery-media_gallery_media'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'media_gallery_media',
      'foreign keys' => array(),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'module' => 'media',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'media',
    ),
    'field_instance' => array(
      'bundle' => 'media_gallery',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'cmtls_gallery_preview' => array(
          'label' => 'hidden',
          'module' => 'cmtls_media',
          'settings' => array(
            'file_thumbs_count' => '1',
          ),
          'type' => 'cmtls_media_preview',
          'weight' => '0',
        ),
        'cmtls_teaser' => array(
          'label' => 'hidden',
          'module' => 'cmtls_media',
          'settings' => array(
            'file_thumbs_count' => '5',
          ),
          'type' => 'cmtls_media_preview',
          'weight' => '1',
        ),
        'default' => array(
          'label' => 'hidden',
          'module' => 'media_gallery',
          'settings' => array(
            'file_view_mode' => 'media_gallery_thumbnail',
          ),
          'type' => 'media_gallery',
          'weight' => '2',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'media_gallery',
          'settings' => array(
            'file_view_mode' => 'media_gallery_thumbnail',
          ),
          'type' => 'media_gallery',
          'weight' => 2,
        ),
        'media_gallery_block' => array(
          'label' => 'hidden',
          'module' => 'media_gallery',
          'settings' => array(
            'file_view_mode' => 'media_gallery_block_thumbnail',
          ),
          'type' => 'media_gallery',
          'weight' => 2,
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'media_gallery',
          'settings' => array(
            'file_view_mode' => 'media_gallery_collection_thumbnail',
          ),
          'type' => 'media_gallery',
          'weight' => 2,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'media_gallery_media',
      'label' => 'Gallery media',
      'required' => FALSE,
      'settings' => array(
        'file_extensions' => 'jpg jpeg gif png txt doc xls pdf ppt pps odt ods odp mp3 mov m4v mp4 mpeg avi ogg wmv ico',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'media',
        'settings' => array(
          'allowed_schemes' => array(
            'public' => 'public',
          ),
          'allowed_types' => array(
            'audio' => 'audio',
            'image' => 'image',
            'video' => 'video',
          ),
          'progress_indicator' => 'throbber',
        ),
        'type' => 'media_generic',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'node-media_gallery-media_gallery_rows'
  $fields['node-media_gallery-media_gallery_rows'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'media_gallery_rows',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'number',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'media_gallery',
      'default_value' => array(
        0 => array(
          'value' => 3,
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'cmtls_gallery_preview' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '18',
        ),
        'cmtls_teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '18',
        ),
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '18',
        ),
        'full' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 6,
        ),
        'media_gallery_block' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 6,
        ),
        'teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 6,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'media_gallery_rows',
      'label' => 'Number of rows',
      'required' => TRUE,
      'settings' => array(
        'max' => '',
        'min' => '1',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '7',
      ),
    ),
  );

  // Exported field: 'taxonomy_term-gallery_collections-field_license'
  $fields['taxonomy_term-gallery_collections-field_license'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_license',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(),
        'allowed_values_function' => '_media_gallery_get_field_license_values',
      ),
      'translatable' => '1',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'gallery_collections',
      'default_value' => array(
        0 => array(
          'value' => 'nothing',
        ),
      ),
      'deleted' => '0',
      'description' => 'Choose a default <a href="http://creativecommons.org">Creative Commons</a> license for all Gallery media. Later you can change the license for each piece of media.',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 3,
        ),
      ),
      'entity_type' => 'taxonomy_term',
      'field_name' => 'field_license',
      'label' => 'Default license settings',
      'required' => TRUE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'weight' => 14,
      'widget' => array(
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => 34,
      ),
    ),
  );

  // Exported field: 'taxonomy_term-gallery_collections-media_gallery_columns'
  $fields['taxonomy_term-gallery_collections-media_gallery_columns'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'media_gallery_columns',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(),
        'allowed_values_function' => '_media_gallery_get_columns_values',
      ),
      'translatable' => '0',
      'type' => 'list_float',
    ),
    'field_instance' => array(
      'bundle' => 'gallery_collections',
      'default_value' => array(
        0 => array(
          'value' => 4,
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'full' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'taxonomy_term',
      'field_name' => 'media_gallery_columns',
      'label' => 'Number of columns',
      'required' => TRUE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => 31,
      ),
    ),
  );

  // Exported field: 'taxonomy_term-gallery_collections-media_gallery_image_info_where'
  $fields['taxonomy_term-gallery_collections-media_gallery_image_info_where'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'media_gallery_image_info_where',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(),
        'allowed_values_function' => '_media_gallery_get_image_info_placement_values',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'gallery_collections',
      'default_value' => array(
        0 => array(
          'value' => 'hover',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 2,
        ),
        'full' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 2,
        ),
      ),
      'entity_type' => 'taxonomy_term',
      'field_name' => 'media_gallery_image_info_where',
      'label' => 'Gallery information',
      'required' => TRUE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => 33,
      ),
    ),
  );

  // Exported field: 'taxonomy_term-gallery_collections-media_gallery_rows'
  $fields['taxonomy_term-gallery_collections-media_gallery_rows'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'media_gallery_rows',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'number',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'gallery_collections',
      'default_value' => array(
        0 => array(
          'value' => 3,
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 1,
        ),
        'full' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 1,
        ),
      ),
      'entity_type' => 'taxonomy_term',
      'field_name' => 'media_gallery_rows',
      'label' => 'Number of rows',
      'required' => TRUE,
      'settings' => array(
        'max' => '',
        'min' => '1',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => 32,
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Allow downloading of the original image');
  t('Application');
  t('Choose a default <a href="http://creativecommons.org">Creative Commons</a> license for all Gallery media. Later you can change the license for each piece of media.');
  t('Comment');
  t('Create a block of most recently added media');
  t('Default license settings');
  t('Description');
  t('Display a "download original image" link');
  t('Gallery collection');
  t('Gallery format');
  t('Gallery information');
  t('Gallery media');
  t('Group content visibility');
  t('Groups audience');
  t('Lightbox title and description');
  t('Location');
  t('Media information');
  t('Number of columns');
  t('Number of rows');
  t('Show title and description');
  t('Tags');

  return $fields;
}
