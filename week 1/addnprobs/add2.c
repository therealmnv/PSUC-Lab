#include<stdio.h>
main()
{int tot,hrs,mins,sec;
printf("Enter the time in seconds to be converted:");
scanf("%d",&tot);

hrs = tot/3600;
mins = (tot%3600)/60;
sec = (tot%3600)%60;

printf("The time in hours, minutes and seconds is = %d hours, %d minutes and %d seconds",hrs,mins,sec);




}
