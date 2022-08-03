/*Write a function to check whether a given number contains a given digit or not.
(TSRS)*/
#include<stdio.h>
int check(int,int);
int main()
{
    int x,y,z;
    printf("Enter a number and a digit to check:");
    scanf("%d %d",&x,&y);
    z=check(x,y);
    if(z==1)
    printf("%d contains %d\n",x,y);
    else
    printf("%d doesn't contain %d\n",x,y);
    return 0;
}
int check(int x,int y)
{
    int r;
    while(x!=0)
    {
        r=x%10;
        if(r==y)
        return(1);
        else
        x=x/10;
    }
    return 0;
}