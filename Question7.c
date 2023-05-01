//Write a program to find second largest in an array.Take array values from the user
#include<stdio.h>
int main()
{
    int arr[10];
    int i,j,temp;
    printf("Enter The Array Value\n");
     for(i=0;i<=9;i++)
     {
        scanf("%d",&arr[i]);
     }
    for(i=0;i<=9;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }
        }
        printf("%d ",arr[i]);
    }
     printf("Second highest element is %d ",arr[8]);
}

