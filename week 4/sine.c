//SINE SERIES
#include<stdio.h>
#include<math.h>
main()
{float num,x,n,i,prod=1,sum=0,calc;
printf("Enter the value of 'x' and 'n' respectively");
scanf("%f %f",&x,&num);

for(n=1;n<=num;n++)
{for(i=(2*n-1);i>0;i--)
{prod=prod*i;}
calc = ((pow(-1,(3*n+1)))*(pow(x,(2*n-1))))/prod;

prod=1;
sum=sum+calc;
}

printf("The value is %f",sum);


}
