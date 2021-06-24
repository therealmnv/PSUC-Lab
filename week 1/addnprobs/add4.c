#include<stdio.h>
main()
{ float twenty,ten,five,half_paise,tot;
printf("Enter the number of twenty rupee, ten rupee, five rupee and half rupee notes or coins in the piggy bank:\n");
scanf("%f %f %f %f",&twenty,&ten,&five,&half_paise);

tot = twenty*20 + ten*10 + five*5 + half_paise/2;

printf("The total amount of money present in the piggy bank is %f",tot);


}
