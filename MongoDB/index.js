
const Mongoose = require('mongoose');



//connection from database
const url = 'mongodb://127.0.0.1:27017/userSagar';

main()
    .then((res) => {
        console.log("Mongoose connections Successfully");
    })
    .catch((err) => {
        console.log("error occurs in Mongoose connections");
    });

async function main(){
    await Mongoose.connect(url);
}



//make schema
const userSchema = new Mongoose.Schema({
    name : String,
    email : String,
    age: Number,
});




//make models
const User = new Mongoose.model("User", userSchema);



//add data
const user1 = new User({
    name: "Suman",
    email: "suman9550@gmail.com",
    age: "18",
    city: "Hajipur",
});


//save data
// user1.save()
//             .then((res) =>{
//                 console.log("Data save Successfully");
//             })
//             .catch((err) => {
//                 console.log("Error occurs in save");
//             });



// //find
User.find({})
            .then((res) => {
                console.log(res) 
            });



//Update 
// User.updateOne({name: "Aman"}, {age: 40}).then((res) =>{
//     console.log(res);
// }).catch((err) => {
//     console.log(err);
// })


// User.deleteOne({name: "Sagar"}).then((res) =>{
//     console.log(res);
// });


