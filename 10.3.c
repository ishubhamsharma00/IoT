/*
Write a function to check whether a given number is even or odd. Return 1 if the
number is even, otherwise return 0. (TSRS)
*/
#include<stdio.h>
int oddeven(int);
int main()
{
    int x,i;
    printf("Enter a number:");
    scanf("%d",&x);
    i=oddeven(x);
    switch(i)
    {
        case 1:
        printf("Even number\n");
        break;

        default:
        printf("Odd number\n");
    }
    return 0;
}
int oddeven(int x)
{
    if(x%2==0)
    return (1);
    else
    return (0);
}