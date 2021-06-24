#include<stdio.h>

main()
{ int a;
int b;

scanf("%d",&a);
scanf("%d",&b);

int sum;
sum = a + b;

int diff;
diff = a - b;

int prod;
prod = a * b;

int quotient;
quotient = a / b;

printf("The sum is %d, \nThe difference is %d, \nThe product is %d, \nThe quotient is %d",sum,diff,prod,quotient);


}
