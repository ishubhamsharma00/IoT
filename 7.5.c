//Write a program to check whether two given numbers are co-prime
//numbers or not
#include<stdio.h>
int main()
{
    int x,y,hcf,i=1;
    printf("Enter two numbers:");
    scanf("%d %d",&x,&y);
    while(i<=x && i<=y)
    {
        if(x%i==0 && y%i==0)
        {
            hcf=i;
        }
        i++;
    }
    if(hcf==1)
    printf("%d and %d are coprime numbers\n",x,y);
    else
    printf("%d and %d are not-coprime numbers\n",x,y);
    return 0;
}