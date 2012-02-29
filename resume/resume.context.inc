<?php
/**
 * @file
 * resume.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function resume_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'resume';
  $context->description = 'Collection of job positions and education';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'resume' => 'resume',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-schools-block_1' => array(
          'module' => 'views',
          'delta' => 'schools-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-resume-block_1' => array(
          'module' => 'views',
          'delta' => 'resume-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Collection of job positions and education');
  $export['resume'] = $context;

  return $export;
}
