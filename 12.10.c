//Write a recursive function to print reverse of a given number
#include<stdio.h>
void rev(int);
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    rev(x);
    return 0;
}
void rev(int x)
{
    int r;
    if(x!=0)
    {
        r=x%10;
        printf("%d",r);
        rev(x/10);
    }
}