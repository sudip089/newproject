const body=document.querySelector("body"),
slidebar=document.querySelector(".slidebar"),
toggler=document.querySelector(".toggle"),
searchbtn=document.querySelector(".searchbox"),
mode=document.querySelector(".mode"),
modeSwitch=document.querySelector(".toggle-switch"),
modeText=document.querySelector(".mode-text");


modeSwitch.addEventListener("click",function(){
    body.classList.toggle("dark");
    if(body.classList.contains("dark")){
        modeText.innerHTML="Light mode"
    }
    else{
        modeText.innerHTML="Dark mode"
    }

});
toggler.addEventListener("click",function(){
    slidebar.classList.toggle("close");
});
