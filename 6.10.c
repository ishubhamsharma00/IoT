//Write a program to reverse a given number
#include<stdio.h>
int main()
{
    int x,r,y,num=0;
    printf("Enter a number:");
    scanf("%d",&x);
    y=x;
    do
    {
        r=x%10;
        num=num*10+r;
        x=x/10;
    }
    while(x);
    printf("Reverse of %d is %d\n",y,num);
    return 0;
}