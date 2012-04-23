<?php
/**
 * @file
 * cmtls_media.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function cmtls_media_taxonomy_default_vocabularies() {
  return array(
    'gallery_collections' => array(
      'name' => 'Gallery collections',
      'machine_name' => 'gallery_collections',
      'description' => 'Groups of rich media galleries',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
