/* MODULES */
const express = require('express');
const mongoose = require("mongoose");
const bodyParser = require('body-parser');
const path = require("path");
const exphbs = require('express-handlebars');
const app = express();
/* CONFIG */
app.set('port', process.env.PORT || 3000);
mongoose.connect('mongodb://localhost/1group-project', {useCreateIndex: true,useNewUrlParser: true })
    .then(db => console.log('DB is connected'))
    .catch(err => console.error(err));
app.use(bodyParser.json());
app.use(bodyParser.urlencoded({ extended: false }));
/* ENGINE */
app.set('views', path.join(__dirname, 'views'));
app.engine('.hbs', exphbs({
    defaultLayout: 'main',
    layoutsDir: path.join(app.get('views'), 'layouts'),
    partialsDir: path.join(app.get('views'), 'partials'),
    extname: '.hbs'
}));
app.set('view engine', '.hbs');
/* STATIC FILES */
app.use(express.static(__dirname + '/public'));
/* ROUTES */
app.use('/', require('./routes/index'));
app.use('/api', require('./routes/api'));
/* SERVER */
app.listen(app.get('port'), () => {
    console.log('Server running on port ', app.get('port'));
})

