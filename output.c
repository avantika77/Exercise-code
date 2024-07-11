/*
#include<stdio.h>
int main(){
    int a=0,i=0,b;
    for(i=0;i<5;i++)
    {
        a++;
        if(i==3)
        printf("hello world");
        break;
    }
    printf("%d\n",a);
    return 0;
}
*/


/*
#include <stdio.h>
int main()
{
    int y=5;
    int z=y+(y=10);
    printf("%d\n",z);
}
*/

#include<stdio.h>
void main()
{
    int k=4;
    int *const p=&k;
    int r=3;
    p=&r;
    printf("%d\n",p);

}
