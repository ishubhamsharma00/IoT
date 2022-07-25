//Write a program to print the first N even natural numbers
#include<stdio.h>
int main()
{
    int i,j=1;
    printf("Enter number of even natural numbers to print:");
    scanf("%d",&i);
    while (j<=i)
    {
        printf("%d\n",2*j);
        j++;
    }
    return 0;
}