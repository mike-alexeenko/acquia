function mobile_redirect() {
  if( navigator.userAgent.match(/Android/i)
      || navigator.userAgent.match(/webOS/i)
      || navigator.userAgent.match(/iPhone/i)
      || navigator.userAgent.match(/iPad/i)
      || navigator.userAgent.match(/iPod/i)
      || navigator.userAgent.match(/BlackBerry/i)
      || navigator.userAgent.match(/Windows Phone/i)
  ){
    //console.log('mobile');
    window.location = "http://adobe.com/";
  }
  else {
    console.log('not mobile');
  }
}
mobile_redirect();
