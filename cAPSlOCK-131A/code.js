const prompt = require('prompt');

prompt.start();

prompt.get(['word'], function (err, result) {
    if (err) { return onErr(err); }
    if (typeof result.word !== 'string') { return onErr('word must be strings') }
    console.log(result.word.charAt(0).toUpperCase() + result.word.slice(1).toLowerCase())
});

function onErr(err) {
    console.log(err);
    return true;
}