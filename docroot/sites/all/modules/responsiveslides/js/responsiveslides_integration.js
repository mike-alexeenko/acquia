/**
 * @file
 * Integrate responsiveslides.js with responsiveslides.module.
 */
(function ($) {
  Drupal.behaviors.responsiveslides = {
    attach: function (context, settings) {
      var $settings = settings.responsiveslides || {};
      var $options = {};
      var $defaults = {
          auto: true,
          speed: 500,
          timeout: 4000,
          pager: false,
          nav: false,
          random: false,
          pause: false,
          pauseControls: true,
          prevText: "Previous",
          nextText: "Next",
          maxwidth: "",
          navContainer: "",
          manualControls: "",
          namespace: "rslides",
        };
      // Iterate through each to allow multiple instances.
      $.each($settings, function($namespace, $iteration) {
        $('.' + $namespace).once('responsiveslides', function() {
          if ($iteration.style == 'nav_overlay') {
            $(this).closest('.view-content').css('position', 'relative');
          }
          $.each($iteration, function($key, $value) {
            if ($value == 0) {
              $iteration[$key] = false;
            }
            if ($value == 1) {
              $iteration[$key] = true;
            }
          });
          $options[$namespace] = $.extend({}, $defaults, $iteration);
          if (!$options[$namespace].navContainer.length > 0) {
            $options[$namespace].navContainer = '.rslide-control-' + $namespace;
          }
          $options[$namespace].before = function() { eval($iteration.before); } || function() {};
          $options[$namespace].after = function() { eval($iteration.after); } || function() {};
          $('.' + $namespace).responsiveSlides($options[$namespace]);
        });
      });

    }
  };
}(jQuery));
