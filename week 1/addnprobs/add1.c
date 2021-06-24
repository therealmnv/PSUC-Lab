#include<stdio.h>
main()
{
int tot,year,week,days;

printf("Enter the number of days:\n");
scanf("%d",&tot);

year = tot/365;
week = (tot%365)/7;
days = (tot%365)%7;

printf("The number of days converted to years,weeks and days is = %d years %d weeks %d days",year,week,days);


}


