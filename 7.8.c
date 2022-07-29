//Write a program to find next Prime number of a given number
#include<stdio.h>
int main()
{
    int x,i,count;
    printf("Enter a number:");
    scanf("%d",&x);
    x++;
    while(count!=2)
    {
        count=0;
        for(i=1;i<=x;i++)
        {
            if(x%i==0)
            {count++;
            printf("a");}
        }
        if(count<=2)
        {
            printf("%d\n",x);
        }
        x++;

    }  
    return 0;  
}