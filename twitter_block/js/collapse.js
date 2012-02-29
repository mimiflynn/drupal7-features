(function ($) {
  $(document).ready(function() {
    if ($.cookie('twitter') === 'closed') {
      $('.block-twitter-pull .tweets-pulled-listing h2').append('<span>+on</span>').removeClass('open').addClass('closed');
      $('.block-twitter-pull .tweets-pulled-listing h2').next().css({
        'margin-left': '-300px',
        'margin-right': '300px'
      });
      $('.block-twitter-pull .tweets-pulled-listing h2').css({
        'margin-left': '-285px',
        'margin-right': '285px'
      });
      $('.block-twitter-pull .tweets-pulled-listing h2').siblings('a').css({
        'margin-left': '-300px',
        'margin-right': '300px'
      });
    } else {
      $('.block-twitter-pull .tweets-pulled-listing h2').append('<span>offX</span>').removeClass('closed').addClass('open');
      $('.block-twitter-pull .tweets-pulled-listing h2').next().css({
        'margin-left': '0px',
        'margin-right': '0px'
      });
      $('.block-twitter-pull .tweets-pulled-listing h2').css({
        'margin-left': '-20px',
        'margin-right': '0px'
      });
      $('.block-twitter-pull .tweets-pulled-listing h2').siblings('a').css({
        'margin-left': '0px',
        'margin-right': '0px'
      });

    }
    $('.block-twitter-pull .tweets-pulled-listing h2').click(function(){
      if ($(this).hasClass('closed')) {
        $(this).next().animate({
          'margin-left': '0px',
          'margin-right': '0px'
        },600);
        $(this).animate({
          'margin-left': '-20px',
          'margin-right': '0px'
        });
        $(this).siblings('a').animate({
          'margin-left': '0px',
          'margin-right': '0px'
        },600)
        $.cookie('twitter', 'open', { path: '/' });
        $(this).removeClass('closed').addClass('open').children('span').text('offX');
      } else {
        $(this).next().animate({
          'margin-left': '-300px',
          'margin-right': '300px'
        });
        $(this).animate({
          'margin-left': '-285px',
          'margin-right': '285px'
        },600)
        $(this).siblings('a').animate({
          'margin-left': '-300px',
          'margin-right': '300px'
        },600)
        $.cookie('twitter', 'closed', { path: '/' });
        $(this).removeClass('open').addClass('closed').children('span').text('+on');
      }
    });
  });
})(jQuery);
