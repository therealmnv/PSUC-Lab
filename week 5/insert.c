#include<stdio.h>
main()
{int a[100],n,i,val,x,flag=0,pos;


printf("Enter the number of elements in the array\n");
scanf("%d",&n);
printf("Enter the value of each element\n");

for(i=0;n>i;i++)
{
    scanf("%d",&a[i]);
}

printf("Enter the value and position of the number in the array to be added:\n");
scanf("%d %d",&val,&pos);

pos=pos-1;


for(i=n;i>pos;i--)
{a[i]=a[i-1];}

a[pos]=val;

printf("The new array is:\n");
for(i=0;i<=n;i++)
printf("%d\n",a[i]);


}
