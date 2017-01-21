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
      var $root = $('html, body');
      var offset = 75;

      $('a[href*=#]:not([href=#])').click(function() {
        var href = $.attr(this, 'href');

        $root.animate({
          scrollTop: $(href).offset().top - offset
        });

        if(history.pushState) {
          history.pushState(null, null, href);
        }
        else {
          location.hash = href;
        }

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
