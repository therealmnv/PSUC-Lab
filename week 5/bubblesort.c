#include<stdio.h>
#include<string.h>

main()
{int a[100],n,i,j,temp,x;
 char ch;
printf("Enter the number of elements in the array\n");
scanf("%d",&n);
printf("Enter the value of each element\n");

for(i=0;n>i;i++)
{
    scanf("%d",&a[i]);
}

printf("Enter character 'a' to sort in ascending order or 'd' for descending order:\n");
scanf("%c",&ch);
scanf("%c",&ch);

if(ch='a')
{
    x=0;
}
else if(ch='d')
{
    x=1;
}

switch(x)
    {
        case 0:
            for(i=0;i<n-1;i++)
            {
                for(j=0;j<n-i-1;j++)
                {
                    if(a[j]>a[j+1])
                    {
                        temp=a[j];
                        a[j]=a[j+1];
                        a[j+1]=temp;

                    }
                }
            }
            break;
        case 1:
            for(i=0;i<n-1;i++)
            {
                for(j=0;j<n-i-1;j++)
                {
                    if(a[j]<a[j+1])
                    {
                        temp=a[j];
                        a[j]=a[j+1];
                        a[j+1]=temp;

                    }
                }
            }
    }

printf("The arranged array is\n");

for(i=0;i<n;i++)
{
    printf("%d\n",a[i]);
}


}
