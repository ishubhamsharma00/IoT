/*Write a program to print the first N natural numbers.*/
#include<stdio.h>
int main()
{
    int i=1,j;
    printf("Enter no of natural numbers to print:");
    scanf("%d",&j);
    while (i<=j)
    {
        printf("%d\n",i);
        i++;
    }
    return 0;
}