//Write a program to print the first N odd natural numbers in reverse order.
#include<stdio.h>
int main()
{
    int j;
    printf("Enter number of Odd Natural numbers to print in reverse:");
    scanf("%d",&j);
    while (j>=1)
    {
        printf("%d\n",2*j-1);
        j--;
    }
    return 0;
}