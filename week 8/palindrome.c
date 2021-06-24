#include<stdio.h>
#include<string.h>

void IsPalin(char[],int);

void main()
{char a[100];
int i,n;

printf("Enter sting:");
gets(a);

n=strlen(a);

IsPalin(a,n);
}

void IsPalin(char a[],int n)
{
    int i,flag=0;
    for(i=0;i<n;i++)
    {
        if(a[i]!=a[n-i-1])
        {
            printf("The entered string is not a palindrome");
            flag=1;
            break;
        }
    }

    if(flag==0)
    {
        printf("The entered string is a palindrome");
    }
}
