/*
Write a function to rotate an array by n position in d direction. The d is an indicative
value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )
*/
#include<stdio.h>
void rotate(int a[],int,int,int);
int main()
{
    int x,y,z;
    printf("Enter size of array:");
    scanf("%d",&x);
    printf("Enter numbers:");
    int a[x],i;
    for(i=0;i<x;i++)
    scanf("%d",&a[i]);
    printf("\n Enter 1 for right rotation, anything else for left rotation:");
    scanf("%d",&y);
    printf("Enter positions to rotate:");
    scanf("%d",&z);
    rotate(a,x,z,y);
    for(i=0;i<x;i++)
    printf("%d ",a[i]);
    printf("\n");
    return 0;
}
void rotate(int a[],int x,int z,int y)
{
    int temp,i,j;
    if(y==1)
    {
        for(j=1;j<=z;j++)
        {
            temp=a[x-1];
            for(i=x-1;i>0;i--)
            a[i]=a[i-1];
            a[0]=temp;
        }
    }
    else
    {
        for(j=1;j<=z;j++)
        {
            temp=a[0];
            for(i=0;i<x-1;i++)
            a[i]=a[i+1];
            a[x-1]=temp;
        }
    }
}