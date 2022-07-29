//Write a program to print first N terms of Fibonacci series
#include<stdio.h>
int main()
{
    int i,j,a=-1,b=1,c;
    printf("Enter no. of term of Fibonnaci series:");
    scanf("%d",&i);
    for(j=0;j<i;j++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\t",c);
    }
   
    printf("\n");
    return 0;
}