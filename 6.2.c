//Write a program to calculate sum of first N even natural numbers
#include<stdio.h>
int main()
{
    int i,j,sum=0;
    printf("Enter number of natural even numbers:");
    scanf("%d",&j);
    for(i=1;i<=j;i++)
    {
        sum=sum+2*i;
    }
    printf("Sum is: %d\n",sum);
    return 0;
}