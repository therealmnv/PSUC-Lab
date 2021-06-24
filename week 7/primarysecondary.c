#include<stdio.h>
main()
{int a[10][10],m,n,i,j,temp[10][10];

printf("Enter number of rows and columns of the matrix:");
scanf("%d %d",&m,&n);

printf("Enter the elements:\n");

for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        scanf("%d",&a[i][j]);
    }

}

for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        if(i==j)
        {
            temp[i][j]=a[i][j];
            a[i][j]=a[i][n-i-1];
            a[i][n-i-1]=temp[i][j];
        }
    }
}

printf("\nThe new matrix is:\n");

for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}
}
