#include<stdio.h>
#include<string.h>
main()
{int i=0,j=0,n=0;
char a[500];

printf("Enter string:");
gets(a);

while(a[i]!='\0')
{
    n=n+1;
    i++;
}

for(i=0;i<n/2;i++)
{
    if(a[i] != a[n-i-1])
{
    j=1;
    break;
}

}

if(j==0)
{
    printf("The entered string is a palindrome");
}
else if(j==1)
{
    printf("The entered string is not a palindrome");
}
}
