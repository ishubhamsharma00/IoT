/*
Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,ch,temp;
    printf("Enter sides of triangle:");
    scanf("%d %d %d",&a,&b,&c);
    do
    {
        if(a+b>=c && a+c>=b && b+c>=a)
        {
            printf("1. Check whether a given set of three numbers are lengths of an isosceles triangle or not\n");
            printf("2. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not\n");
            printf("3. Check whether a given set of three numbers are equilateral triangle or not\n");
            printf("4.Exit\n");
            printf("Enter your Choice:");
            scanf("%d",&ch);
            {switch(ch)
            {
                case 1:
                if(a==b || a==c || b==c)
                printf("It is isosceles triangle\n");
                else
                printf("It is not an isosceles triangle\n");
                break;

                case 2:
                if(a>b)
                {
                    if(a>c)
                    a=a;
                    else
                    {
                        temp=a;
                        a=c;
                        c=temp;
                    }    
                }
                else
                {
                    if(b>c)
                    {
                        temp=a;
                        a=b;
                        b=temp;
                    }    
                    else
                    {
                        temp=a;
                        a=c;
                        c=temp;
                    }    
                }
                if(a*a==((b*b)+(c*c)))
                printf("This is right angled triangle\n");
                else
                printf("This is not a right angled triangle\n");
                break;

                case 3:
                if(a==b && b==c)
                printf("It is an equilateral triangle\n");
                else
                printf("It is not an equilateral triangle\n");
                break;

                case 4:
                exit(0);
            }
            }
        }    
        else
        {printf("This is not even a triangle\n"); 
        exit(0);}   
    } while (1);
    return 0;
}