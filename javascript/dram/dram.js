var noDrums=document.querySelectorAll(".btn").length;

for(var i=0;i<noDrums;i++){

document.querySelectorAll("button")[i].addEventListener("click",function(){
    alert("i got clicked");
})
}