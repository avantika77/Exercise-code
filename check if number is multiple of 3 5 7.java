import java.util.Scanner;

public class Check {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int number = scanner.nextInt();

        // Check if the number is a multiple of 3, 5, and 7
        boolean a = number % 3 == 0;
        boolean b = number % 5 == 0;
        boolean c = number % 7 == 0;

        // Display the result
        if (a && b && c) {
            System.out.println(number + " is a multiple of 3, 5, and 7.");
        } else {
            System.out.println(number + " is not a multiple of 3, 5, and 7.");
        }

        scanner.close();
    }
}
