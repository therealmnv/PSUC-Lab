#include<stdio.h>

void Largest(int n)
{
    int i,x,greatest=0;
    printf("Enter the numbers:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        if(x>greatest)
        {
            greatest=x;
        }
    }

    printf("The largest number is %d",greatest);
}

void main()
{
    int n;
    printf("Enter the number of elements you would like to enter:");
    scanf("%d",&n);
    Largest(n);
}
