/*
Write a function to print all prime factors of a given number. For example, if the
number is 36 then your result should be 2, 2, 3, 3. (TSRN)
*/
#include<stdio.h>
void primef(int);
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    primef(x);
    return 0;
}
void primef(int x)
{
    int i=2;
    while(x!=1)
    {
        if(x%i==0)
        {   
            printf("%d ",i);
            x=x/i;
        }
        else
        i++;
    }
}