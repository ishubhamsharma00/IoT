//Write a function to find the greatest number from the given array of any size. (TSRS)
#include<stdio.h>
int great(int a[],int);
int main()
{
    int x;
    printf("Enter size of array:");
    scanf("%d",&x);
    int a[x];
    printf("Enter values in array:");
    for(int i=0;i<x;i++)
    scanf("%d",&a[i]);
    printf("Greatest no. is:%d\n",great(a,x));
    return 0;
}
int great(int a[],int x)
{
    int g,i;
    g=a[0];
    for(i=0;i<x;i++)
    {
        if(a[i]>g)
        g=a[i];
    }
    return g;
}