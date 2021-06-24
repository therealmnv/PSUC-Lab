//COMPUTE THE ROOTS OF A QUADRATIC EQUATION USING SWITCH CASE
#include<stdio.h>
#include<math.h>
main()
{float a,b,c;
float disc,r_1,r_2,re,im;
int d;
printf("Enter the coefficient of x^2, coefficient of x and constant of the equation respectively\n");
scanf("%f %f %f",&a,&b,&c);
disc = b * b - 4 * a * c;

if (disc>0)
    d=1;
else if (disc==0)
    d=2;
else if (disc<0)
    d=3;

switch(d)
{
    case 1: r_1 = (-b+sqrt(b*b-4*a*c))/(2*a);
            r_2 = (-b-sqrt(b*b-4*a*c))/(2*a);
            printf("The roots are real and unequal and are equal to %f and %f",r_1,r_2);
            break;

    case 2: r_1 = (-b)/(2*a);
            printf("Both the roots are real and equal and are %f",r_1);
            break;

    case 3: re = (-b)/(2*a);
            im = (sqrt(-1*(b*b-4*a*c)))/(2*a);
            printf("The roots are imaginary and are equal to %f+%fi and %f-%fi",re,im,re,im);
            break;
}












}
