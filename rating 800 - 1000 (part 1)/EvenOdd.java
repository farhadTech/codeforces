import java.util.Scanner;

public class EvenOdd {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Read input
        long n = scanner.nextLong();
        long k = scanner.nextLong();

        // Calculate the number at position k
        long result = findNumber(n, k);

        // Print the result
        System.out.println(result);
        scanner.close();
    }

    public static long findNumber(long n, long k) {
        // Check if k falls within the odd or even numbers section
        long mid = (n + 1) / 2; // Midpoint to separate odd and even sections
        if (k <= mid) {
            // Position k is within the odd numbers section
            return 2 * k - 1;
        } else {
            // Position k is within the even numbers section
            return 2 * (k - mid);
        }
    }
}
