//Write a program to print cubes of the first N natural numbers
#include<stdio.h>
int main()
{
    int i=1,j;
    printf("Enter no. of cubes of natural number needed:");
    scanf("%d",&j);
    while (i<=j)
    {
        printf("%d\n",i*i*i);
        i++;
    }
    return 0;
}