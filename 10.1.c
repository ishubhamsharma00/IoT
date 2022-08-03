//Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>
float area(int);
int main()
{
    int r;
    printf("Enter radius of circle in cm:");
    scanf("%d",&r);
    printf("Area of circle is %.2f sq.cm\n",area(r));
    return 0;
}
float area(int r)
{
    return (3.14*r*r);
}