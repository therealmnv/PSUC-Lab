#include <stdio.h>
int product(int, int);

main()
{
    int a,b,result;

    printf("Enter two numbers\n");

    scanf("%d%d",&a,&b);

    result=product(a,b);

    printf("%d*%d=%d\n",a,b,result);

}

int product(int a, int b)
{
 if (b != 0)
    {
        return (a + product(a, b - 1));
    }
    else
    {
        return 0;
    }
}
