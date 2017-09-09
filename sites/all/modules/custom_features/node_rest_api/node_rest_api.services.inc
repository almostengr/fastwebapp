<?php
/**
 * @file
 * node_rest_api.services.inc
 */

/**
 * Implements hook_default_services_endpoint().
 */
function node_rest_api_default_services_endpoint() {
  $export = array();

  $endpoint = new stdClass();
  $endpoint->disabled = FALSE; /* Edit this to true to make a default endpoint disabled initially */
  $endpoint->api_version = 3;
  $endpoint->name = 'api3';
  $endpoint->server = 'rest_server';
  $endpoint->path = 'api';
  $endpoint->authentication = array();
  $endpoint->server_settings = array();
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
  );
  $endpoint->debug = 0;
  $export['api3'] = $endpoint;

  return $export;
}
