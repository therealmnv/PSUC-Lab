//GENERIC ROOT
#include<stdio.h>
main()
{int sum=0,sum_2=0,num,unit_1,unit_2,i,j;
printf("Enter number to check for generic root:");
scanf("%d",&num);

for(i=num;i>0;i=i/10)
{
    unit_1=i%10;
    sum=sum+unit_1;
}

for(j=sum;j>0;j=j/10)
{
    unit_2=j%10;
    sum_2=sum_2+unit_2;
}

printf("The generic root is %d",sum_2);



}
