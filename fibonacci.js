function generateFibonacci(n) {
    let fibonacciSequence = [];
    let first = 0, second = 1;

    for (let i = 0; i < n; i++) {
        fibonacciSequence.push(first);
        [first, second] = [second, first + second];
    }

    return fibonacciSequence;
}

let n = prompt("Enter the number of terms for the Fibonacci sequence:");

n = parseInt(n);
if (isNaN(n) || n <= 0) {
    console.log("Please enter a positive integer for the number of terms.");
} else {
    let fibonacciSequence = generateFibonacci(n);
    console.log("Fibonacci Sequence:", fibonacciSequence.join(', '));
}
