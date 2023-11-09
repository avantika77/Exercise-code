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
