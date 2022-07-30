/*C program to find all roots of a quadratic equation
 using switch case*/
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float i,r;
    printf("Enter a,b,c in ax^2+bx+c:");
    scanf("%d %d %d",&a,&b,&c);
    switch(b*b-4*a*c>=0)
    {
        case 1:
        r=(-b+sqrt(b*b-4*a*c))/(2*a);
        printf("1st root is: %.2f\n",r);
        r=(-b-sqrt(b*b-4*a*c))/(2*a);
        printf("1st root is: %.2f\n",r);
        break;

        case 0:
        switch(b*b-4*a*c<0)
        {
            case 1:
            r=(-b/(2*a));
            i=b*b-4*a*c;
            printf("1st root is: %.4f+rt%.4f/%d\n",r,i,2*a);
            r=(-b/(2*a));
            i=-(b*b-4*a*c);
            printf("2nd root is: %.4f-rt%.4f/%d\n",r,i,2*a);
            break;
        }
    }
    return 0; 
}