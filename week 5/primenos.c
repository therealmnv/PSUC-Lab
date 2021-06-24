#include<stdio.h>
main()
{int a[100],n,i,x,flag=0;
printf("Enter the number of elements in the array\n");
scanf("%d",&n);
printf("Enter the value of each element\n");

for(i=0;n>i;i++)
{
    scanf("%d",&a[i]);
}

printf("The prime numbers present in the array are: ");

for(i=0;n>i;i++)

{

for(x=2;a[i]>x;x++)
    {flag=0;

    if(a[i]%x==0)
    {flag=1;
    break;}

    }
if(flag==0 && a[i] != 1 && a[i] != 0)
printf("%d ",a[i]);


}


}
