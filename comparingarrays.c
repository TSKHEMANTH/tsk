/******************************************************************************

                            Online C Compiler.
                 Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[100], b[100], n1, n2, i;
    printf("enter n1: ");
    scanf("%d",&n1);
    printf("enter n2: ");
    scanf("%d",&n2);
    printf("enter a: ");
    for(i=0;i<=n1-1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter b: ");
    for(i=0;i<=n2-1;i++)
    {
        scanf("%d",&b[i]);
    }
    if (n1==n2)
    {
        if (a[n1]=b[n2])
        {
            printf("both arrays are equal");
        }
        else
        {
            printf("both are not equal");
        }
    }
    else
    {
        printf("arrays are not of same size");
    }
    return 0;
}
