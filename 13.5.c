//Write a recursive function to calculate sum of digits of a given number
#include<stdio.h>
int sumdigits(int);
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    printf("Sum of digits of %d is %d\n",x,sumdigits(x));
    return 0;
}
int sumdigits(int x)
{
    int sum=0;
    if(x>0)
    {
        sum=x%10+sumdigits(x/10);
    }
    return (sum);
}