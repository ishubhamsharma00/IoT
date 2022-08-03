/*
Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the
function.
*/
#include<stdio.h>
int sum(int);
int fac(int);
int main()
{
    int x;
    printf("Enter the nth term of series:");
    scanf("%d",&x);
    printf("Sum of series till %dth term is: %d\n",x,sum(x));
    return 0;
}
int fac(int n)
{
    int f;
    if(n==1 || n==0)
    return (1);
    f=n*fac(n-1);
    return (f);
}
int sum(int x)
{
    int i,sum=0;
    for(i=1;i<=x;i++)
    {
        sum=sum+(fac(i)/i);
    }
    return (sum);
}