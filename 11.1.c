//Write a function to calculate LCM of two numbers. (TSRS)
#include<stdio.h>
int lcm(int,int);
int main()
{
    int x,y;
    printf("Enter two numbers:");
    scanf("%d %d",&x,&y);
    printf("Lcm of %d and %d is %d\n",x,y,lcm(x,y));
    return 0;
}
int lcm(int x,int y)
{
    int i=1;
    while(1)
       {
           if(i%x==0 && i%y==0)
           return (i);
           else
           i++;
       }
}