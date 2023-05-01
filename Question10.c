//program in C to copy the elements of one array into another array.Take arrayvalues from the user
#include<stdio.h>
int main()
{
    int arr1[10],i,arr2[10];
    printf("Enter The value\n");
    for (i=0;i<=9;i++)
    {
       scanf("%d",&arr1[i]);
    }
    for (i=0;i<=9;i++)
    {
        arr2[i] = arr1[i];
        printf("%d ",arr2[i]);
    }
    
    
}