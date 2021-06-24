#include<stdio.h>
#include<math.h>
main()
{int num,unit,csum=0,x;
printf("Enter the number to check for armstrong number:\n");
scanf("%d",&num);

x=num;

while(num!=0)
{
    unit=num%10;
    csum=csum+pow(unit,3);
    num=num/10;
}

if(x==csum)
printf("The number is an armstrong number");
else
printf("The number is not an armstrong number");








}
