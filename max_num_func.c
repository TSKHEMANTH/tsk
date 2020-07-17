/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter the numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    int max_num(int, int, int);
    max_num(a,b,c);
    return 0;
}
int max_num(int a, int b, int c)
{
    int z;
    if (a>=b && a>=c)
    {
        z=a;
    }
    else if (b>=a && b>=c)
    {
        z=b;
    }
    else if (c>=a &&c>=b)
    {
        z=c;
    }
    printf("%d",z);
    return 0;
}


