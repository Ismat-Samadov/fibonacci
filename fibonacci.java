import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Fibonacci {

    // Function to generate Fibonacci sequence up to n terms
    public static List<Integer> generateFibonacci(int n) {
        List<Integer> fibonacciSequence = new ArrayList<>();
        int first = 0, second = 1, next;

        for (int i = 0; i < n; ++i) {
            fibonacciSequence.add(first);
            next = first + second;
            first = second;
            second = next;
        }

        return fibonacciSequence;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n;

        // Input the number of terms for the Fibonacci sequence
        System.out.print("Enter the number of terms for the Fibonacci sequence: ");
        n = scanner.nextInt();

        // Check for valid input
        if (n <= 0) {
            System.out.println("Please enter a positive integer for the number of terms.");
        } else {
            // Generate and print the Fibonacci sequence
            List<Integer> fibonacciSequence = generateFibonacci(n);
            System.out.print("Fibonacci Sequence: ");
            for (int num : fibonacciSequence) {
                System.out.print(num + ", ");
            }
        }
    }
}
