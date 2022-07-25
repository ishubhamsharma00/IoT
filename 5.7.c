//Write a program to print the first N even natural numbers in reverse order
#include<stdio.h>
int main()
{
    int i;
    printf("Enter number of even natural numbers to print in reverse order:");
    scanf("%d",&i);
    while (i>=1)
    {
        printf("%d\n",2*i);
        i--;
    }
    return 0;
}