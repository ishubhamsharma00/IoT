/*
Write a function in C to merge two arrays of the same size sorted in descending
order.
*/
#include<stdio.h>
void merge(int a[],int b[]);
void sort(int a[],int);
int main()
{
    int a[10],b[10],i;
    printf("Enter values in first array:");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    printf("Enter values in second array:");
    for(i=0;i<10;i++)
    scanf("%d",&b[i]);
    merge(a,b);
    return 0;
}
void sort(int a[],int x)
{
    int i,j,temp;
    for(i=0;i<x-1;i++)
    {
        for(j=i+1;j<x;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
void merge(int a[],int b[])
{
    int c[20],i;
    for(i=0;i<10;i++)
    {
        c[i]=a[i];
        c[10+i]=b[i];
    }
    sort(c,20);
    for(i=0;i<20;i++)
    printf("%d ",c[i]);
    printf("\n");
}