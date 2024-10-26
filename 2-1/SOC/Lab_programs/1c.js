let counter=document.getElementById("CounterValue").textContent;
function Increment(){
    let previous=counter;
    let update=parseInt(previous)+1;
    counter=update;
    document.getElementById("CounterValue").textContent=counter;
    document.getElementById("CounterValue").style.color="green";
}function Decrement(){
    let previous=counter;
    let update=parseInt(previous)-1;
    counter=update;
    document.getElementById("CounterValue").textContent=counter;
    document.getElementById("CounterValue").style.color="blue";
}function Reset(){
    document.getElementById("CounterValue").textContent=0;
}