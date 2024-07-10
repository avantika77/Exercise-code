#include<stdio.h>
#include<string.h>
int main()
{
 char name[30];
 printf("Enter string:");
 scanf("%s",&name);
 printf("String before strrev( ) : %s\n",name);
 printf("String after strrev( ) : %s",strrev(name));
 return 0;
}
// import java.util.Scanner;
// public class StringReversal {
//     public static void main(String[] args) {
//         Scanner scanner = new Scanner(System.in);
//         System.out.print("Enter a string: ");
//         String input = scanner.nextLine();
//         System.out.println("Original string: " + input);
        //         String reversed = reverseString(input);
        
//         System.out.println("Reversed string: " + reversed);
        
//         scanner.close();
//     }
//     // Function to reverse a string
//     public static String reverseString(String str) {
//         StringBuilder sb = new StringBuilder(str);
//         sb.reverse();
//         return sb.toString();
//     }
// }
