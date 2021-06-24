#include<stdio.h>

void toggle(char a[])
{int i;

for(i=0;a[i]!='\0';i++)
{
    if(a[i]>='a' && a[i]<='z')
    a[i]=a[i]-32;

    else if(a[i]>='A' && a[i]<='Z')
    a[i]=a[i]+32;
}

printf("The toggled string is \n%s",a);
}

void main()
{
    char a[100],n,i;

    printf("Enter sting:");
    gets(a);

    toggle(a);

}
