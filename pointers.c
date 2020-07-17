/******************************************************************************

                            Online C Compiler.
                 Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x=10;
    int  *y;
    y = &x;
    printf("value of x: %d\n",x);
    printf("address of x: %u\n",y);
    printf("address of x: %u\n",&x);
    printf("value of y: %u\n",y);
    printf("value of y points to x: %u\n",*y);
    return 0;
}