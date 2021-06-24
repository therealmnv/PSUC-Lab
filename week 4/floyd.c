//FLOYD'S TRIANGLE
#include<stdio.h>
main()
{int num,r,c,a=1;
printf("Enter the number of rows in Floyd's Triangle: ");
scanf("%d",&num);
for(r=1;r<=num;r++)
{
    for(c=1;c<=r;c++)
    {printf("%d ",a);
    a++;}
printf("\n");
}
}
