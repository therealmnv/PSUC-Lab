#include<stdio.h>

int FIB(int n)
{
if(n<=1)
return n;
else
return(FIB(n-1)+FIB(n-2));
}

main()
{
    int n,x,i;
    printf("Till which term would you like to print the Fibonacci series:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        x=FIB(i);
        printf("%d\t",x);
    }
}
