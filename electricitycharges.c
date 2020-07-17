/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float unit;
    printf("enter the units: ");
    scanf("%f",&unit);
    if (unit>=0 && unit<=200)
    {
        printf("charges applied is %f",0.75*unit);
    }
    else if (unit>=201 && unit<=400)
    {
        printf("charges applied is %f",100+(1*(unit-200)));
    }
    else if (unit>=401 && unit<=600)
    {
        printf("charges applied is %f",250+(1.25*(unit-400)));
    }
    else if (unit>=601)
    {
        printf("charges applied is %f",450+(1.5*(unit-600)));
    }
    else
    {
        printf("invalid entry of units");
    }
    return 0;
}
