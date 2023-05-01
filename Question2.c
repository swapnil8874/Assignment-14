/*Write a program to calculate the average of numbers stored in an array of size 10.
Take array values from the user.*/
#include<stdio.h>
int main()
{
    int arr[10],i,avg,sum=0;
    printf("Enter the value\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
     for(i=0;i<10;i++)
     {
        sum=sum+arr[i];
     }
     avg=sum/10;
     printf("%d",avg);
     return 0;

}