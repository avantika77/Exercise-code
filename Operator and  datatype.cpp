#include <iostream>
using namespace std;
int main()
{
    // fundamental datatype
    int age = 25;
    float salary = 1500.50;
    char grade = 'A';
    // using fundamental datatype
    int num1 = 10;
    int num2 = 5;
    // using arithmetic operator
    std::cout << "Addition , Subtraction , Division , Product ;" << std::endl;

    cout << "---------------------------------------------" << endl;
    // using comparison operator
    std::cout << "greater than,less than,greater than equal to,less than equal to" << std::endl;

    // DISPLAY INFORMATION
    std::cout << "Age: " << age << endl;
    std::cout << "Salary: " << salary << endl;
    std::cout << "Grade: " << grade << endl;

    // display operator information
    cout << "---------------------------------------------" << endl;

    std::cout << "Addition:" << num1 + num2 << endl;
    std::cout << "Subtraction:" << num1 - num2 << endl;
    std::cout << "Division:" << num1 / num2 << endl;
    std::cout << "Product:" << num1 * num2 << endl;
    std::cout << "greater than: " << (num1 > num2) << " False" << std::endl;
    std::cout << "Less than: " << (num1 < num2) << " True" << std::endl;
    std::cout << "greater than equal to: " << (num1 >= num2) << " False" << std::endl;
    std::cout << "Less than equal to: " << (num1 <= num2) << " True" << std::endl;
    //   if (num1 < num2)
    //   {
    //     std::cout << "False "<< std::endl;
    //   }
    //   else if (num1 > num2)
    //   {
    //     std::cout << "True" << endl;

    //   }
    //   else if(num1<=num2)
    //   {
    //         std::cout << "False" << endl;
    //   }
    //   else
    //   {
    //     std::cout << "True" << endl;
    //   }
}