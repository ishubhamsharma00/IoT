/*
Write a function to calculate the number of combinations one can make from n items
and r selected at a time. (TSRS)
*/
#include<stdio.h>
int comb(int,int);
int fac(int);
int main()
{
    int n,r,total;
    printf("Enter no. of items and no. of selected items:");
    scanf("%d %d",&n,&r);
    if(n>=r)
    printf("Number of possible combinations are %d\n",comb(n,r));
    return 0;
}
int fac(int n)
{
    int f;
    if(n==1 || n==0)
    return (1);
    f=n*fac(n-1);
    return (f);
}
int comb(int n,int r)
{
    return (fac(n)/(fac(r)*fac(n-r)));
}