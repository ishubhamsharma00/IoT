//Write a recursive function to calculate sum of first N natural numbers
#include<stdio.h>
int natural(int);
int main()
{
    int x;
    printf("Enter no. of natural numbers:");
    scanf("%d",&x);
    printf("Sum of first %d natural numbers is: %d\n",x,natural(x));
    return 0;
}
int natural(int x)
{
    int sum=x;
    if (x==1)
    return 1;
    sum=sum+natural(x-1);
    return(sum);
}