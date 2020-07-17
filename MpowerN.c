/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int m,n,prod,i;
    printf("enter the numbers: ");
    scanf("%d%d",&m,&n);
    prod=1;
    i=1;
    while(i<=n)
    {
        prod=prod*m;
        i++;
    }
    printf("%d to power of %d is %d",m,n,prod);
    return 0;
}
