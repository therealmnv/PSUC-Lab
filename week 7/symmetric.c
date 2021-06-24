#include<stdio.h>
main()
{int a[10][10],m,n,i,j,flag=0;

printf("Enter number of rows and columns of the matrix:");
scanf("%d %d",&m,&n);

if(m!=n)
{
    printf("Unsymmetrical matrix");
}

else if(m==n)
{ printf("Enter the elements:\n");
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
            if(a[i][j]==a[j][i])
            {
                continue;
            }


            else if(a[i][j]!=a[j][i])
            {
                printf("Unsymmetrical matrix");
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            break;
        }
    }

}


if(flag==0)
{
    printf("Symmetric matrix");
}

}
