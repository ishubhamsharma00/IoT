//Write a program to print all Prime numbers between two given numbers
#include<stdio.h>
int main()
{
    int i,j,x,count=0;
    printf("Enter two numbers:");
    scanf("%d %d",&i,&j);
    //assuming i<j
    for(;i<=j;i++)
    {
        for(x=1;x<=i;x++)
        {
            if(i%x==0)
            count++;
        }
        if(count<=2)
        printf("%d ",i);
        count=0;
    }
    return 0;
}