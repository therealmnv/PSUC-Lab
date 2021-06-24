#include<stdio.h>
#include<string.h>
main()
{char a[10][20],m[100];
int res,i,j,n;
printf("Enter the number of names you want to enter:");
scanf("%d",&n);

printf("Enter names:");
for(i=0;i<n;i++)
{
    scanf("%s",&a[i]);
}

printf("\n");

for(i=0;i<n-1;i++)
{
    for(j=0;j<n-i-1;j++)
    {


        if((strcmp(a[j],a[j+1]))>0)
        {
            strcpy(m,a[j]);
            strcpy(a[j],a[j+1]);
            strcpy(a[j+1],m);
        }
    }
}

for(i=0;i<n;i++)
printf("%s\n",a[i]);


}
