//Write a recursive function to print octal of a given decimal number
#include<stdio.h>
void octal(int);
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    octal(x);
    return 0;
}
void octal(int x)
{
    int r;
    if (x>0)
    {
        r=x%8;
        octal(x/8);
        printf("%d",r);
    }
}