//Write a recursive function to print first N natural numbers
#include<stdio.h>
void natural(int);
int main()
{
    int x;
    printf("Enter no. of natural numbers:");
    scanf("%d",&x);
    natural(x);
    return 0;
}
void natural(int x)
{
    if (x>1)
    natural(x-1);
    printf("%d ",x);
}