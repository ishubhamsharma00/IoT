//Write a recursive function to print first N natural numbers in reverse order
#include<stdio.h>
void rnatural(int);
int main()
{
    int x;
    printf("Enter no. of natural numbers:");
    scanf("%d",&x);
    rnatural(x);
    return 0;
}
void rnatural(int x)
{
    if (x>=1)
    {
        printf("%d ",x);
        rnatural(x-1);
    }
}