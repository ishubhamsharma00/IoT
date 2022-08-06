/*
Write a program to find the greatest number stored in an array of size 10. Take array
values from the user.
*/
#include<stdio.h>
int main()
{
    int a[10],i,g;
    printf("Enter 10 numbers:");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    g=a[0];
    for(i=0;i<9;i++)
    {
        if(g<a[i+1])
        g=a[i+1];
    }
    printf("Greatest number is %d\n",g);
    return 0;
}