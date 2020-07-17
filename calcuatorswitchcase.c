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
    printf("enter the operator: \n");
    scanf("%c",&op);
    printf("enter numbers: \n");
    scanf("%d%d",&a,&b);
    switch(op)
    {
        case '+':
            printf("%d+%d=%d",a,b,a+b);
            break;
        case '-':
            printf("%d-%d=%d",a,b,a-b);
            break;
        case '*':
            printf("%d*%d=%d",a,b,a*b);
            break;
        case '/':
            printf("%d/%d=%0.2f",a,b,(float)a/(float)b);
            break;
        default:
            printf("invalid operator");
    }
    return 0;
}
