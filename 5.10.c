//Write a program to print a table of N.
#include<stdio.h>
int main()
{
    int x=1,y;
    printf("Enter number for table:");
    scanf("%d",&y);
    while(x<=10)
    {
        printf("%d X %d = %d\n",y,x,y*x);
        x++;
    }
    return 0;
}