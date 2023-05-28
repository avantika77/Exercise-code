#include<stdio.h>
int main()
{
 int n, sum=0;
 printf("enter the last natural number you want the sum of \n");
 scanf("%d",&n);
 //n(o) algorithm
 //for(int i=0; i<n; i++)
 //{
   // sum+=1;
 //}
 //n(1)algorithm
 sum=(n*n+n)/2;
 printf("sum of %d natural numbers is:%d\n",n,sum);
 return 0;
}