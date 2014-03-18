<?php
/**
 * @file
 * stanford_exhibition_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function stanford_exhibition_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'alter dates duration field'.
  $permissions['alter dates duration field'] = array(
    'name' => 'alter dates duration field',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'stanford_exhibition',
  );

  // Exported permission: 'create stanford_exhibition content'.
  $permissions['create stanford_exhibition content'] = array(
    'name' => 'create stanford_exhibition content',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create stanford_exhibition_importer content'.
  $permissions['create stanford_exhibition_importer content'] = array(
    'name' => 'create stanford_exhibition_importer content',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any stanford_exhibition content'.
  $permissions['delete any stanford_exhibition content'] = array(
    'name' => 'delete any stanford_exhibition content',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any stanford_exhibition_importer content'.
  $permissions['delete any stanford_exhibition_importer content'] = array(
    'name' => 'delete any stanford_exhibition_importer content',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own stanford_exhibition content'.
  $permissions['delete own stanford_exhibition content'] = array(
    'name' => 'delete own stanford_exhibition content',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own stanford_exhibition_importer content'.
  $permissions['delete own stanford_exhibition_importer content'] = array(
    'name' => 'delete own stanford_exhibition_importer content',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any stanford_exhibition content'.
  $permissions['edit any stanford_exhibition content'] = array(
    'name' => 'edit any stanford_exhibition content',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any stanford_exhibition_importer content'.
  $permissions['edit any stanford_exhibition_importer content'] = array(
    'name' => 'edit any stanford_exhibition_importer content',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own stanford_exhibition content'.
  $permissions['edit own stanford_exhibition content'] = array(
    'name' => 'edit own stanford_exhibition content',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own stanford_exhibition_importer content'.
  $permissions['edit own stanford_exhibition_importer content'] = array(
    'name' => 'edit own stanford_exhibition_importer content',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  return $permissions;
}
