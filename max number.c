#include<stdio.h>
int returnMax(int array[],int n)
{
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }
    }
    array[0]=999;
    return max;
}
int main(){
    int arr[]={1,3,4545,66,55,7,6};
    int max=returnMax(arr,7);
    printf("the maximum element in this array is %d\n",max);
    //for (int i=0;i<7;i++)
   // {
     //   printf("the element at index %d\n",i,arr[1]);
   // }
    return 0;
}
