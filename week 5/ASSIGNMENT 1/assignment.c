#include<stdio.h>
main()
{int num,unit;
printf("Enter number:");
scanf("%d",&num);
printf("The digits of the number are:\n");
while(num>0)
{
    unit=num%10;

    if(unit==0)
    {printf("Zero\n");}
    else if(unit==1)
    {printf("One\n");}
    else if(unit==2)
    {printf("Two\n");}
    else if(unit==3)
    {printf("Three\n");}
    else if(unit==4)
    {printf("Four\n");}
    else if(unit==5)
    {printf("Five\n");}
    else if(unit==6)
    {printf("Six\n");}
    else if(unit==7)
    {printf("Seven\n");}
    else if(unit==8)
    {printf("Eight\n");}
    else if(unit==9)
    {printf("Nine\n");}

    num=num/10;
}






}
