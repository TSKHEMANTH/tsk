/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a=2 ,b;
    a+=5;
    b=(a>18)?(-1*(18-a)):(18-a);
    printf("%d",b);
    return 0;
}
