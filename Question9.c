/*program in C to read n number of values in an array and display it in reverse
order. Take array values from the user.*/
#include<stdio.h>
int main()
{
    int arr[10],i;
    printf("Enter The Value\n");
    for(i=0;i<=9;i++){
    scanf("%d",&arr[i]);
    }
   for(i=9;i>=0;i--){
    printf("%d ",arr[i]);
   }
}