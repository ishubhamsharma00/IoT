//Write a program to print the first N natural numbers in reverse order
#include<stdio.h>
int main()
{
    int i;
    printf("Enter number on Natural numbers to print in reverse order:");
    scanf("%d",&i);
    while (i>=1)
    {
        printf("%d\n",i);
        i--;
    }
    return 0;
}