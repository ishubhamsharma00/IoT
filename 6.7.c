//Write a program to count digits in a given number
#include<stdio.h>
int main()
{
    long int count=0,y,x;
    printf("Enter a number:");
    scanf("%li",&x);
    y=x;
    while(x!=0)
    {
        x=x/10;
        count++;
    }
    printf("Number of digits in %li is %li\n",y,count);
    return 0;
}