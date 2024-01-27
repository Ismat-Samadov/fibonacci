#include <stdio.h>

void generateFibonacci(int n) {
    int first = 0, second = 1, next, i;

    printf("Fibonacci Sequence:\n");

    for (i = 0; i < n; i++) {
        printf("%d, ", first);
        next = first + second;
        first = second;
        second = next;
    }
}

int main() {
    int n;

    printf("Enter the number of terms for the Fibonacci sequence: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer for the number of terms.\n");
        return 1; 
    }

    generateFibonacci(n);

    return 0; 
}
