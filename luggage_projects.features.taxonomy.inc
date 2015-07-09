<?php
/**
 * @file
 * luggage_projects.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function luggage_projects_taxonomy_default_vocabularies() {
  return array(
    'project_type' => array(
      'name' => 'Project Type',
      'machine_name' => 'project_type',
      'description' => 'A vocabulary that is used for sorting projects (project completion status, for example)',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
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
