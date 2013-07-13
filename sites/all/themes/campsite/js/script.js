/**
 * @file
 * A JavaScript file for the theme.
 *
 */

(function ($, Drupal, window, document, undefined) {

  Drupal.behaviors.mobileMenu = {
    attach: function (context, settings) {
    
      // toggle open/closed states for tray nav menu
      $('#mobile-nav-button').bind('click', function() {
          $(this).add('#page').toggleClass('open');
      });
      
      // toggle open-closed states for user menu
      $('#usermenu').bind('click', function()  {
          $(this).add('#page').toggleClass('usermenu-visible');     
      });

      /**
       * scrolls the window up, so as to 'hide' the addressbar in mobile safari
       *
       * TODO: add support for android browsers. or deprecate this entirely, not sure yet. 
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

})(jQuery, Drupal, this, this.document);
