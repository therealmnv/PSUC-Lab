#include<stdio.h>
#include<math.h>

main()

{ float principle;
  float rate;
  float time;

  printf("Enter The Principle ");
  scanf("%f",&principle);
  printf("Enter The Rate Of Interest ");
  scanf("%f",&rate);
  printf("Enter The Time For Which Interest Is To Be Calculated ");
  scanf("%f",&time);

  float simple;
  float compound;

  simple = (principle * rate * time) / 100;
  compound = principle * pow(1 + rate / 100,time) - principle;

  printf("The Simple Interest Is %f \n",simple);
  printf("The Compound Interest Is %f ",compound);



}
