#include<stdio.h>

main()

{
float a=30;
float b=10;
float c=5;
float d=15;

float prob_one;
float prob_two;
float prob_three;
float prob_four;

prob_one = (a + b) * c / d;

prob_two = ((a + b) * c) / d;

prob_three = a + (b * c) / d;

prob_four = (a + b) * (c / d);

printf("(a+b)*c/d is %f \n ((a+b)*c)/d is %f \n a+(b*c)/d is %f \n (a+b)*(c/d) is %f",prob_one,prob_two,prob_three,prob_four);





}
