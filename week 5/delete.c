#include<stdio.h>
main()
{int a[100],n,i,val,x,flag=0,num,pos;
printf("Enter the number of elements in the array\n");
scanf("%d",&n);
printf("Enter the value of each element\n");

for(i=0;n>i;i++)
{
    scanf("%d",&a[i]);
}

printf("Enter the number in the array to be deleted:\n");
scanf("%d",&num);

{
    for(i=0;i<n;i++)
    {
        if(a[i]==num)
        {
            pos=i;
            flag=1;
        }

    }
}

if(flag==0)
        {
            printf("Number not found\n");
            n=n+1;
        }


for(i=pos;i<n;i++)
{a[i]=a[i+1];}



printf("The new array is:\n");
for(i=0;i<n-1;i++)
printf("%d\n",a[i]);




}
