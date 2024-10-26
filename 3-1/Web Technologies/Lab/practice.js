//Reading File Synchronously
/*
var fs = require('fs');
var data=fs.readFileSync("abc.txt").toString();
console.log(data);
*/
//Reading File Asynchronously
/*
var fs = require('fs');
fs.readFile("abc.txt",(err,data)=>{
    if(err){
        console.log("error");
    }else{
        console.log(data.toString());
    }
})
*/
//Writing to a file Synchronously
/*
var fs = require('fs');
fs.writeFileSync("abcd.txt","Hello World");
*/
//Writing to a file Asynchronously
/*
var fs = require('fs');
fs.writeFile("abcd.txt","Writing Asynchronously",(err)=>{
    if(err){
        console.log(err);
    }
})
*/
var fs = require('fs');
fs.appendFile("abcd.txt","Appending Asynchronously",(err)=>{
    if(err){
        console.log(err);
    }
})