/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - http://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {

  Drupal.behaviors.mobileMenu = {
    attach: function (context, settings) {
         
      $('#mobile-nav-button').bind('click', function() {
          $(this).add('#page').toggleClass('open');
      });

      /**
       * scrolls the window up, so as to 'hide' the addressbar in mobile safari
       *
       * TODO: add support for android browsers
       */

      if( window.addEventListener ){
        window.addEventListener("load",function() {
          setTimeout(function(){
            window.scrollTo(0, 0);
          }, 0);
        });
      }
    } 
  };



// Place your code here.


})(jQuery, Drupal, this, this.document);
