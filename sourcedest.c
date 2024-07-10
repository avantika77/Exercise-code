#include <stdio.h>
#include <string.h>

int main() {
    char src[50] = "Hello, World!";   // Source string
    char dest[50];                   // Destination string

    // Copying src to dest using strcpy
    strcpy(dest, src);

    // Printing the copied string
    printf("Original string: %s\n", src);
    printf("Copied string  : %s\n", dest);

    return 0;
}
