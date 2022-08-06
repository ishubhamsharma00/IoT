/*
Write a program to calculate the sum of all even numbers and sum of all odd
numbers, which are stored in an array of size 10. Take array values from the user.
*/
#include<stdio.h>
int main()
{
    int a[10],i,se=0,so=0;
    printf("Enter 10 numbers:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        se=se+a[i];
        else
        so=so+a[i];
    }
    printf("Sum of even numbers is:%d and odd numbers is:%d\n",se,so);
    return 0;
}