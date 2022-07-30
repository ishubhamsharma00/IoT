/*
Program to Convert even number into its upper nearest odd number
Switch Statement.
*/
#include<stdio.h>
int main()
{
    int x;
    printf("Enter even number:");
    scanf("%d",&x);
    switch(x%2==0)
    {
        case 1:
        printf("Nearest upper odd no. is %d\n",++x);
        break;

        case 0:
        printf("%d is not a even number\n",x);
    }
    return 0;
}