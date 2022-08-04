//Write a recursive function to print squares of first N natural numbers
#include<stdio.h>
void sqnatural(int);
int main()
{
    int x;
    printf("Enter no. of square of natural numbers:");
    scanf("%d",&x);
    sqnatural(x);
    return 0;
}
void sqnatural(int x)
{
    if (x>1)
    sqnatural(x-1);
    printf("%d ",x*x);
}