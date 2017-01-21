/**
 * @file
 * Pager.
 *
 * @author Randy Oest
 */

/* globals jQuery, Drupal */
'use strict';

(function ($, Drupal) {
  Drupal.behaviors.fatePager = {
    attach: function (context) {
      var next = $('.menu-pager .menu-pager-next a', context);
      $(next).html($(next).text().replace(' »','&nbsp;»'));
    }
  };
})(jQuery, Drupal);
