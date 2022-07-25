//Write a program to calculate factorial of a number
#include<stdio.h>
int main()
{
    int x,y,f=1;
    printf("Enter a number:");
    scanf("%d",&x);
    y=x;
    while(x>=1)
    {
        f=f*x;
        x--;
    }
    printf("Factorial of %d is %d\n",y,f);
    return 0;
}