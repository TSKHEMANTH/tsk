/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a;
    printf("enter a=");
    scanf("%d",&a);
    if (a%4==0)
    {
        if (a%100!=0)
        {
            printf("%d is leap year",a);
        }
        else
        {
            if (a%400==0)
            {
                printf("%d is leap year",a);
            }
            else
            {
                printf("%d is not leap year",a);
            }
        }
    }
    else
    {
        printf("%d is not leap year",a);
    }
    return 0;
}
