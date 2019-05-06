const express = require('express');
const router = express.Router();

router.get('/', (req,res) => {
    res.render('layouts/index');
})

router.get('/form', (req,res) =>{
    res.render('layouts/form');
})

module.exports = router;