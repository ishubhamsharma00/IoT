/*
Write a function to find the first occurrence of adjacent duplicate values in the array.
Function has to return the value of the element.
*/
#include<stdio.h>
int duplicate(int a[]);
int main()
{
    int a[10],i;
    printf("Enter values in array:");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    printf("%d is repeated adjacently in our array\n",duplicate(a));
    return 0;
}
int duplicate(int a[])
{
    int i;
    for(i=0;i<9;i++)
    {
        if(a[i]==a[i+1])
        return a[i];
    }
    return 0;
}