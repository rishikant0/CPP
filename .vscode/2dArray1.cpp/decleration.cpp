const express = require("express");

const app = express();
console.dir(app);
let port =8080;
app.listen(port,()=>{
console.log(`app is running on port ${port}`);
});


app.get("/",(req,res) => {
    res.send("you contacter root path");
});

app.get("/apple",(req,res) =>{
    res.send("you contacter apple path");
});


app.get("/orange",(req,res) =>{
    res.send("you contacter orange path");
});

app.get("*",(req,res) =>{
    res.send("this path is not defined");
});


// app.get("/:username/:id",(req,res) =>{
//     let {username,id} = req.params;
//     let htmlstr = `<h1></h1> welcome to page of ${username} with id ${id}</h1>`;
//     res.send(htmlstr);
// });
// app.use((req,res) => {
//     console.log("request received");
//     res.send("This is a basic responce");
// });
