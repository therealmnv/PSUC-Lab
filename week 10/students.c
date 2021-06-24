#include<stdio.h>

struct record
{
    char name[30];

    int roll_no;

    struct marks
    {
     int sub_1;
     int sub_2;
     int sub_3;
     int totmarks;
    }m;
}s[2];


main()
{int i=1;

for(;i<=3;i++)
{printf("Enter record for student %d\n",i);

printf("Enter name: ");
gets(s[i].name);

printf("\nEnter roll number: ");
scanf("%d",&s[i].roll_no);

printf("\nEnter marks\n");
scanf("%d%d%d",&s[i].m.sub_1,&s[i].m.sub_2,&s[i].m.sub_3);
}

int avg;
avg=(s[1].m.totmarks+s[2].m.totmarks+s[3].m.totmarks)/3;

printf("The average marks are %d",avg);
}
