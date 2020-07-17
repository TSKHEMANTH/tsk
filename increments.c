/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a=6,c, b;
    printf("%d\n",a++); /*post increment- prints a=6*/
    b=a+1;
    printf("%d\n",b); /* prints (a+1)+1===(a=7)+1===8*/
    printf("%d\n",++a); /*pre increment prints a=a+1===a=7+1===8*/
    c=a+1; 
    printf("%d\n",c);  /*prints a+1===8+1===9*/
    return 0;
}
