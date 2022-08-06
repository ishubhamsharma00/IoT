//Write a function to find the smallest number from the given array of any size. (TSRS)
#include<stdio.h>
int small(int a[],int);
int main()
{
    int x;
    printf("Enter size of array:");
    scanf("%d",&x);
    int a[x];
    printf("Enter values in array:");
    for(int i=0;i<x;i++)
    scanf("%d",&a[i]);
    printf("Smallest no. is:%d\n",small(a,x));
    return 0;
}
int small(int a[],int x)
{
    int s,i;
    s=a[0];
    for(i=0;i<x;i++)
    {
        if(a[i]<s)
        s=a[i];
    }
    return s;
}