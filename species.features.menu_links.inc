<?php
/**
 * @file
 * species.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function species_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_classes-vocabulary:admin/structure/taxonomy/species_class
  $menu_links['main-menu_classes-vocabulary:admin/structure/taxonomy/species_class'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/structure/taxonomy/species_class',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Classes vocabulary',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_classes-vocabulary:admin/structure/taxonomy/species_class',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_identifier' => 'main-menu_species:<front>',
  );
  // Exported menu link: main-menu_families-vocabulary:admin/structure/taxonomy/species_family
  $menu_links['main-menu_families-vocabulary:admin/structure/taxonomy/species_family'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/structure/taxonomy/species_family',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Families vocabulary',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_families-vocabulary:admin/structure/taxonomy/species_family',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
    'parent_identifier' => 'main-menu_species:<front>',
  );
  // Exported menu link: main-menu_genus-vocabulary:admin/structure/taxonomy/species_genus
  $menu_links['main-menu_genus-vocabulary:admin/structure/taxonomy/species_genus'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/structure/taxonomy/species_genus',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Genus vocabulary',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_genus-vocabulary:admin/structure/taxonomy/species_genus',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_identifier' => 'main-menu_species:<front>',
  );
  // Exported menu link: main-menu_orders-vocabulary:admin/structure/taxonomy/species_order
  $menu_links['main-menu_orders-vocabulary:admin/structure/taxonomy/species_order'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/structure/taxonomy/species_order',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Orders vocabulary',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_orders-vocabulary:admin/structure/taxonomy/species_order',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
    'parent_identifier' => 'main-menu_species:<front>',
  );
  // Exported menu link: main-menu_species-authors-vocabulary:admin/structure/taxonomy/species_author
  $menu_links['main-menu_species-authors-vocabulary:admin/structure/taxonomy/species_author'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/structure/taxonomy/species_author',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Species Authors vocabulary',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_species-authors-vocabulary:admin/structure/taxonomy/species_author',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
    'parent_identifier' => 'main-menu_species:<front>',
  );
  // Exported menu link: main-menu_species-vocabulary:admin/structure/taxonomy/species_species
  $menu_links['main-menu_species-vocabulary:admin/structure/taxonomy/species_species'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/structure/taxonomy/species_species',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Species vocabulary',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_species-vocabulary:admin/structure/taxonomy/species_species',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_identifier' => 'main-menu_species:<front>',
  );
  // Exported menu link: main-menu_species:<front>
  $menu_links['main-menu_species:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Species',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_species:<front>',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-50',
  );
  // Exported menu link: main-menu_subspecies-vocabulary:admin/structure/taxonomy/species_subspecies
  $menu_links['main-menu_subspecies-vocabulary:admin/structure/taxonomy/species_subspecies'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/structure/taxonomy/species_subspecies',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Subspecies vocabulary',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_subspecies-vocabulary:admin/structure/taxonomy/species_subspecies',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_identifier' => 'main-menu_species:<front>',
  );
  // Exported menu link: main-menu_threats-vocabulary:admin/structure/taxonomy/threats
  $menu_links['main-menu_threats-vocabulary:admin/structure/taxonomy/threats'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/structure/taxonomy/threats',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Threats vocabulary',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_threats-vocabulary:admin/structure/taxonomy/threats',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-42',
    'parent_identifier' => 'main-menu_species:<front>',
  );
  // Exported menu link: main-menu_view-species:species/listing
  $menu_links['main-menu_view-species:species/listing'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'species/listing',
    'router_path' => 'species/listing',
    'link_title' => 'View species',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_view-species:species/listing',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_identifier' => 'main-menu_species:<front>',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Classes vocabulary');
  t('Families vocabulary');
  t('Genus vocabulary');
  t('Orders vocabulary');
  t('Species');
  t('Species Authors vocabulary');
  t('Species vocabulary');
  t('Subspecies vocabulary');
  t('Threats vocabulary');
  t('View species');


  return $menu_links;
}
