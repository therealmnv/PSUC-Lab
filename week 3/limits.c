#include<stdio.h>

main()

{int a,b,i=2,flag,temp;

printf("Enter the lower and upper limits:");

scanf("%d %d",&a,&b);

printf("Prime numbers are:");

while(a<b)
{flag=0;

for(i=2;a>i;i++)
{
    if (a%i==0)
    {
        flag=1;
    }


}
if (flag==0 && a>1)
{
    printf("%d ",a);
}
a++;
}
}
