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

//OUTPUT//----------------------------------------------------------------------------------------------------------------------------
Enter the number of rows: 6
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
1 2 3 4 5 6

//IN ANY PROGRAM LOGIC REMAIN SAME //--------------------------------------------------------------------------------------------------
for i in range(1, n + 1):
 for j in range(1, i + 1):
 print(j, end=" ") //emd space
    print() 
