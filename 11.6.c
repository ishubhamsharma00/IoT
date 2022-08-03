//Write a function to print all Prime numbers between two given numbers. (TSRN)
#include<stdio.h>
void prime(int,int);
int main()
{
    int x,y;
    printf("Enter two numbers:");
    scanf("%d %d",&x,&y);
    prime(x,y);
    return 0;
}
void prime(int x,int y)
{
    int i,count=0;
    //assuming x<y
    for(x++;x<y;x++)
    {
        for(i=1;i<=x;i++)
        {
            if(x%i==0)
            count++;
        }
        if(count<=2)
        printf("%d ",x);
        count=0;
    }
}