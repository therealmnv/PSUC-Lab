#include<stdio.h>
main()
{int a[10][10],m,n,i,j,counter=0,sear;

printf("Enter number of rows and coloumns of the matrix:");
scanf("%d %d",&m,&n);

printf("Enter the elements:\n");

for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        scanf("%d",&a[i][j]);
    }
}

printf("Enter the element to be counted: ");
scanf("%d",&sear);

for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        if(sear==a[i][j])
        {
            counter++;
        }
    }
}

printf("The number of occurrences is %d",counter);
}
