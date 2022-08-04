//Write a recursive function to print first N odd natural numbers
#include<stdio.h>
void odd(int);
int main()
{
    int x;
    printf("Enter no. of odd numbers:");
    scanf("%d",&x);
    odd(x);
    return 0;
}
void odd(int x)
{
    if (x>1)
    odd(x-1);
    printf("%d ",2*x-1);
}