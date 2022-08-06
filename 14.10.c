/*
Write a program in C to copy the elements of one array into another array.Take array
values from the user.
*/
#include<stdio.h>
int main()
{
    int a[5],i;
    printf("Enter values in array:");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    int b[5];
    for(i=0;i<5;i++)
    {
        b[i]=a[i];
        printf("%d ",b[i]);
    }
    return 0;
}
