//Write a function in C to count the frequency of each element of an array.
#include<stdio.h>
void frequency(int a[]);
void sort(int a[],int);
int main()
{
    int a[10];
    int i;
    printf("Enter values in array:");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    frequency(a);
    return 0;
}
void sort(int a[],int x)
{
    int i,j,temp;
    for(i=0;i<x-1;i++)
    {
        for(j=i+1;j<x;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

}
void frequency(int a[])
{
    sort(a,10);
    int count=1;
    int i=0,j=1;
    while(i<10)
    {
        while(a[i]==a[j])
        {
            count++;    
            j++;
        }
        printf("%d : %d\n",a[i],count);
        i=j;
        j++;
        count=1;
    }
}