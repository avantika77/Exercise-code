ye to_______________________
//Write a program that defines and initializes an array of five doubles. Change and print the values of the first and last array elements.
#include <iostream>
int main()
{
    double arr[5] = { 1.23, 2.45, 8.52, 6.3, 10.15 };
    arr[0] = 2.56;
    arr[4] = 3.14;
    std::cout << "The first array element is: " << arr[0] << '\n';
    std::cout << "The last array element is: " << arr[4] << '\n';
Pointer to an Object------------------------------
Write a program that defines an object of type double. Define a pointer that points to that object. Print the value of the pointed-to object by dereferencing a pointer.
#include <iostream>
int main()
{
    double d = 3.14;
    double* p = &d;
    std::cout << "The value of the pointed-to object is: " << *p;
}
Reference Type
 a program that defines an object of type double called mydouble. Define an object of reference type called myreference and initialize it with mydouble. Change the value of myreference. Print the object value using both the reference and the original variable. Change the value of mydouble. Print the value of both objects.
#include <iostream>
int main()
{
    double mydouble = 3.14;
    double& myreference = mydouble;
myreference = 6.28;
    std::cout << "The values are: " << mydouble << " and " << myreference << '\n';
    mydouble = 9.45;
    std::cout << "The values are: " << mydouble << " and " << myreference << '\n';
}
Strings
Write a program that defines two strings. Join them together and assign the result to a third-string. Print out the value of the resulting string.
#include <iostream>
#include <string>
int main()
{
    std::string s1 = "Hello";
    std::string s2 = " World!";
    std::string s3 = s1 + s2;
    std::cout << "The resulting string is: " << s3;
}
Strings from Standard Input
Write a program that accepts the first and the last name from the standard input using the std::getline function. Store the input in a single string called fullname. Print out the string.
#include <iostream>
#include <string>
int main()
{

    std::string fullname;
    std::cout << "Please enter the first and the last name: ";
    std::getline(std::cin, fullname);
    std::cout << "Your name is: " << fullname;
}
Creating a Substring
Write a program that creates two substrings from the main string.
The main string is made up of first and last names and is equal to “John Doe.”
The first substring is the first name. The second substring is the last name. 
Print the main string and two substrings afterward.
 #include <iostream>
#include <iostream>
int main()
{
    std::string fullname = "John Doe";
    std::string firstname = fullname.substr(0, 4);
    std::string lastname = fullname.substr(5, 3);
 std::string fullname = "John Doe";
    std::string firstname = fullname.substr(0, 4);
    std::string lastname = fullname.substr(5, 3);
    std::cout << "The full name is: " << fullname << '\n';
    std::cout << "The first name is: " << firstname << '\n';
    std::cout << "The last name is: " << lastname << '\n';
}
Finding a single Character
Write a program that defines the main string with a value of “Hello C++ World.” and checks if a single character ‘C’ is found in the main string.
#include <iostream>
#include <string>
int main()
{
std::string s = "Hello C++ World.";
    std::string mysubstring = "C++";
    auto mysubstringfound = s.find(mysubstring);
    if (mysubstringfound != std::string::npos)
    {
std::cout << "Substring found at position: " << mysubstringfound << '\n';
    }
    else
    {
        std::cout << "Substring was not found." << '\n';
    }
}
#Instead of typing the lengthy std::string::size_type type for our characterfound and mysubstringfound variables, we used the auto specifier to deduce the type for us automatically.
Automatic Type Deduction
Write a program that automatically deduces the type for char, int, and double objects based on the initializer used. Print out the values afterward.
#include <iostream>
int main()
{
    auto c = 'a';
    auto x = 123;
    auto d = 3.14;
 std::cout << "The type of c is deduced as char, the value is: " << c << '\n';
    std::cout << "The type of x is deduced as int, the value is: " << x << '\n';
    std::cout << "The type of d is deduced as double, the value is: " << d 
#include <iostream>
int main()
{
    auto c = 'a';
    auto x = 123;
    auto d = 3.14;
    std::cout << "The type of c is deduced as char, the value is: " << c << '\n';
    std::cout << "The type of x is deduced as int, the value is: " << x << '\n';
    std::cout << "The type of d is deduced as double, the value is: " << d << '\n';
}
Statements
we described statements as commands, pieces of code that are executed in some order. Expressions ending with a semicolon are statements. C++ language comes with some built-in statements. We will start with the selection statements.
Selection Statements
Selection statements allow us to check to use conditions, and based on that condition, execute the appropriate statements.
if Statement
When we want to execute a statement or more statements based on some condition, we use the if-statement . if-statement has the format of:
if (condition) statement
The statement executes only if the condition is true. Example:
#include <iostream>
int main()
{
    bool b = true;
    if (b) std::cout << "The condition is true.";
}
To execute multiple statements if the condition is true, we use the block scope {}:
#include <iostream>
int main()
{bool b = true;
    if (b)
    {
        std::cout << "This is a first statement.";
        std::cout << "\nThis is a second statement.";
    }
if (condition) statement else statement
If the condition is true, the first statement executes, otherwise the second statement after the else keyword executes.
#include <iostream>
int m.ain()
{
    bool b = false;
    if (b) std::cout << "The condition is true.";
lse std::cout << "The condition is false.";
}
To execute multiple statements in either if or else branch, we use brace-enclosed blocks {}:
#include <iostream>
int main()
{
    bool b = false;
    if (b)
    {
        std::cout << "The condition is true.";
 std::cout << "\nThis is the second statement.";
    }
    else
    {
        std::cout << "The condition is false.";
he conditional expression is of the following syntax:
(condition) ? expression_1 : expression_2

________________________________________
________________________________&_