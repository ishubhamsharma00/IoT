//Write a program in C to find the square of any number using the function.
#include<stdio.h>
int sq(int);
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    printf("Square of %d is %d/n",x,sq(x));
    return 0;
}
int sq(int x)
{
    return(x*x);
}