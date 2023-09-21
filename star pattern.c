#include <stdio.h>

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
//OUTPUT//------------------------------------------------------------
Enter the number of rows: 7
* 
* * 
* * * 
* * * * 
* * * * * 
* * * * * *
* * * * * * *