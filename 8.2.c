/*
     *
    **
   ***
  ****
 *****    
*/
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=6-i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
/*1    5               j>=5    j>=6-1
2    4 5             j>=4    j>=6-2
3    3 4 5           j>=3
4    2 3 4 5         j>=2
5    1 2 3 4 5       j>=1*/