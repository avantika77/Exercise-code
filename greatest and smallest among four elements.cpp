// greatest and smallest among four elements in c++
#include <iostream>//for input and output streams
//include std::cin for input and std::cout for output 
#include <algorithm> // commonly used for DS like array .vector etc...include std::sort ,std::find,std::min ,std::max ,std::transform
int main()
{
    int a, b, c, d;                           // variable declarations
    std::cout << "Enter the four elements:\n"; // asking for the number of elements //std::cout for printing
    std::cin >> a >> b >> c >> d;
    // for user input
    // max and min used
    int max = std::max({a, b, c, d});//for max
    int min = std::min({a, b, c, d});//for min

    // print the elements
    std::cout << "Mximunm number is : " << max << std::endl;
    std::cout << "Minimum number is :" << min << std::endl;


    return 0;
}//---------------------------------------------------------------------------------------------------------------------------
//A namespace is a way to group related names (such as classes, functions, and variables) in order to avoid naming conflicts and to provide a clear and organized structure for the code.
//-----------------------------------------------------------------------------------------------------------------------------
//std namespace stands for "standard" and contains many of the standard C++ library components, including classes, functions, and objects, that are commonly used in C++ programs. When you include standard library headers, such as <iostream>, <vector>, or <algorithm>, the contents of these headers are typically defined within the std namespace.