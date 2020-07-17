/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    if (n>0)
    {
        printf("sum of %d natural numbers is %d",n,n*(n+1)/2);
    }
    else
    {
        printf("invalid");
    }
    return 0;
}
