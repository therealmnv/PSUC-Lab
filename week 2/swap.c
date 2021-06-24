//SWAP 2 NUMBERS WITHOUT USING THIRD VARIABLE
#include<stdio.h>
main()
{int a,b;
printf("Enter two numbers:");
scanf("%d %d",&a,&b);

a=a+b;
b=a-b;
a=a-b;

printf("The numbers are %d and %d",a,b);
}
