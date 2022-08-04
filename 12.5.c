//Write a recursive function to print first N even natural numbers
#include<stdio.h>
void even(int);
int main()
{
    int x;
    printf("Enter no. of even numbers:");
    scanf("%d",&x);
    even(x);
    return 0;
}
void even(int x)
{
    if (x>1)
    even(x-1);
    printf("%d ",2*x);
}