/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[50], i, n, t, j;
    printf("enter number of elements: ");
    scanf("%d",&n);
    printf("enter array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter target value: ");
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if (a[i]+a[j]==t)
            {
                printf("%d and %d",i,j);
            }
        }
    }
    return 0;
}
