//PALINDROMES
#include<stdio.h>
main()
{int num,unit,reverse=0,x;
printf("Enter the number to check for palindrome:\n");
scanf("%d",&num);

x=num;

while(num>0)
{
    unit=num%10;
    reverse=reverse*10+unit;
    num=num/10;
}

printf("The reverse of the number is %d\n",reverse);

if(x==reverse)
printf("The number is a palindrome");
else
printf("The number is not a palindrome");



}
