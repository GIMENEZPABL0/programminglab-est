const express = require('express');
const router = express.Router();
const Country = require('../models/country')

/* GET */
router.get('/', async(req,res) =>{
    const countries = await Country.find();
    res.json(countries);
})
/* POST */
router.post('/', async (req,res) => {
    const {code,name,animal,flower} = req.body;
    const country = new Country({code, name, animal, flower});
    await country.save();
    res.redirect('/form');
})

/* GET BY ID */
router.get('/:code', async(req, res) => {
    const code = req.params.code;
    console.log(code);
    Country.findOne({code: code}, (err, country) =>{
        if(err){
            console.log(err);
        }
        if(country){
        country = country.toJSON();
        res.json({'country': country});
        }
    })
})

/* REMOVE BY ID */
router.delete('/:id', async (req, res) =>{
    const id = req.params.id;
    await Country.findByIdAndRemove(id);
    res.json({'Country': 'Deleted successfuly'});
})
module.exports = router;