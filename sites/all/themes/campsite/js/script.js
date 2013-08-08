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
      $('.user-account-link').add('.user-menu-toggler').bind('click', function()  {
          $('#usermenu').add('#page').toggleClass('usermenu-visible');
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

  Drupal.behaviors.campsite = {
    attach: function (context, settings) {
     $('.bootstrap-table table').addClass('table-bordered table table-striped');


     //Thursday! Can't bind to mouseover or click because the handleer is attached to
     // some arbitrary object (the document object) and not to the flag link. So here is my hack.
     var $thursday_allflags = $('.thursday-events .flag-wrapper a');
     var $thursday_unflagged = $('.thursday-events .flag-wrapper a:not(.unflag-action)');
     if($thursday_allflags.hasClass('unflag-action')) {
        $thursday_unflagged.hide();
        $thursday_unflagged.removeAttr('href');
     };

     //Friday! Can't bind to mouseover or click because the handleer is attached to
     // some arbitrary object (the document object) and not to the flag link. So here is my hack.
     //on Friday, let everyone go to the party (flag-registration-52)
    var $friday_allflags = $('.friday-events .flag-wrapper:not(.flag-registration-52) a');
     var $friday_unflagged = $('.friday-events .flag-wrapper:not(.flag-registration-52) a:not(.unflag-action)');
     if($friday_allflags.hasClass('unflag-action')) {
        $friday_unflagged.hide();
        $friday_unflagged.removeAttr('href');
     };


    }
  }

/*
  Drupal.behaviors.HTMLplaceholders = {
    
    if (!Modernizr.input.placeholder) {

    $('[placeholder]').focus(function() {
      var input = $(this);
      if (input.val() == input.attr('placeholder')) {
        input.val('');
        input.removeClass('placeholder');
      }
    }).blur(function() {
      var input = $(this);
      if (input.val() == '' || input.val() == input.attr('placeholder')) {
        input.addClass('placeholder');
        input.val(input.attr('placeholder'));
      }
    }).blur();
    $('[placeholder]').parents('form').submit(function() {
      $(this).find('[placeholder]').each(function() {
        var input = $(this);
        if (input.val() == input.attr('placeholder')) {
          input.val('');
        }
      })
    });
    
  }
*/


})(jQuery, Drupal, this, this.document);
