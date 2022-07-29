//Write a program to print all Prime numbers under 100
#include<stdio.h>
int main()
{
    int i,j,count=0;
    for(i=1;i<=100;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            count++;
        }
        if(count<=2)
        printf("%d\n",i);
        count=0;
    }
    return 0;
}