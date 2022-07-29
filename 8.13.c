/*
ABCDEFGFEDCBA
ABCDEF FEDCBA
ABCDE   EDCBA
ABCD     DCBA
ABC       CBA
AB         BA
A           A
*/
#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=7;i++)
    {
        k='A';
        for(j=1;j<=13;j++)
        {
            if((j>=1 && j<=8-i) || (j>=6+i && j<=13))
            {
                if(j<=7)
                printf("%c",k++);
                else
                {
                    if(i==1 && j==8)
                    k--;
                    printf("%c",--k);
                }    
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}