<?php

/**
 * Implements hook_preprocess_page().
 */
function sicurender_preprocess_page(&$variables) {
  // You can use preprocess hooks to modify the variables before they are passed
  // to the theme function or template file.
   drupal_add_css('http://fonts.googleapis.com/css?family=Marcellus|Titillium+Web:400,700', array('group' => CSS_THEME));
   drupal_add_js('//ajax.googleapis.com/ajax/libs/jquery/1.11.1/jquery.min.js', 'external');
}
