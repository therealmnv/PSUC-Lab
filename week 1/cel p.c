#include<stdio.h>
main()
{ float fahrenheit;

  printf("Enter the temperature in fahrenheit: ");
  scanf("%f",&fahrenheit);

  float celcius;
  celcius = ((fahrenheit - 32) * 5) / 9;

  printf("The temperature in celcius is %f",celcius);






}
