(function ($) {
  $(document).ready(function(){
    $(".slides .views-field-field-featured-image a").colorbox({
      rel:'gal'
    });

    // Count view visibility toggle.
    $('.views-info-toggle').on('mouseenter', function(){
      $(this).next().addClass('act');
    })
    $('.views-info-toggle').on('mouseleave', function(){
      $(this).next().removeClass('act');
    })

    // details view visibility toggle
    $('.detailed-info-toggle').on('mouseenter', function(){
      $(this).next().addClass('act');
    })
    $('.detailed-info-toggle').on('mouseleave', function(){
      $(this).next().removeClass('act');
    })

    $('.form-submit').on('click', function(){
      alert('button with\n #'+$(this).attr('id')+'\n is clicked');
    })
  })
})(jQuery);

