#include<stdio.h>
#include<string.h>
main()
{int i=0,n=0;
char a[500];

printf("Enter string:");
gets(a);

for(i=0;a[i]!='\0';i++)
{
    if(a[i]>='a' && a[i]<='z')
    a[i]=a[i]-32;

    else if(a[i]>='A' && a[i]<='Z')
    a[i]=a[i]+32;
}

printf("The toggled string is \n%s",a);



}
