#include<stdio.h>
main()
{int a,i=1;

printf("Enter a number greater than 3:");
scanf("%d",&a);

while (a>i)
{
if(i==3)
break;

printf("%d\n",i);

i++;}

i=1;
printf("\nand\n\n");

while (a>=i)
{


if(i==3)
{
    i++;
    continue;
}


printf("%d\n",i);

i++;}
}


