#include<stdio.h>
main()
{int x;
printf("Enter the number of days by which you are late to return the book:");
scanf("%d",&x);

if (1 <= x && x <= 5)
printf("The fine to be paid is equal to Rs. 0.50");

else if (6 <= x && x <= 10)
printf("The fine to be paid is equal to Rs. 1.00");

else if (10 < x && x < 30)
printf("The fine to be paid is equal to Rs. 5.00");

else if (x >= 30)
printf("The fine to be paid is equal to Rs. 10.00");




}
