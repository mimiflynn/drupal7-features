(function ($) {
  $(document).ready(function() {
    $('.block-twitter-pull .tweets-pulled-listing h2').click(function(){
      $(this).next().toggle();
    });
  });
})(jQuery);
