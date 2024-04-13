#include <iostream>
#include <iomanip>

int main() {
    int num {23500};

    std::cout << "Display dec value:" << std::endl;
    std::cout << std::dec << num << std::endl;
    std::cout << "----------------------" << std::endl;

    std::cout << "Display hex value:" << std::endl;
    std::cout << std::hex << num << std::endl;
    std::cout << "----------------------" << std::endl;

    std::cout << "Display oct value:" << std::endl;
    std::cout << std::oct << num << std::endl;
    std::cout << "----------------------" << std::endl;

    return 0;
}
