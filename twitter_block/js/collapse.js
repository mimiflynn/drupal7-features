(function ($) {
  $(document).ready(function() {
    if ($.cookie('twitter') === 'closed') {
      $('.block-twitter-pull .tweets-pulled-listing h2').append('<span>+on</span>').addClass('closed').next().hide();
    } else {
      $('.block-twitter-pull .tweets-pulled-listing h2').append('<span>offX</span>');
    }
    $('.block-twitter-pull .tweets-pulled-listing h2').click(function(){
      if ($(this).hasClass('closed')) {
        $(this).next().show();
        $.cookie('twitter', 'open', { path: '/' });
        $(this).removeClass('closed').addClass('open').children('span').text('offX');
      } else {
        $(this).next().hide();
        $.cookie('twitter', 'closed', { path: '/' });
        $(this).removeClass('open').addClass('closed').children('span').text('+on');
      }
    });
  });
})(jQuery);
