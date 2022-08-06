/*
Write a function in C to read n number of values in an array and display it in reverse
order.
*/
#include<stdio.h>
void inputreverse();
int main()
{
    inputreverse();
    return 0;
}
void inputreverse()
{
    int x;
    printf("Enter size of array:");
    scanf("%d",&x);
    int a[x];
    printf("Enter values in array:");
    for(int i=0;i<x;i++)
    scanf("%d",&a[i]);
    for(int i=x-1;i>=0;i--)
    printf("%d ",a[i]);
    printf("\n");
}