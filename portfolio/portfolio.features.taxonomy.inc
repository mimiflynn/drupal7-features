<?php
/**
 * @file
 * portfolio.features.taxonomy.inc
 */

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function portfolio_taxonomy_default_vocabularies() {
  return array(
    'site_structure' => array(
      'name' => 'Site Structure',
      'machine_name' => 'site_structure',
      'description' => 'The information architecture of the site',
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
