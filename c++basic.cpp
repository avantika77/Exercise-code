// c++ basic
#include <iostream> //header file--------------------------------------------------------------------------------------------
int main()
{
    // this is a comment
    std::cout << "Hello World." << '\n';
    std::cout << "C++ rocks!";

   char mychar{'a'};
   int  myint{123};
   double   mydouble{456.78};
   std::cout << "The value of a char variable is: " << mychar << '\n';
   std::cout << "The value of an int variable is: " << myint << '\n';
   std::cout << "The value of a double variable is: " << mydouble << '\n';    
}
//The assignment operator = assigns a value to a variable / object: ----------------------------------------------------------
int main()
{
    char mychar = 'c';    // define a char variable mychar
    mychar = 'd';         // assign a new value to mychar
    int x = 123;          // define an integer variable x
    x = 456;              // assign a new value to x
    int y = 789;          // define a new integer variable y
    y = x;                // assing a value of x to it
}
#Arithmetic Operators -----------------------------------------------------------------------------------------------------
#We can do arithmetic operations using arithmetic operators. Some of them are:
+ // addition
- // subtraction
* // multiplication
/ // division
% // modulo
    ------------------------------------------------------------------------------------------------------------------------
#include <iostream> //header file-------------------------------------------------------------------------------------------
int main()
{
    int x = 123;
    int y = 456;
    int z = x + y; // add
    z = x - y; // subtract
    z = x * y; // multi.
    z = x / y; // division
    std::cout << "The value of z is: " << z << '\n';
}
"The integer division, in our example, results in a value of 0."
"It is because the result of the integer division where both operands are integers is truncated towards zeros. In the expression x / y, x and y are operands and / is the operator."
"If we want a floating-point result, we need to use the type double and make sure at least one of the division operands is also of type double:"

#include <iostream>
int main()
{
    int x = 123;🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸
    double y = 456;
   double z = x / y;
   std::cout << "The value of z is: " << z << '\n';
}
Similarly, we can have:
#include <iostream>
int main()
{
    double z = 123 / 456.0;🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸
    std::cout << "The value of z is: " << z << '\n';
}
and the result would be the same.   #concentarte on declaration and insealization
--------------------------------------------------------------------------------------------------------------------------------------
#Compound Assignment Operators
operators allow us to perform an arithmetic operation and assign a result with one operator:
+= // compound addition
-= // compound subtraction
*= // compound multiplication
/= // compound division
%= // compound modulo
#include <iostream>
int main()
{
    int x = 123;
    x += 10;    // the same as x = x + 10
    x -= 10;    // the same as x = x - 10
    x *= 2;     // the same as x = x * 2
    x /= 3;     // the same as x = x / 3
    std::cout << "The value of x is: " << x;
}

#Increment/Decrement Operators
Increment/decrement operators increment/decrement the value of the object. The operators are:
++x // pre-increment operator
x++ // post-increment operator
--x // pre-decrement operator
x-- // post-decrement operator
#include <iostream>
int main()
{
    int x = 123;
    x++;    // add 1 to the value of x   ------------------------------------124
    ++x;    // add 1 to the value of x   ------------------------------------125
    --x;    // decrement the value of x by 1 --------------------------------124
    x--;    // decrement the value of x by 1 --------------------------------123
    std::cout << "The value of x is: " << x; -------------------------------- 123
}
🔸🔸HOW Increment/Decrement Operators WORKS🔸🔸🤔❓❓❓
Both pre-increment and post-increment operators add 1 to the value of our object, and both pre-decrement and post-decrement operators subtract one from the value of our object. 
The difference between the two, apart from the implementation mechanism, is that with the pre-increment operator, a value of 1 is added first. 
Then the object is evaluated/accessed in expression. With the post-increment, the object is evaluated/accessed first, and after that, the value of 1 is added.
To the next statement that follows, it does not make a difference.
The value of the object is the same, no matter what version of the operator was used. The only difference is the timing in the expression where it is used.
---------------------------------------------------------------------------------------------------------------------------------------

#Standard Input
#We can think of the standard input as our keyboard:-
#include <iostream>
int main()
{
    std::cout << "Please enter a number and press enter: ";
    int x = 0;
    std::cin >> x;
    std::cout << "You entered: " << x;
}
🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸
The std::cin is the standard input stream, and it uses the >> operator to extract what has been read into our variable.
The std::cin >> x; statement means: read from a standard input into a x variable.
The cin object resides inside the std namespace. So, std::cout << is used for outputting data (to a screen) and std::cin >> is used for inputting the data (from the keyboard).
We can accept multiple values from the standard input by separating them with multiple >> operators:
🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸
#include <iostream>
int main()
{
    std::cout << "Please enter two numbers separated by a space and press enter: ";
    int x = 0;
    int y = 0;
    std::cin >> x >> y;
    std::cout << "You entered: " << x << " and " << y;
}
We can accept values of different types:
#include <iostream>
int main()
{
    std::cout << "Please enter a character, an integer and a double: ";
    char c = 0;
    int x = 0;
    double d = 0.0;
    std::cin >> c >> x >> d;
    std::cout << "You entered: " << c << ", " << x << " and " << d;
}
-----------------------------------------------------------------------------------------------------------------
EXERCISE::--📝📝
Write a program that accepts an integer number from the standard input and then print that number.
#include <iostream>
int main()
{
    std::cout << "Please enter a number: ";
    int x;
    std::cin >> x;
    std::cout << "You entered: " << x;
}
Write a program that accepts two integer numbers from the standard input and then prints them.
#include <iostream>
int main()
{
    std::cout << "Please enter two integer numbers: ";
    int x;
    int y;
    std::cin >> x >> y;
    std::cout << "You entered: " << x << " and " << y;
}
Multiple Inputs------------------------------------------
Write a program that accepts three values of type char, int, and double respectfully from the standard input. 
Print out the values afterward.
#include <iostream>
int main()
{
    std::cout << "Please enter a char, an int and a double: ";
    char c;
    int x;
    double d;
    std::cin >> c >> x >> d;
    std::cout << "You entered: " << c << ", " << x << ", and " << d;
}
Inputs and Arithmetic Operations-------------------------
Write a program that accepts two int numbers, sums them up, and assigns a result to a third integer.
Print out the result afterward.
#include <iostream>
int main()
{
    std::cout << "Please enter two integer numbers: ";
    int x;
    int y;
    std::cin >> x >> y;
    int z = x + y;
    std::cout << "The result is: " << z;
}
Post-Increment and Compound Assignment
Write a program that defines an int variable called x with a value of 123, post-increments that value in the next statement, and adds the value of 20 in the following statement using the compound assignment operator . Print out the value afterward.
#include <iostream>
int main()
{
    int x = 123;
x++;
    x += 20;
    std::cout << "The result is: " << x;
}
Integral and Floating-point Division-------------------------------------------
Write a program that divides numbers 9 and 2 and assigns a result to an int and a double variable.
Then modify one of the operands, so that is of type double and observe the different outcomes of a floating-point division where at least one of the operands is of type double.
Print out the values afterward.
#include <iostream>
int main()
{
    int x = 9 / 2;
    std::cout << "The result is: " << x << '\n';
    double d = 9 / 2;
std::cout << "The result is: " << d << '\n';
    d = 9.0 / 2;
    std::cout << "The result is: " << d;
}
🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸🔸
Arrays
Arrays are sequences of objects of the same type. We can declare an array of type char as follows:
int main()
{
    char arr[5];
}
To declare an array of type int which holds five elements, we would use:
int main()
{
    int arr[5];
}
 To initialize an array, we can use the initialization list {}:
int main()
{
    int arr[5] = { 10, 20, 30, 40, 50 };
}
#access individual array elements through a subscript [] operator and an index. The first array element has an index of 0, and we access it via:
int main()
{
    int arr[5] = { 10, 20, 30, 40, 50 };
    arr[0] = 100; // change the value of the first array element
}
int main()
{
    int arr[5] = { 10, 20, 30, 40, 50 };
    arr[4] = 500; // change the value of the last array element
}
int main()
{
    int arr[5] = { 10, 20, 30, 40, 50 };
    arr[4] = 500; // change the value of the last array element
}
[In modern C++, we should prefer the std::array and std::vector containers to raw arrays.]
