/*Write a program to check whether a given number is an Armstrong number
or not*/
#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,z=0,count=0,i;
    printf("Enter a number:");
    scanf("%d",&x);
    y=x;
    while(x!=0)
    {
        x=x/10;
        count++;
    }
    x=y;
    while(x!=0)
    {
        i=x%10;
        x=x/10;
        z=pow(i,count)+z;
    }
    if(z==y)
    printf("%d is Armstrong number\n",y);
    else
    printf("%d is not Armstrong number\n",y);
}