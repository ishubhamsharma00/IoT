//Write a program to print all Armstrong numbers under 1000
#include<stdio.h>
int main()
{
    int i=0,r,j,arm;
    while(i<1000)
    {
       if(i<10)
        {
            printf("%d\t",i);
        }
        else if(i>=10 && i<100)
        {
            j=i;
            r=i%10;
            j=j/10;
            arm=r*r+j*j;
            if(arm==i)
            printf("%d\t",i);
          
        }
        else
        {
            j=i;
            r=j%10;
            j=j/10;
            arm=r*r*r;
            r=j%10;
            j=j/10;
            arm=arm+r*r*r+j*j*j;
            if(arm==i)
            printf("%d\t",i);
           
        }
        i++;
    }
    return 0;
}