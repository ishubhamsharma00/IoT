//Write a program to find second largest in an array.Take array values from the user.
#include<stdio.h>
void sort(int a[]);
int main()
{
    printf("Enter 10 numbers:");
    int a[10],i;
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    sort(a);
    for(i=0;i<10;i++)
    printf("%d ",a[i]);
    printf("\n");
    printf("Second largest number is: %d\n",a[8]);
    return 0;
}
void sort(int a[])
{
    int i,j,temp;
    for(i=0;i<9;i++)
    {
        for(j=i+1;j<10;j++)
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