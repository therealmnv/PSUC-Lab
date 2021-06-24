//TO FIND THE SMALLEST OF 3 NUMBERS USING CONDITIONAL OPERATOR
#include<stdio.h>
main()
{float a,b,c;
float x;
printf("Enter three numbers");
scanf("%f %f %f",&a,&b,&c);
x = (a<b)?(a<c)?a:c:(b<c)?b:c;
printf("The smallest is %f",x);

}
