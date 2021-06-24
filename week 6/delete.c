#include<stdio.h>
#include<string.h>
main()
{int i,l=0,j=0,k;
char str[100],del[100];
printf("Enter string: ");
gets(str);
printf("Enter word to be deleted: ");
gets(del);
while(str[l]!='\0')
{
    l++;
    for(i=0;i<l;i++)
    {while(str[i]==del[j] && del[j]!='\0')
     {
        for(k=i;str[k]!='\0';k++)
        {
            str[k]=str[k+1];
        }
     j++;
     }


    }

}
printf("The new string is\n");
puts(str);

}
