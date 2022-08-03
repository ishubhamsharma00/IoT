//Write a function to check whether a given number is Prime or not. (TSRS)
#include<stdio.h>
int prime(int);
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    switch(prime(x))
    {
        case 1:
        printf("%d is prime\n",x);
        break;
         
        case 0:
        printf("%d is non prime\n",x);
    }
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