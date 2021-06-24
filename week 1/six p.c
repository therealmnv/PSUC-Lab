#include<stdio.h>

main()

{ float radius;
printf("Enter Radius: ");
scanf("%f",&radius);

float volume;
float area;

volume = (4 * 3.1416 * radius * radius * radius) / 3;
area = 4 * 3.1416 * radius * radius;

printf("For the given radius the volume is %f and the area is %f",volume,area);




}
