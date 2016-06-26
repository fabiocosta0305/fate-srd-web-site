/**
 * @file
 * Scroll to script.
 *
 * @author Randy Oest
 */

/* globals jQuery, Drupal */
'use strict';

(function ($, Drupal) {
  Drupal.behaviors.fateScrollTo = {
    attach: function (context) {
      var $root = $('html, body', context);
      var offset = 75;

      $('a[href*=#]:not([href=#])').click(function() {
        var href = $.attr(this, 'href');

        $root.animate({
          scrollTop: $(href).offset().top - offset
        }, function () {
          window.location.hash = href;
        });

        return false;
      });

      var t = window.location.hash;
      if (t) {
        $root.animate({
          scrollTop: $(t).offset().top - offset
        });
      }
    }
  };
})(jQuery, Drupal);
