/**
 * @file
 * Add header anchor links.
 *
 * @author Randy Oest
 */

/* globals jQuery, Drupal */
'use strict';

(function ($, Drupal) {
  Drupal.behaviors.fateHeaderAnchorLinks = {
    attach: function (context) {
      var h2 = $('.node-article h2', context);
      var h3 = $('.node-article h3', context);
      var h4 = $('.node-article h4', context);
      var t = '';

      function add_anchor(v) {
        t = $(v).text();
        t = format_anchor(t);
        var insert = '<a href="#'+ t +'" class="anchor"></a>';
        $(v).append(insert);
        $(v).attr('id', t);
      }

      function format_anchor(term) {
        return term.replace(/ /g, '-').replace(/[?,:()“”"'\’*]/g, '').replace(/^-/, '').toLowerCase();
      }

      $.each(h2,function() {
        add_anchor(this);
      });
      $.each(h3,function() {
        add_anchor(this);
      });
      $.each(h4,function() {
        add_anchor(this);
      });
    }
  };
})(jQuery, Drupal);
