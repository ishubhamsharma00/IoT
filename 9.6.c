/*Program to check whether a year is a leap year or not. Using switch
statement*/
#include<stdio.h>
int main()
{
    int year,y;
    printf("Enter year:");
    scanf("%d",&year);
    y= ((year%100==0 && year%400==0) || (year%4==0)&&(year%100!=0));
    switch(y)
    {
        case 1:
        printf("%d is leap year\n",year);
        break;

        case 0:
        printf("%d is not a leap year\n",year);
        break;

        default:
        printf("%d is not a leap year\n",year);
    }
    return 0;
}