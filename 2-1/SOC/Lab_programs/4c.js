function go(){
    let num=Math.ceil(Math.random()*10);
    console.log(num);
    let input=document.getElementById("number").value;
    let num1=parseInt(input);
    if(num==num1){
        document.getElementById("output").textContent="Congratulations";
    }else{
        document.getElementById("output").textContent="try again";

    }
}