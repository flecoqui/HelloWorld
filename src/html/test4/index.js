
document.addEventListener("DOMContentLoaded", function(e) {
  var statusCtl = document.getElementById("statusId")
  if (statusCtl){
      statusCtl.innerHTML = "Running"
  }
});

document.addEventListener("keydown", function(event) {
  if (event.key === "Escape") {
    var statusCtl = document.getElementById("statusId")
    if (statusCtl){
        statusCtl.innerHTML = "Not running"
    };
  }
  var logCtl = document.getElementById("logId");
  if (logCtl){
    logCtl.innerHTML = `Key ${event.key} pressed!`
  };
});



