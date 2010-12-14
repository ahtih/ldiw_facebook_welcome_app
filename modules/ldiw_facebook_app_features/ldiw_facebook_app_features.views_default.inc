<?php

/**
 * Implementation of hook_views_default_views().
 */
function ldiw_facebook_app_features_views_default_views() {
  $views = array();

  // Exported view: ldiw_facebook_log
  $view = new view;
  $view->name = 'ldiw_facebook_log';
  $view->description = 'Event log of LDIW Facebook application';
  $view->tag = '';
  $view->view_php = '';
  $view->base_table = 'ldiw_facebook_welcome_app_log';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'context_hash' => array(
      'label' => 'Context hash',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'exclude' => 0,
      'id' => 'context_hash',
      'table' => 'ldiw_facebook_welcome_app_log',
      'field' => 'context_hash',
      'relationship' => 'none',
    ),
    'country_code' => array(
      'label' => 'Country code',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'exclude' => 0,
      'id' => 'country_code',
      'table' => 'ldiw_facebook_welcome_app_log',
      'field' => 'country_code',
      'relationship' => 'none',
    ),
    'event_type' => array(
      'label' => 'Event type',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'exclude' => 0,
      'id' => 'event_type',
      'table' => 'ldiw_facebook_welcome_app_log',
      'field' => 'event_type',
      'relationship' => 'none',
    ),
    'facebook_uid' => array(
      'label' => 'Facebook UID',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'exclude' => 0,
      'id' => 'facebook_uid',
      'table' => 'ldiw_facebook_welcome_app_log',
      'field' => 'facebook_uid',
      'relationship' => 'none',
    ),
    'locale' => array(
      'label' => 'Locale',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'exclude' => 0,
      'id' => 'locale',
      'table' => 'ldiw_facebook_welcome_app_log',
      'field' => 'locale',
      'relationship' => 'none',
    ),
    'profile_city' => array(
      'label' => 'Profile city',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'exclude' => 0,
      'id' => 'profile_city',
      'table' => 'ldiw_facebook_welcome_app_log',
      'field' => 'profile_city',
      'relationship' => 'none',
    ),
    'profile_country' => array(
      'label' => 'Profile country',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'exclude' => 0,
      'id' => 'profile_country',
      'table' => 'ldiw_facebook_welcome_app_log',
      'field' => 'profile_country',
      'relationship' => 'none',
    ),
    'profile_zipcode' => array(
      'label' => 'Profile zipcode',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'exclude' => 0,
      'id' => 'profile_zipcode',
      'table' => 'ldiw_facebook_welcome_app_log',
      'field' => 'profile_zipcode',
      'relationship' => 'none',
    ),
    'time' => array(
      'label' => 'Time',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'exclude' => 0,
      'id' => 'time',
      'table' => 'ldiw_facebook_welcome_app_log',
      'field' => 'time',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('sorts', array(
    'time' => array(
      'order' => 'DESC',
      'id' => 'time',
      'table' => 'ldiw_facebook_welcome_app_log',
      'field' => 'time',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'perm',
    'perm' => 'access administration pages',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'Facebook events log');
  $handler->override_option('css_class', 'smalltext');
  $handler->override_option('items_per_page', 100);
  $handler->override_option('style_plugin', 'table');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'override' => 1,
    'sticky' => 0,
    'order' => 'asc',
    'columns' => array(
      'context_hash' => 'context_hash',
      'country_code' => 'country_code',
      'event_type' => 'event_type',
      'facebook_uid' => 'facebook_uid',
      'locale' => 'locale',
      'profile_city' => 'profile_city',
      'profile_country' => 'profile_country',
      'profile_zipcode' => 'profile_zipcode',
      'time' => 'time',
    ),
    'info' => array(
      'context_hash' => array(
        'separator' => '',
      ),
      'country_code' => array(
        'separator' => '',
      ),
      'event_type' => array(
        'separator' => '',
      ),
      'facebook_uid' => array(
        'separator' => '',
      ),
      'locale' => array(
        'separator' => '',
      ),
      'profile_city' => array(
        'separator' => '',
      ),
      'profile_country' => array(
        'separator' => '',
      ),
      'profile_zipcode' => array(
        'separator' => '',
      ),
      'time' => array(
        'separator' => '',
      ),
    ),
    'default' => '-1',
  ));
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->override_option('path', 'ldiw_facebook_log');
  $handler->override_option('menu', array(
    'type' => 'normal',
    'title' => 'Facebook events log',
    'description' => '',
    'weight' => '0',
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));

  $views[$view->name] = $view;

  return $views;
}
