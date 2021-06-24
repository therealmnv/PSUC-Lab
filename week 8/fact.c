#include<stdio.h>

int Fact(int a)
{
    int num,fact=1;
    num=a;
    for (;num>0;num--)
    {fact=fact*num;}
    return fact;
}

void main()
{
    int n,r,x,y,z;

    printf("Enter the value of 'N' and 'R' respectively:");
    scanf("%d %d",&n,&r);

if(n>=r)
{
    x=Fact(n);
    y=Fact(r);
    z=Fact(n-r);

    printf("\nThe value of the combination of the two numbers is %d",x/(y*z));
}

else
{
    printf("\nCombination is not possible");
}
}
