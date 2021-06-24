#include<stdio.h>

void CornerSum(int a[10][10],int r,int c)
{
    int sum;
    sum=a[0][0]+a[0][c-1]+a[r-1][0]+a[r-1][c-1];
    printf("The sum is %d",sum);
}

void main()
{
    int a[10][10],r,c,i,j;

    printf("Enter the number of rows and columns respectively:\n");
    scanf("%d%d",&r,&c);

    printf("\nEnter the elements:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    CornerSum(a,r,c);
}
