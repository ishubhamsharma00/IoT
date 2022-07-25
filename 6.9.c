//Write a program to calculate LCM of two numbers
#include<stdio.h>
int main()
{
    int x,y,i=1;
    printf("Enter two numbers:");
    scanf("%d %d",&x,&y);
    if(x==0 || y==0)
    {printf("LCM can't be found\n");}
    else
    {
       while(i)
       {
           if(i%x==0 && i%y==0)
           {
               printf("LCM of %d and %d is %d\n",x,y,i);
               i=0;
           }
           else
           i++;
       }
    }
    return 0;
}