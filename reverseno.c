/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,i=10;
    printf("enter n");
    scanf("%d",&n);
    while(n>10)
    {
    printf("%d",n%10);
    n=n/10;
    }
    printf("%d",n%10);
    return 0;
}
