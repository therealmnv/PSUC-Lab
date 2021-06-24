//STRONG NUMBERS
#include<stdio.h>
main()
{int num,unit,tens,sum=0,i,prod=1,x;
printf("Enter the number to check for a strong number:");
scanf("%d",&num);
x=num;

while(num>0)
{
    unit=num%10;
    for(i=unit;i>0;i--)
    {prod=prod*i;}
    sum=sum+prod;
    prod=1;
    num=num/10;
}

if(x==sum)
printf("It is a strong number!");
else
printf("It is not a strong number!");
}
