<?php
// $Id

/**
 * Implementation of hook_views_data().
 */
function ldiw_facebook_welcome_app_views_data()
{
	$data=array();
	$data['ldiw_facebook_welcome_app_log']=array(

	'table' => array('group' => t('LDIW Facebook app'),
			'base' => array('field' => 'id',
							'title' => t('LDIW Facebook log event'),
							'help' => t('Events in LDIW Facebook app log.')),
			),

	'time' => array('title' => t('Time'),
		'help' => t('Time when the event happened'),
		'sort' => array('handler' => 'views_handler_sort'),
		'field' => array('dummy' => 'dummy')),

	'event_type' => array('title' => t('Event type'),
		'help' => t('Code describing the event'),
		'filter' => array('handler' => 'views_handler_filter_equality'),
		'field' => array('dummy' => 'dummy')),

	'context_hash' => array('title' => t('Context hash'),
		'help' => t('Hash of User-agent and other user-specific data'),
		'filter' => array('handler' => 'views_handler_filter_equality'),
		'field' => array('dummy' => 'dummy')),

	'country_code' => array('title' => t('Country code'),
		'help' => t("User country code, taken from 'fb_sig_country'"),
		'filter' => array('handler' => 'views_handler_filter_equality'),
		'field' => array('dummy' => 'dummy')),

	'locale' => array('title' => t('Locale'),
		'help' => t("User locale, taken from 'fb_sig_locale'"),
		'filter' => array('handler' => 'views_handler_filter_equality'),
		'field' => array('dummy' => 'dummy')),

	'facebook_uid' => array('title' => t('Facebook UID'),
		'help' => t('Facebook user ID'),
		'filter' => array('handler' => 'views_handler_filter_equality'),
		'field' => array('dummy' => 'dummy')),

	'profile_city' => array('title' => t('Profile city'),
		'help' => t('City in users Facebook profile'),
		'field' => array('dummy' => 'dummy')),

	'profile_country' => array('title' => t('Profile country'),
		'help' => t('Country in users Facebook profile'),
		'field' => array('dummy' => 'dummy')),

	'profile_zipcode' => array('title' => t('Profile zipcode'),
		'help' => t('Zipcode in users Facebook profile'),
		'field' => array('dummy' => 'dummy')),
	);

	return $data;
	}
