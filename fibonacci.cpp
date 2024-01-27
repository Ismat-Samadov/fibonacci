#include <iostream>
#include <vector>

// Function to generate Fibonacci sequence up to n terms
std::vector<int> generateFibonacci(int n) {
    std::vector<int> fibonacciSequence;
    int first = 0, second = 1, next;

    for (int i = 0; i < n; ++i) {
        fibonacciSequence.push_back(first);
        next = first + second;
        first = second;
        second = next;
    }

    return fibonacciSequence;
}

int main() {
    int n;

    // Input the number of terms for the Fibonacci sequence
    std::cout << "Enter the number of terms for the Fibonacci sequence: ";
    std::cin >> n;

    // Check for valid input
    if (n <= 0) {
        std::cout << "Please enter a positive integer for the number of terms.\n";
        return 1; // Return with an error code
    }

    // Generate and print the Fibonacci sequence
    std::vector<int> fibonacciSequence = generateFibonacci(n);
    std::cout << "Fibonacci Sequence: ";
    for (int num : fibonacciSequence) {
        std::cout << num << ", ";
    }

    return 0; // Return success
}
