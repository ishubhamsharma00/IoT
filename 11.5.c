//Write a function to print first N prime numbers (TSRN)
#include<stdio.h>
void primeNos(int);
int prime(int);
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    primeNos(x);
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
void primeNos(int x)
{
    int i=1,j=1;
    while(i<=x)
    {
        if(prime(j)==1)
        {
            printf("%d ",j);
            i++;
        }    
        j++;
    }
}

