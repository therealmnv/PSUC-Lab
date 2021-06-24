#include<stdio.h>
main()
{int a[10][10],b[10][10],c[10][10],m,n,p,q,i,j,k;

printf("Enter number of rows and columns of the first matrix:");
scanf("%d %d",&m,&n);

printf("Enter number of rows and columns of the second matrix:");
scanf("%d %d",&p,&q);

if(n!=p)

{

    printf("Multiplication not possible");
}


else
{
    printf("Enter the elements in the first matrix:\n");

for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        scanf("%d",&a[i][j]);
    }

}


    printf("Enter the elements in the second matrix:\n");


for(i=0;i<p;i++)
{
    for(j=0;j<q;j++)
    {
        scanf("%d",&b[i][j]);
    }
}



for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            c[i][j]=0;
            for(k=0;k<n;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }

        }
    }



printf("\nThe new matrix is:\n");



for(i=0;i<m;i++)
{
    for(j=0;j<q;j++)
    {
        printf("%d\t",c[i][j]);
    }
    printf("\n");
}

}

}
