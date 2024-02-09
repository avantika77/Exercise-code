hi import java.util.Scanner; //Imports the Scanner class from the java.util package, which is used for taking user input

class PalindromeExample //class named {
    public static void main(String args[]) { //Entry point of the program.
        String original, reverse = "";  // Declares two string variables, original to store the user input and reverse to store the reversed string.

        // Taking user input
        Scanner scanner = new Scanner(System.in); //Creates a Scanner object to read user input.
        System.out.println("Enter a string to check for palindrome:");
        original = scanner.nextLine(); //Takes a string input from the user

        int length = original.length();

        // Reversing the string
        for (int i = length - 1; i >= 0; i--) {
            reverse = reverse + original.charAt(i); //Reverses the string by iterating through its characters from the end to the beginning.
        }

        // Checking if the original and reversed strings are equal
        if (original.equals(reverse))
            System.out.println("Palindrome string");
        else
            System.out.println("Not palindrome");

        // Closing the scanner to avoid resource leaks
        scanner.close(); //Closes the Scanner to release resources
    }
}
=================================================================================================================================================
Enter a number to check for palindrome:
787
Palindrome number
_________________________________________________________________________
