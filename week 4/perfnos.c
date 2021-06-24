//PERFECT NUMBERS
#include<stdio.h>
main()
{int sum=0,i,n;
printf("Enter the number to check if it is perfect or not:\n");
scanf("%d",&n);
for(i=1;n>i;i++)
{
    if (n%i==0)
    {
        sum=sum+i;
    }
}

if (sum==n)
printf("The number is perfect!");
else
printf("The number is not perfect");

}
