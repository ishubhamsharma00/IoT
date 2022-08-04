//Write a recursive function to print first N odd natural numbers in reverse order
#include<stdio.h>
void rodd(int);
int main()
{
    int x;
    printf("Enter no. of odd numbers:");
    scanf("%d",&x);
    rodd(x);
    return 0;
}
void rodd(int x)
{
    if (x>=1)
    {
        printf("%d ",2*x-1);
        rodd(x-1);
    }
}