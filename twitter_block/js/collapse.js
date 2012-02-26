(function ($) {
  $(document).ready(function() {
    $('.block-twitter-pull .tweets-pulled-listing h2').append('<span>off X</span>').click(function(){
      $(this).next().toggle();
    });
  });
})(jQuery);
