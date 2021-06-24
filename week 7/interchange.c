#include<stdio.h>
main()
{int a[10][10],m,n,i,j,temp,x,s_1,s_2;
char ch;

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

printf("\nWould you like to interchange rows (r) or columns (c)");
scanf("%c",&ch);
scanf("%c",&ch);

if(ch=='r' || ch=='R')
{
    x=0;
}

else if(ch=='c' || ch=='C')
{
    x=1;
}

switch(x)
{
    case(0):
        printf("Which two rows would you like to interchange?\n");
        scanf("%d %d",&s_1,&s_2);

        s_1=s_1-1;
        s_2=s_2-1;

            for(j=0;j<n;j++)
            {
                temp=a[s_1][j];
                a[s_1][j]=a[s_2][j];
                a[s_2][j]=temp;
            }

printf("\nThe row interchanged matrix is:\n");



for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}

break;

    case(1):
        printf("Which two columns would you like to interchange?\n");
        scanf("%d %d",&s_1,&s_2);

        s_1=s_1-1;
        s_2=s_2-1;

            for(i=0;i<m;i++)
            {
                temp=a[i][s_1];
                a[i][s_1]=a[i][s_2];
                a[i][s_2]=temp;
            }

printf("\nThe column interchanged matrix is:\n");



for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}

break;

}


}
