//Write a program to check whether a given number is there in the Fibonacci
//series or not.
#include<stdio.h>
int main()
{
    int i,a=-1,b=1,c=0;
    printf("Enter a number:");
    scanf("%d",&i);
    while(c<i)
    {
        c=a+b;
        a=b;
        b=c;
    }
    if(c==i)
    printf("%d is in fibonnaci series",i);
    else
    printf("%d is not in fibonnacii series",i);
    printf("\n");
    return 0;
}