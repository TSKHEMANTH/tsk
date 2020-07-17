/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b;
    printf("enter the numbers=");
    scanf("%d%d",&a,&b);
    if (a>b)
    {
        printf("%d is greater than %d",a,b);
    }
    else
    {
        if(a<b)
        {
            printf("%d is less than %d",a,b);
        }
        else
        {
            printf("%d is equal to %d",a,b);
        }
    }
    return 0;
}
