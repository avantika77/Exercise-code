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
#Compound Assignment Operators
operators allow us to perform an arithmetic operation and assign a result with one operator:
