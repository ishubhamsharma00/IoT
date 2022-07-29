//Write a program to calculate HCF of two numbers
#include<stdio.h>
int main()
{
    int x,y,hcf,i=1;
    printf("Enter two numbers:");
    scanf("%d %d",&x,&y);
    while(i<=x && i<=y)
    {
        if(x%i==0 && y%i==0)
        {
            hcf=i;
        }
        i++;
    }
    printf("HCF of %d and %d is %d\n",x,y,hcf);
    return 0;
}