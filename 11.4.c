//Write a function to find the next prime number of a given number. (TSRS)
#include<stdio.h>
int nprime(int);
int prime(int);
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    printf("Next prime no. of %d is %d\n",x,nprime(x));
    return 0;
}
int prime(int x)
{
    int count=0,i;
    for(i=1;i<=x;i++)
    {
        if(x%i==0)
        count++;
    }
    if(count<=2)
    return 1;
    else
    return 0;
}
int nprime(int x)
{
    int i=0;
    while(i!=1)
    {
        x++;
        i=prime(x);
    }
    return (x);
}