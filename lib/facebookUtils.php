<?php
/**
 * Facebook Utils class - various functions to make your life easier
 *
 * @package DailyPerfect
 * @author Indrek Ulst
 */
class FacebookUtils {

	/**
	 * Is the facebook session valid
	 *
	 * @param Facebook object $facebook
	 * @return boolean
	 */
	function isFBSessionValid(&$facebook) {
		if($facebook->get_loggedin_user()) {
			$query = 'SELECT uid FROM user WHERE uid =' . $facebook->get_loggedin_user() . ' ';
			try {
				$fql_result = $facebook->api_client->fql_query($query);
			} catch (Exception $e) {
				// PROBABLY AN EXPIRED SESSION
				return false;
			}
			return true;
		} else {
			return false;
		}
	}
	
}
?>