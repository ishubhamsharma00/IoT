//Write a function to print first N terms of Fibonacci series (TSRN)
#include<stdio.h>
void fibo(int);
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    fibo(x);
    return 0;
}
void fibo(int x)
{
    int j,a=-1,b=1,c;
    for(j=0;j<x;j++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\t",c);
    }
    printf("\n");
}