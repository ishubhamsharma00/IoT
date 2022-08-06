//Write a function in C to count a total number of duplicate elements in an array.
#include<stdio.h>
int duplicate(int a[]);
void sort(int a[],int);
int main()
{
    int a[10];
    int i;
    printf("Enter values in array:");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    printf("Total no. of duplicate elements are:%d\n",duplicate(a));
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
int duplicate(int a[])
{
    sort(a,10);
    int count=1;
    int i=0,j=1,sum=0;
    while(i<10)
    {
        while(a[i]==a[j])
        {
            count++;
            j++;
        }
        printf("%d : %d times\n",a[i],count);
        if(count>1)
        {
            sum++;
        }
        i=j;
        j++;
        count=1;
    }
    return sum;
}