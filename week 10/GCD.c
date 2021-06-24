#include<stdio.h>
int GCD(int x,int y)
{

    if(x==0)
    {
        return (y);
    }
    if(y==0)
    {
        return (x);
    }

return GCD(y,x%y);
}

main()
{
int x,y,z;
printf("Enter 2 numbers to find the GCD:\n");
scanf("%d%d",&x,&y);

z=GCD(x,y);

printf("The GCD of the two numbers is:%d",z);

}




