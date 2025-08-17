const readline = require('readline');
function positiveCheck() {
    const rl = readline.createInterface({ input: process.stdin, output: process.stdout });
    rl.question('Enter a number: ', (num) => {
        if (parseInt(num) > 0) {
            console.log('The number is positive.');
        }
        rl.close();
    });
}