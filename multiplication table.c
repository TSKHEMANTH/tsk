/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,i=1,n;
    printf("enter a=");
    scanf("%d",&a);
    printf("enter upto multiple n= ");
    scanf("%d",&n);
    if (a>0)
    {
        while (i<=n)
        {
            printf("%d*%d=%d\n",a,i,a*i);
            i++;
        }
    }
    else
    {
        printf("invalid");
    }
    return 0;
}
