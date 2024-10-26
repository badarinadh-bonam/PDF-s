// Synchronosly-readFileSync
// asynchronulsy
// const fs=require("fs");
// var data=fs.readFileSync("abc.txt");
// console.log(data.toString());



// var fs=require("fs");
// var data=fs.readFile("abc.txt",(err,data)=>{
//     if(err){
//         console.log(err);
//     }else{
//         console.log(data.toString());
//     }
// })

// Writing
// 1.Synchronously
// 2.asynchronulsy  

// const fs=require('fs');
// fs.writeFileSync("abcd.txt","Hello there bhavana");

const fs=require("fs");
// fs.writeFile("abcd.txt","Hello This side bonam Can I come that side?",(err)=>{
//     if(err){
//         console.log(err);
//     }
// })

// fs.appendFileSync("abcd.txt","Yes Bonam you are always welcome");
fs.appendFile("abcd.txt","Cutieeee",(err)=>{
    if(err){
        console.log(err);
    }
})






