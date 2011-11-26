<?php
/**
 * @file
 * code_snippets.features.taxonomy.inc
 */

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function code_snippets_taxonomy_default_vocabularies() {
  return array(
    'code_types' => array(
      'name' => 'Code Types',
      'machine_name' => 'code_types',
      'description' => 'Computing Languages',
      'hierarchy' => '1',
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
