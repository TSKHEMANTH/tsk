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
    if (a%2==0)
    {
        printf("%d is even number",a);
    }
    else
    {
        printf("%d is odd number",a);
    }
    return 0;
}
