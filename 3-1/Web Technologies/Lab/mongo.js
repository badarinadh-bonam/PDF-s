var mongodb = require('mongodb');
var MongoClient = mongodb.MongoClient;
var url = "mongodb://localhost:27017/";
MongoClient.connect(url,function(error,databases){
    if(error){
        throw error;
    }
    var dbObject=databases.db("Employees");
    console.log("Database Created");
    databases.close();
})