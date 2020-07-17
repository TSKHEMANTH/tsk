/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char op;
    int a,b;
    printf("enter the operator(+,-,*,/):");
    scanf("%c",&op);
    printf("enter the numbers: ");
    scanf("%d%d",&a,&b);
    if (op=='+')
    {
        printf("%d+%d=%d",a,b,a+b);
    }
    else if (op=='-')
    {
        printf("%d-%d=%d",a,b,a-b);
    }
    else if (op=='*')
    {
        printf("%d*%d=%d",a,b,a*b);
    }
    else if (op=='/')
    {
        printf("%d/%d=%d",a,b,a/b);
    }
    else
    {
        printf("math error");
    }
    return 0;
}
