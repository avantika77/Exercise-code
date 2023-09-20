import java.util.*;

public class Main {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		System.out.println("enter a name :");

		String name = sc.nextLine();
		System.out.println("your name " + name); // print any input string
		// sum of variables using user input
		System.out.println("enter value of a:");
		int a = sc.nextInt();
		System.out.println("enter value of b:");
		int b = sc.nextInt();
		System.out.println("Sum of a and b:");
		int sum = a + b;
		System.out.println(sum);
		// printing table of any number using for loop
		System.out.print("Enter number: ");
		int num = sc.nextInt();
		for (int i = 1; i <= 10; i++) {
			System.out.println(num + " * " + i + " = " + num * i);
		}
	}
}
//OUTPUT//----------------------------------------------------------------------------------------------
enter a name :
AVANTIKA
your name AVANTIKA
enter value of a:
55
enter value of b:
68
Sum of a and b:
123
Enter number: 8
8 * 1 = 8
8 * 2 = 16
8 * 3 = 24
8 * 4 = 32
8 * 5 = 40
8 * 6 = 48
8 * 7 = 56
8 * 8 = 64
8 * 9 = 72
8 * 10 = 80

