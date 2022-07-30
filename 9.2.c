/*
Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,y,ch;
    printf("Enter two numbers:");
    scanf("%d %d",&x,&y);
    while(1)
    {
        printf("1. Addition:\n");
        printf("2. Subtraction:\n");
        printf("3. Multiplication:\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
    
        switch(ch)
        {
            case 1:
            printf("%d + %d = %d\n",x,y,x+y);
            break;

            case 2:
            printf("%d - %d = %d\n",x,y,x-y);
            break;

            case 3:
            printf("%d * %d = %d\n",x,y,x*y);
            break;

            case 4:
            printf("%.2f / %.2f = %.2f\n",(float)x,(float)y,(float)x/(float)y);
            break;

            case 5:
            exit(0);

            default:
            printf("Gadhe ho tum!\n");
        }
    }    
    return 0;
}