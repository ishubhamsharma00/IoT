//Write a recursive function to calculate sum of squares of first n natural numbers
#include<stdio.h>
int sqnatural(int);
int main()
{
    int x;
    printf("Enter no. of natural numbers:");
    scanf("%d",&x);
    printf("Sum of square of first %d natural numbers is: %d\n",x,sqnatural(x));
    return 0;
}
int sqnatural(int x)
{
    int sum=0;
    if (x==1)
    return 1;
    sum=x*x+sqnatural(x-1);
    return(sum);
}