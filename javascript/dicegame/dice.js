var random1=Math.ceil(Math.random()*6);

var randomdice="img"+random1+".png";

var image="./"+randomdice;

var image1=document.querySelectorAll("img")[0];

image1.setAttribute("src",image);

var random2=Math.ceil(Math.random()*6);

var randomdice="img"+random2+".png";

var image="./"+randomdice;
var image2=document.querySelectorAll("img")[1];

image2.setAttribute("src",image);

if(random1<random2){
    document.querySelector("h1").innerHTML="player1 win"
    document.querySelector("h1").style="color:red"
}
else if(random1>random2){
    document.querySelector("h1").innerHTML="player2 win"
    document.querySelector("h1").style="color:red"
}
else{
    document.querySelector("h1").innerHTML="match draw" 
    document.querySelector("h1").style="color:red";
}