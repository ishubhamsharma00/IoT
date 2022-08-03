//Write a function to calculate simple interest. (TSRS)
#include<stdio.h>
float si(int,int,int);
int main ()
{
    float p,t,r,i;
    printf("Enter Principle,Time and Rate of interest:");
    scanf("%f %f %f",&p,&t,&r);
    i=si(p,t,r);
    printf("Simple Interest is: %.2f",i);
    return 0;
}
float si(int p,int t,int r)
{
    return((p*t*r)/100);
}