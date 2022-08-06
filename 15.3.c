//Write a function to sort an array of any size. (TSRS)
#include<stdio.h>
void sort(int a[],int x)
{
    int i,j,temp;
    for(i=0;i<x-1;i++)
    {
        for(j=i+1;j<x;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

}
int main()
{
    int x;
    printf("Enter size of array:");
    scanf("%d",&x);
    printf("Enter numbers:");
    int a[x],i;
    for(i=0;i<x;i++)
    scanf("%d",&a[i]);
    sort(a,x);
    for(i=0;i<x;i++)
    printf("%d ",a[i]);
    printf("\n");
    return 0;
}