/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b,c,d,e,f,g;
    printf("enter the values:\n");
    scanf("%d%d",&a,&b);
    c=a+b; /*addition*/
    e=a*b; /*multiplication*/
    /*division*/
    if (a>b)
        f=a/b;
    else if (b>a)
        f=b/a;
    else
        f=1;
    /*subtraction*/
    if (a>b)
        d=a-b;
    else if (b>a)
        d=b-a;
    else
        d=0;
    /*reminder*/
    if (a>b)
        g=a%b;
    else if(b>a)
        g=b%a;
    else 
        g=0;
    printf("addition is %d\n",c);
    printf("subtraction is %d\n",d);
    printf("multiplication is %d\n",e);
    printf("quotient is %d\n",f);
    printf("reminder is %d",g);
    return 0;
}
