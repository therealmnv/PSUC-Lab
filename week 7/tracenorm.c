#include<stdio.h>
#include<math.h>
main()
{int a[10][10],m,n,i,j,sum=0;
float norm=0.0;
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
            norm=norm+(a[i][j])*(a[i][j]);
        }
    }

norm=sqrt(norm);

if(m==n)
{for(i=0;i<n;i++)
{
    sum=sum+a[i][i];

}
printf("The trace is %d and the norm is %f",sum,norm);
}


else
{
    printf("The trace is not defined and the norm is %f",norm);
}
}
