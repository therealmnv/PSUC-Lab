#include<stdio.h>
main()
{
    char a[100];int i=0;
    char *point,*x;

    printf("Enter the string:\n");
    gets(a);

    point=a;
    x=point;

    while(a[i]!='\0')
    {
        point++;
        i++;
    }

    printf("The number of elements=%d",point-x);
}
