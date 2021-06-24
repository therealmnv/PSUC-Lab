#include<stdio.h>
main()
{ float u,t,a,s;
printf("Enter values of initial velocity (u), time (t) and acceleration(a) respectively to calculate the displacement:");
scanf("%f %f %f",&u,&t,&a);

s = u*t + (a*t*t)/2;

printf("The displacement is %f",s);

}
