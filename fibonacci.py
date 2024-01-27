def generate_fibonacci(n):
    first, second = 0, 1
    fibonacci_sequence = []

    for _ in range(n):
        fibonacci_sequence.append(first)
        first, second = second, first + second

    return fibonacci_sequence

n = int(input("Enter the number of terms for the Fibonacci sequence: "))

if n <= 0:
    print("Please enter a positive integer for the number of terms.")
else:
    fibonacci_sequence = generate_fibonacci(n)
    print("Fibonacci Sequence:", fibonacci_sequence)
