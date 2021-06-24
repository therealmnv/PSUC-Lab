#include<stdio.h>

void array_sum(int a[],int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("The sum of the elements in the array is %d",sum);
}

void main()
{   int a[100],i,n;

    printf("Enter number of elements you would like to enter:\n");
    scanf("%d",&n);

    printf("Enter the elements:\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    array_sum(a,n);
}
