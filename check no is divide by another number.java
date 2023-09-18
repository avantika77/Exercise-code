import java.util.Scanner;
public class Division
 {
    public static void main(String[] args) {
        // Create a Scanner object to read input from the user
        Scanner scanner = new Scanner(System.in);
  //  enter the first number
        System.out.print("Enter the first number: ");
        int num1 = scanner.nextInt();

        //  enter the second number
        System.out.print("Enter the second number: ");
        int num2 = scanner.nextInt();

        if (num2 != 0) 
        {
            if (num1 % num2 == 0) 
            {
                System.out.println(num1 + "  divisible by " + num2);
            } else {
                System.out.println(num1 + " is not divisible by " + num2);
            }
        } 
        else {
            System.out.println("Cannot divide by zero ,  enter a non-zero second number.");
        }
    }
}
//-------------------------------------------------------------------------------------------------------------------------------
// same code in c++  ----------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main() {
    //  variables 
    int num1, num2
     // user to enter the number
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
 if (num2 != 0)
 {
        if (num1 % num2 == 0) 
        {
            cout << num1 << " is divisible by " << num2 << endl; //endl for next line
        } else {
            cout << num1 << " is not divisible by " << num2 << endl;
        }
    } else {
        cout << "Cannot divide by zero, enter a non-zero second number." << endl;
    }

    return 0;
}
