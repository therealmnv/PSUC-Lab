#include<stdio.h>
#include<string.h>
main()
{int i=0,j=0,n=0,num_count=0,alpha_count=0;
char a[500];

printf("Enter string:");
gets(a);

for(i=0;a[i]!='\0';i++)
{
    if((a[i]>='a' && a[i]<='z')||(a[i]>='A' && a[i]<='Z'))
    {
        alpha_count=alpha_count+1;
    }

    else if ((a[i]<='9' && a[i]>='0'))
    {
        num_count=num_count+1;
        j=j+(int)a[i]-48;
    }

}

printf("The number of characters are = %d\nThe number of digits = %d\nThe sum of the digits is = %d",alpha_count,num_count,j);





}
