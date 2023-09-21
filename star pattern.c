-#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Generate the pattern
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
//OUTPUT//---------------------------------------------------------------------------------------------------------------------
Enter the number of rows: 7
* 
* * 
* * * 
* * * * 
* * * * * 
* * * * * *
* * * * * * *

//in python//-------------------------------------------------------------------------------------------------------------------
n = int(input("Enter the number of rows: "))
for i in range(1, n + 1):
    for j in range(1, i + 1):
        print("*", end=" ")  #end=" " to print space instead of newline
    print()  
