#include <iostream>

int main() {
    int n;

    std::cout << "Enter the number of rows: ";
    std::cin >> n;

    // logic for pattern 
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << j << " ";
        }
        std::cout << std::endl; // move to the next line after each row
    }

    return 0;
}
