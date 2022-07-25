//Write a program to print the first N odd natural numbers
#include<stdio.h>
int main()
{
    int i,j=1;
    printf("Enter number of Odd Natural numbers to print:");
    scanf("%d",&i);
    while (j<=i)
    {
        printf("%d\n",2*j-1);
        j++;
    }
    return 0;
}