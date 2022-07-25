/*Write a program to print MySirG N times on the screen*/
#include<stdio.h>
int main()
{
    int i,j=0;
    printf("Enter number of times to print MySirG:");
    scanf("%d",&i);
    while (j<i)
    {
        printf("MySirG\n");
        j++;
    }
    return 0;
}