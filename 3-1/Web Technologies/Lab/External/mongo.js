const { MongoClient } = require("mongodb");
const uri = "mongodb://0.0.0.0:27017";
const client = new MongoClient(uri);
async function main() {
    try{
        await client.connect();
        await client.db("Final").collection("students").deleteOne({"Name":"Rani"});
    }finally{
        await client.close();
    }
}
main();