//Write a program to calculate sum of squares of first N natural numbers
#include<stdio.h>
int main()
{
    int x,y,sum=0;
    printf("Enter no. of natural numbers:");
    scanf("%d",&x);
    for(y=1;y<=x;y++)
    {
        sum=sum+y*y;
    }
    printf("Sum is: %d\n",sum);
    return 0;
}