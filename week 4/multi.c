//MULTIPLICATION TABLE
#include<stdio.h>
main()
{int a,b,n,k,prod;
printf("Enter numbers to be multiplied in the order 'a' x 'b':\n");
scanf("%d %d",&a,&b);

for(n=1;n<=a;n++)
{
    printf("The multiplication table for number %d \n",n);

for(k=1;k<=b;k++)
{
    prod=n*k;
    printf("%d * %d = %d \n",n,k,prod);
}

}

}
