//Write a program in C to count the digits of a given number using recursion.
#include<stdio.h>
int count(int);
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    printf("No. of digits in %d is %d\n",x,count(x));
    return 0;
}
int count(int x)
{
    int c=0;
    if(x/10==0)
    return 1;
    c=1+count(x/10);
    return c;
}