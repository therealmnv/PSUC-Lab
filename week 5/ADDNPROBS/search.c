#include<stdio.h>
main()
{int a[100],n,i,val,x,pos,num,flag=0;
printf("Enter the number of elements in the array\n");
scanf("%d",&n);
printf("Enter the value of each element\n");

for(i=0;n>i;i++)
{
    scanf("%d",&a[i]);
}

printf("Enter element to search for:\n");
scanf("%d",&num);

for(i=0;i<n;i++)
{
    if(a[i]==num)
    {
        pos=i;
        flag=1;
    }

}

if (flag==0)
    {
        printf("Number not found\n");

    }

pos=pos+1;

printf("The position of the element is %d",pos);



}
