//TO READ X AND PRINT Y
#include<stdio.h>
main()
{int x,Y;
printf("Enter the value of x:\n");
scanf("%d",&x);
if (x>0)
Y=1;
else if (x==0)
Y=0;
else if (x<0)
Y=-1;

printf("The value of Y is %d",Y);


}
