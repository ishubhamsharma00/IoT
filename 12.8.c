//Write a recursive function to print binary of a given decimal number
#include<stdio.h>
void binary(int);
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    binary(x);
    return 0;
}
void binary(int x)
{
    int r;
    if (x>0)
    {
        r=x%2;
        binary(x/2);
        printf("%d",r);
    }
}