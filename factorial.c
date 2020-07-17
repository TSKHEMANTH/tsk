/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,i,fact;
    printf("enter number: ");
    scanf("%d",&n);
    fact=1;
    i=1;
    while (i<=n)
    {
        fact=fact*i;
        i++;
    }
    printf("factorial of %d is %d",n,fact);
    return 0;
}
