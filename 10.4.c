//Write a function to print first N natural numbers (TSRN)
#include<stdio.h>
void natural(int);
int main()
{
    int x;
    printf("Enter no. of numbers:");
    scanf("%d",&x);
    natural(x);
    return 0;
}
void natural(int x)
{
    if(x>0)
    {   
        natural(x-1);
        printf(" %d",x);
    }
}