(function($) {

  Drupal.behaviors.stanford_ehibition_events_takeover = {
    attach: function (context, settings) {

      // On events upcoming hijack calendar nav so that no ajax is called.
      if (
        typeof Drupal.settings.seet !== "undefined" &&
        Drupal.settings.seet.arg0 == 'events' &&
        (Drupal.settings.seet.arg1 == 'upcoming-events' || Drupal.settings.seet.arg1 == 'month'))
      {
          // Ensure we find something or die.
          var found = $('.view-stanford-events-calendar, .view-stanford-events-exhibitions-calendar');
          if (found.length >= 1) {
            seet_kill_calendar_ajax(found);
          }
      }

      // On the month / day pages hijack the calendar so something....


    } // attach
  }; // behaviour

  /**
   * Removes the ajax calls from the calendar navigation so that full page loads
   * happen.
   * @param  {[type]} found [description]
   * @return {[type]}       [description]
   */
  function seet_kill_calendar_ajax(found) {
    // This captures all calendars...
    found.find('.date-nav a').on('click', function(e) {
      e.stopImmediatePropagation();
      return;
    });
  }


})(jQuery);
