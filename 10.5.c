//Write a function to print first N odd natural numbers. (TSRN)
#include<stdio.h>
void odd(int);
int main()
{
    int x;
    printf("Enter no. of numbers:");
    scanf("%d",&x);
    odd(x);
    return 0;
}
void odd(int x)
{
    if(x>0)
    {   
        odd(x-1);
        printf(" %d",2*x-1);
    }
}