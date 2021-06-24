#include<stdio.h>
#include<string.h>
main()
{char pword[200],i=0;

printf("Enter password:");


while(1)
{
    pword[i]=getch();
    if(pword[i]=='\r')
    {
        break;
    }
    else
    printf("*");
    i++;
}
pword[i+1]='\0';



}
