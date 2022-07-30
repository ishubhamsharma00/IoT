/*
Write a program which takes the day number of a week and displays a
unique greeting message for the day.
*/
#include<stdio.h>
int main()
{
    int x;
    printf("Enter day no. of week number:");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        printf("Have a Mood-freshing Monday!\n");
        break;

        case 2:
        printf("Have a Truthful Tuesday\n");
        break;

        case 3:
        printf("Money Wending Wednesday!!\n");
        break;

        case 4:
        printf("Jai Gurudev\n");
        break;

        case 5:
        printf("Have a chilling Friday\n");
        break;

        case 6:
        printf("Happy Weekend\n");
        break;

        case 7:
        printf("Its SUNDAYYYY!\n");
        break;

        default:
        printf("Wrong Input!\n");
        break;
    }
    return 0;
}        