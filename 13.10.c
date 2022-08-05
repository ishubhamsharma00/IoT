//Write a program in C to calculate the power of any number using recursion.
#include<stdio.h>
int power(int,int);
int main()
{
    int x,y;
    printf("Enter base number and its exponent:");
    scanf("%d %d",&x,&y);
    printf("%d to power %d is %d\n",x,y,power(x,y));
    return 0;
}
int power(int x,int y)
{
    int p;
    if(y==0)
    return 1;
    p=x*power(x,y-1);
    return p;
}