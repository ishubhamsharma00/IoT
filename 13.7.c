//Write a recursive function to calculate HCF of two numbers
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
    if(x%y==0)
    return y;
    else if(y%x==0)
    return x;
    else if(x>y)
    return(hcf(x%y,y));
    else
    return(hcf(x,y%x));
}