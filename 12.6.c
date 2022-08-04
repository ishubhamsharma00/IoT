//Write a recursive function to print first N even natural numbers in reverse order
#include<stdio.h>
void reven(int);
int main()
{
    int x;
    printf("Enter no. of even numbers:");
    scanf("%d",&x);
    reven(x);
    return 0;
}
void reven(int x)
{
    if (x>=1)
    {
        printf("%d ",2*x);
        reven(x-1);      
    }
}