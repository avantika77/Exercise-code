//uppercase to lowercase
// #include<stdio.h>
// #include<string.h>
// int main()
// {
// int i;
// char str[100];
// printf("Enter your word:\n");
// scanf("%s",str);
// for(i=0; i<strlen(str); i++)
// {
//     if(str[i]>=65&&str[i]<=90)  
    
//         str[i]=str[i]+32;
// }
// printf("the lowercase are: %s\n", str);
// return 0;
// }


/* Uppercase A=65
         Z=90 
         lowercase are +32 away from their uppercase counterpart
         into lowercase use uppercase counterpart + 32
         */
    
// lowercase to upper case
#include<stdio.h>
#include<string.h>
int main()
{
int i;
char str[100];
printf("Enter your word:\n");
scanf("%s",str);
for(i=0; i<strlen(str); i++)
{
    if(str[i]>=97&&str[i]<=122)  // if(str[i]>='a' &&str[i]<='z') 
    
        str[i]=str[i]-32;
}
printf("the uppercase are: %s\n", str);
return 0;
}

/* lowerercase a=97
         z=122 
         lowercase are -32 away from their uppercase counterpart
         into uppercase  use lowercase counterpart  32
         */