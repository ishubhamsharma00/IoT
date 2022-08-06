/*
Write a program to find the smallest number stored in an array of size 10. Take array
values from the user.
*/
#include<stdio.h>
int main()
{
    int a[10],i,s;
    printf("Enter 10 numbers:");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    s=a[0];
    for(i=0;i<9;i++)
    {
        if(s>a[i+1])
        s=a[i+1];
    }
    printf("Smallest number is %d\n",s);
    return 0;
}