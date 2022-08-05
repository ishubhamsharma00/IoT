//Write a recursive function to calculate sum of first N odd natural numbers
#include<stdio.h>
int odd(int);
int main()
{
    int x;
    printf("Enter no. of odd natural numbers:");
    scanf("%d",&x);
    printf("Sum of first %d odd natural numbers is: %d\n",x,odd(x));
    return 0;
}
int odd(int x)
{
    int sum=0;
    if (x==1)
    return 1;
    sum=2*x-1+odd(x-1);
    return(sum);
}