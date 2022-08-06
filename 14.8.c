/*
Write a program to find the second smallest number in an array.Take array values
from the user.
*/
#include<stdio.h>
void sort(int a[]);
int main()
{
    printf("Enter 10 numbers:");
    int a[10],i;
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    sort(a);
    for(i=0;i<10;i++)
    printf("%d ",a[i]);
    printf("\n");
    printf("Second smallest number is: %d\n",a[1]);
    return 0;
}
void sort(int a[])
{
    int i,j,temp;
    for(i=0;i<9;i++)
    {
        for(j=i+1;j<10;j++)
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