/**
 * @file
 * Nav accordian.
 *
 * @author Randy Oest
 */

/* globals jQuery, Drupal */

(function ($, Drupal) {
  'use strict';

  /**
   * Reset heights for elements in a row against the current window width.
   *
   * @param {object} options
   *   Contains configuration for resetHeights.
   * @param {string} options.rowClass
   *   The class for row elements.
   * @param {string} options.blockClass
   *   The class for block elements.
   * @param {int} options.breakpoint
   *   The integer representing the width at which we should start resetting
   *   heights. This should usually correspond to a real breakpoint in sass.
   *
   * @returns {null} Nothing.
   */
  // var resetHeights = function (options) {
  //   var contentRows = $(options.rowSelector),
  //       contentBlocks   = $(options.blockSelector),
  //       flexbox     = $('html').hasClass('flexbox'),
  //       width       = $(window).width();
  //
  //   // Reset heights.
  //   contentBlocks.css('height', '');
  //
  //   // Set heights if the browser does not support flexbox and the window width
  //   // is greater than the specified breakpoint.
  //   if (!flexbox && width > options.breakpoint) {
  //     contentRows.each(function () {
  //       var holdingPen  = [],
  //           tallest     = 0;
  //
  //       // Get the height of each .content-block.
  //       $(this).find(options.blockSelector).each(function () {
  //         var contentBlock  = $(this),
  //             blockHeight   = contentBlock.height();
  //
  //         holdingPen.push(contentBlock);
  //
  //         if (blockHeight > tallest) {
  //           tallest = blockHeight;
  //         }
  //       });
  //
  //       // Make each .content-block in the row the same height.
  //       $.each(holdingPen, function () {
  //         $(this).height(tallest);
  //       });
  //     });
  //   }
  // };
  //
  // // Create a behavior for handling content blocks.
  Drupal.behaviors.medstatContentBlocks = {
    attach: function () {
      // var resizeTimer;
      console.log('nav.js FIRED2');

      // Set the resize handler only once per page.
      // $('body').once('medstatContentBlocks', function () {
      //   $(window).on('load resize', function () {
      //     clearTimeout(resizeTimer);
      //     resizeTimer = setTimeout(function () {
      //       // Reset heights for content blocks.
      //       resetHeights({
      //         breakpoint: 768,
      //         rowSelector: '.content-row',
      //         blockSelector: '.content-block'
      //       });
      //
      //       // Reset heights for footer sections.
      //       resetHeights({
      //         breakpoint: 768,
      //         rowSelector: '.footer-nav-section-wrapper',
      //         blockSelector: '.footer-nav-section'
      //       });
      //
      //       // Reset heights for article page recommend reading section.
      //       resetHeights({
      //         breakpoint: 768,
      //         rowSelector: '.recommended-articles-columns',
      //         blockSelector: '.recommended-articles-column'
      //       });
      //     }, 250);
      //   });
      // });
    }
  };

})(jQuery, Drupal);
