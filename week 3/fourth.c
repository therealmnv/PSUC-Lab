//PRIME AND COMPOSITE NUMBERS
#include<stdio.h>
main()
{int n,i,a=0,b=0,flag;

printf("Enter numbers to check for number of prime and composite numbers. The program will terminate if you enter -1\n");

do
{
    scanf("%d",&n);
    i=2;

while(n>i)
{
    flag=0;
    if (n%i==0)
    {
        a=a+1;
        flag=1;
        break;
    }
i++;
}

if (flag!=1 && n!=1 && n!=-1)
{
    b=b+1;
}


}while(n!=-1);

printf("Total number of composite numbers are %d and total number of prime numbers are %d",a,b);



}
