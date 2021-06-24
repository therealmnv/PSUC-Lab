#include<stdio.h>
#include<string.h>
main()
{int i=0,j,n=0,counter=1;
char a[500];

printf("Enter sentence:");
gets(a);

while(a[i]!='\0')
{
    n=n+1;
    i++;
}

i=0;

while(a[i]==' ')
{
   i++;
    if(a[i]=='\0')
    {
        counter=0;
    }
}

while(a[i]!='\0')
{
    if(a[i]==' ' && (a[i+1]!=' ' && a[i+1]!='\0'))
    {
        counter=counter+1;
    }

    i++;
}

printf("Number of words in the sentence is %d",counter);
}
