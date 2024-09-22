

const { faker } = require('@faker-js/faker');
const mysql = require("mysql2");





const connection =  mysql.createConnection({
    host: 'localhost',
    user: 'root',
    database: 'sagar_data',
    password: '7544',
});



try{
    connection.query("SHOW TABLE", (res, err) => {
        if(err) throw err;
        console.log(res);
    })
}catch(err){
    console.log(err);
}





let createRandomUser = () =>{
    return {
        userId: faker.string.uuid(),
        username: faker.internet.userName(),
        email: faker.internet.email(),
        avatar: faker.image.avatar(),
        password: faker.internet.password(),
        birthdate: faker.date.birthdate(),
        registeredAt: faker.date.past(),
      };
};

