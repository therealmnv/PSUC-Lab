#include<stdio.h>

void count(int a[][10],int m,int n)
{
int i,j,ze=0,on=0,diag=0;

if(m==n)
{
    for(i=0;i<m;i++)
    diag=diag+a[i][i];
}

for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        if(a[i][j]==1)
        {
            on=on+1;
        }

        else if(a[i][j]==0)
        {
            ze=ze+1;
            a[i][j]=diag;
        }
    }
}

printf("The number of zero's is %d and one's is %d\n",ze,on);

printf("The matrix is\n");

for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}
}

void main()
{int a[100][100],i,j,m,n;
printf("Enter the number of rows and columns respectively:\n");
scanf("%d %d",&m,&n);
printf("Enter the elements\n");

for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        scanf("%d",&a[i][j]);
    }
}

count(a,m,n);

}


