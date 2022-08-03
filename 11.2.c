//Write a function to calculate HCF of two numbers. (TSRS)
#include<stdio.h>
int hcf(int,int);
int main()
{
    int x,y;
    printf("Enter two numbers:");
    scanf("%d %d",&x,&y);
    printf("HCF of %d and %d is %d\n",x,y,hcf(x,y));
    return 0;
}
int hcf(int x,int y)
{
    int i=1,h;
    while(i<=x && i<=y)
    {
        if(x%i==0 && y%i==0)
        h=i;
        i++;
    }
    return (h);
}