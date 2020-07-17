/******************************************************************************

                            Online C Compiler.
                 Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char op;
    printf("enter operator(+-*/)");
    scanf("%c",&op);
    int a, b, c;
    printf("enter a: ");
    scanf("%d",&a);
    printf("enter b: ");
    scanf("%d",&b);
    int add(int, int);
    int sub(int, int);
    int multi(int, int);
    int divi(int, int);
    int *x, *y, *z;
    x=&a;
    y=&b;
    z=&c;
    if(op=='+')
    {
        add(*x,*y);
    }
    else if(op=='-')
    {
        sub(*x,*y);
    }
    else if (op=='*')
    {
        multi(*x,*y);
    }
    else if (op=='/')
    {
        divi(*x,*y);
    }
    else
    {
        printf("invalid operator");
    }
    return 0;
}
int add(int a, int b)
{
    int c;
    c=a+b;
    printf("%d+%d=%d",a,b,c);
    return 0;
}
int sub(int a, int b)
{
    int c;
    c=a-b;
    printf("%d-%d=%d",a,b,c);
    return 0;
}
int multi(int a, int b)
{
    int c;
    c=a*b;
    printf("%d*%d=%d",a,b,c);
    return 0;
}
int divi(int a, int b)
{
    int c;
    c=(a)/(b);
    printf("%d/%d=%d",a,b,c);
    return 0;
}


