/*program to calculate the sum of all even numbers and sum of all odd
numbers, which are stored in a*/
#include<stdio.h>
int main()
{
    int arr[10],sumeven=0,i,sumodd=0;
    printf("Enter the value\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
     for(i=0;i<10;i++)
     {
         if(arr[i]%2==0)
         sumeven=sumeven+arr[i];
         else
         sumodd=sumodd+arr[i];
     }
     printf("Sum of even number is %d\n",sumeven);
     printf("Sum of odd number is %d",sumodd);
     return 0;
}