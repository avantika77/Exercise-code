//Fibonacci Numbers-The Fibonacci sequence is an infinite series of numbers in which each number (Fibonacci number) is the sum of the two preceding ones, usually starting with 0 and 1. 
//Mathematically, it is defined by the recurrence relation:
//F(n)=F(n−1)+F(n−2)
#include <iostream>
//  Fibonacci number
int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{

    int num;
    std::cout << "Enter the number of Fibonacci numbers to generate: ";
    std::cin >> num;

    for (int i = 0; i < num; i++)
    {
        std::cout << fibonacci(i) << " ";
    }

    return 0;
}
//========================================================================================================
//Fibonacci number function
def fibonacci(n):
    if n <= 1:
        return n
    else:
        return fibonacci(n - 1) + fibonacci(n - 2)
num = int(input("Enter the number of Fibonacci numbers to generate: "))
for i in range(num):
    print(fibonacci(i), end=" ")
    //end=" " is used to print each number followed by a space instead of a newline.
    
 //========================================================================================================

