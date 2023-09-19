#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    // Input the two numbers
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Swap the two numbers using a temporary variable
    int temp = num1;
    num1 = num2;
    num2 = temp;

    // Print the swapped values
    cout << "After swapping:" << endl;
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;

    return 0;
}

#OUTPUT#----------------------------------------------------------------------------------------------------------------------
Enter the first number: 34
Enter the second number: 76
After swapping:
First number: 76
Second number: 34
