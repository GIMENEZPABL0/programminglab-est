const mongoose = require('mongoose');
const { Schema } = mongoose;

const Country = new Schema({
    code:{
        type:String,
        unique:true,
        required:true,
    },
    name:{
        type:String,
        unique:true,
        required:true
    },
    animal:{
        type:String,
        required:true
    },
    flower:{
        type:String,
        required: true
    }
})

module.exports = mongoose.model('Country', Country);