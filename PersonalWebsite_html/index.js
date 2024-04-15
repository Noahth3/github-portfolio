window.addEventListener('scroll', function() {
  var scrollButton = document.querySelector(".back-to-top");

  if (window.scrollY < 500) {
    scrollButton.classList.remove("show");
  } else {
    scrollButton.classList.add("show");
  }
});

window.addEventListener('scroll', revealContainers2);

function revealContainers2() {
    var containerData = [
        { selector: '.container-1', scrollPosition: 370 },
        { selector: '.container-2', scrollPosition: 830 },
        { selector: '.container-3', scrollPosition: 1300 },
        { selector: '.container-4', scrollPosition: 1900 }
      ];
  
    containerData.forEach(function(data) {
    var container = document.querySelector(data.selector);
    if (window.scrollY > data.scrollPosition) {
      container.classList.add('show');
    } else {
      container.classList.remove('show');
    }
  });
}