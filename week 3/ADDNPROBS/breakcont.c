#include<stdio.h>
main()
{int a,i=1;

printf("Enter a number greater than 3:");
scanf("%d",&a);

do
{   if(i==3)
    break;
    printf("%d\n",i);
    i++;
} while (a>i);

i=1;
printf("\nand\n\n");

do
{   if(i==3)
    {
        i++;
        continue;
    }
    printf("%d\n",i);
    i++;
} while (a>=i);

}
