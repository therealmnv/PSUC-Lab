#include<stdio.h>
main()
{
    int a[100],i,n;
    int *point;
    printf("How many numbers would like to enter:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

  point=a;

  for(i=0;i<n;i++)
  {
        if(*point<a[i])
        {
            point=&a[i];
        }
  }

printf("The greatest integer in the array is %d",*point);
}
