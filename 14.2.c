/*
Write a program to calculate the average of numbers stored in an array of size 10.
Take array values from the user.
*/
#include<stdio.h>
int main()
{
    int i,a[10],sum=0;
    printf("Enter 10 numbers:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("Average of entered value is %.2f\n",sum/10.0);
    return 0;
}