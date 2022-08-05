//Write a recursive function to print first N terms of Fibonacci series
#include<stdio.h>
int fibo(int);
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    for(int i=0;i<x;i++)
    printf("%d ",fibo(i));
    return 0;
}
int fibo(int x)
{
    if(x==1 || x==0)
    return x;
    return(fibo(x-1)+fibo(x-2));
}