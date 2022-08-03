//Write a function to print PASCAL Triangle. (TSRN)
#include<stdio.h>
int comb(int,int);
int fac(int);
void pascal(int);
int main()
{
    int x;
    printf("Enter last level of pascal triangle required:");
    scanf("%d",&x);
    pascal(x);
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
void pascal(int x)
{
    int i,j,n;
    for(i=0;i<=x;i++)
    {
        n=-x+i;
        for(j=0;j<=i;j++)
        {
            while(n!=0)
            {
                printf(" ");
                n++;
            }    
            printf("%d ",comb(i,j));
        }
        printf("\n");
    }
}
/* 
     1
    1 1
   1 2 1
  1 3 3 1
 1 4  6  4 1 
1 5 10 10 5 1
*/