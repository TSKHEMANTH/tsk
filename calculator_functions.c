/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a, b;
    char p;
    printf("enter operation= ");
    scanf("%c",&p);
    printf("enter a,b= ");
    scanf("%d%d",&a,&b);
    int add(int, int);
    int sub(int, int);
    int prod(int, int);
    int divi(int, int);
    if (p=='+')
    {
         add(a,b);
    }
    else if (p=='-')
    {
         sub(a,b);
    }
    else if (p=='*')
    {
         prod(a,b);
    }
    else if (p=='/')
    {
         divi(a,b);
    }
    else
    {
        printf("invalid");
    }
    return 0;
}
int add(int x, int y)
{   
    printf("%d+%d=%d",x,y,x+y);
    return 0;
}
int sub(int x, int y)
{
    printf("%d-%d=%d",x,y,x-y);
    return 0;
}
int prod(int x, int y)
{
    printf("%d*%d=%d",x,y,x*y);
    return 0;
}
int divi(int x, int y)
{
    float z;
    z=(float)x/(float)y;
    printf("%d/%d=%0.3f",x,y,z);
    return 0;
}
