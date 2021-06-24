//FIND LARGEST OF 3 NUMBERS
#include<stdio.h>
main()
{float a,b,c;

printf("Enter the three numbers to be compared in the order A,B and C respectively:\n");

scanf("%d %d %d",&a,&b,&c);

if (a>b)
{
   if (a>c)
    printf("A is the greatest");
   else
    printf("C is the greatest");


}

else
{
    if (b>c)
        printf("B is the greatest");
        else
        printf("C is the greatest");
}


}






