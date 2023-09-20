import java.util.Scanner;

public class NumberPattern {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the number of rows: ");
        int n = scanner.nextInt();
        scanner.close();

        // Generate the pattern
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print("1 ");
            }
            System.out.println(); // Move to the next line after each row
        }
    }
}

//OUTPUT//---------------------------------------------------------------------------------------------------
Enter the number of rows: 6
1 
1 1 
1 1 1 
1 1 1 1 
1 1 1 1 1 
1 1 1 1 1 1 
