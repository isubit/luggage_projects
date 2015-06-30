<?php
/**
 * @file
 * luggage_projects.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function luggage_projects_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_projects:projects
  $menu_links['main-menu_projects:projects'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'projects',
    'router_path' => 'projects',
    'link_title' => 'Projects',
    'options' => array(
      'identifier' => 'main-menu_projects:projects',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -33,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Projects');

  return $menu_links;
}
