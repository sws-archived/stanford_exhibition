(function($) {

  Drupal.behaviors.stanford_ehibition_events_takeover = {
    attach: function (context, settings) {

      // Ensure we find something or die.
      var found = $('.view-stanford-events-calendar');
      if (found.length <= 0) {
        return;
      }

      // This captures all calendars...
      $('.view-stanford-events-calendar .date-nav a').on('click', function(e) {
        e.stopImmediatePropagation();
      });

    }
  };

})(jQuery);
