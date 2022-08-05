//Write a recursive function to calculate factorial of a given number
#include<stdio.h>
int fact(int);
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    printf("Factorial of %d is %d\n",x,fact(x));
    return 0;
}
int fact(int x)
{
    int f;
    if(x==1)
    return 1;
    f=x*fact(x-1);
    return (f);
}