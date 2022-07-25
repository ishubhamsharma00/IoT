//Write a program to calculate sum of first N odd natural numbers
#include<stdio.h>
int main()
{
    int i,j,sum=0;
    printf("Enter number of natural odd numbers:");
    scanf("%d",&j);
    for(i=1;i<=j;i++)
    {
        sum=sum+2*i-1;
    }
    printf("Sum is: %d\n",sum);
    return 0;
}