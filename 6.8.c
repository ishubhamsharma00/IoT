//Write a program to check whether a given number is a Prime number or not
#include<stdio.h>
int main()
{
    int x,i=1,count=0;
    printf("Enter a number:");
    scanf("%d",&x);
    while(i<=x)
    {
        if(x%i==0)
        count++;
        i++;
    }
    if(count<=2)
    printf("%d is Prime number\n",x);
    else
    printf("%d is not a prime number\n",x);
    return 0;
}