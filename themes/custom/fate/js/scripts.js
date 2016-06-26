/**
 * @file
 * Nav accordian.
 *
 * @author Randy Oest
 */

/* globals jQuery, Drupal */
'use strict';

(function ($, Drupal) {
  Drupal.behaviors.fateNav = {
    attach: function (context) {
      var menus = $('.nav-section-content', context),
          headers = $('.nav-section-title', context);

      /**
       * Process menus so they are accordions.
       * @param  {jQuery} menus [The menus we process.]
       * @return null.
       */
      $(menus).each(function (){
        var $this = $(this);
        $this.children('.active-trail').addClass('active-menu');

        if ($this.find('.active-trail').length > 0) {
          $this.addClass('menu-open').parents('.nav-section').addClass('menu-open');
        } else {
          $this.addClass('menu-closed').parents('.nav-section').addClass('menu-closed');
        }
      });


      /**
       * Headers will toggle menus.
       * @param  {jQuery} headers [The main headers for each menu.]
       * @return null
       */
      $(headers).on('click',function () {
        $(this)
          .siblings('.nav-section-content')
          .toggleClass('menu-open menu-closed')
          .parents('.nav-section')
          .toggleClass('menu-open menu-closed');
      });

      /**
       * Add menu controls.
       * @param  {jQuery} 'li.expanded' [All li > ul]
       * @return {null}
       */
      $('li.expanded').each(function (){
        if ($(this).hasClass('active-trail')) {
          $(this).children('a').after('<span class="menu-control menu-open"></span>');
        }
        else {
          $(this).children('a').after('<span class="menu-control menu-closed"></span>');
        }
        $(this).addClass('has-menu-control');
      });

      $('.menu-control').on('click', function (){
        $(this).toggleClass('menu-closed menu-open');
      });
    }
  };
})(jQuery, Drupal);
