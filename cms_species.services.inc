<?php
/**
 * @file
 * cms_species.services.inc
 */

/**
 * Implements hook_default_services_endpoint().
 */
function cms_species_default_services_endpoint() {
  $export = array();

  $endpoint = new stdClass();
  $endpoint->disabled = FALSE; /* Edit this to true to make a default endpoint disabled initially */
  $endpoint->api_version = 3;
  $endpoint->name = 'ws';
  $endpoint->server = 'rest_server';
  $endpoint->path = 'ws';
  $endpoint->authentication = array(
    'services_basic_auth' => 'services_basic_auth',
  );
  $endpoint->server_settings = array(
    'formatters' => array(
      'json' => TRUE,
      'xml' => TRUE,
      'bencode' => FALSE,
      'jsonp' => FALSE,
      'php' => FALSE,
    ),
    'parsers' => array(
      'multipart/form-data' => TRUE,
      'text/xml' => TRUE,
      'application/json' => FALSE,
      'application/vnd.php.serialized' => FALSE,
      'application/x-www-form-urlencoded' => FALSE,
      'application/xml' => FALSE,
    ),
  );
  $endpoint->resources = array(
    'node' => array(
      'operations' => array(
        'retrieve' => array(
          'enabled' => '1',
        ),
        'index' => array(
          'enabled' => '1',
        ),
      ),
    ),
    'species' => array(
      'operations' => array(
        'index' => array(
          'enabled' => '1',
        ),
      ),
    ),
    'species_node' => array(
      'operations' => array(
        'index' => array(
          'enabled' => '1',
        ),
      ),
    ),
  );
  $endpoint->debug = 1;
  $export['ws'] = $endpoint;

  return $export;
}
