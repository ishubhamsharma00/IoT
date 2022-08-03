//Write a function to calculate the factorial of a number. (TSRS)
#include<stdio.h>
int fac(int);
int main()
{
    int n,f;
    printf("Enter a number:");
    scanf("%d",&n);
    f=fac(n);
    printf("Factorial of %d is %d\n",n,f);
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