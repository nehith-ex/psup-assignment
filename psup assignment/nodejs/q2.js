const readline = require('readline');
function uppercaseCheck() {
    const rl = readline.createInterface({ input: process.stdin, output: process.stdout });
    rl.question('Enter a character: ', (char) => {
        if (char >= 'A' && char <= 'Z') {
            console.log('The character is uppercase.');
        }
        rl.close();
    });
}