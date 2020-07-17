/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,a[100],n,sum=0;
    printf("enter no. of elements(n): ");
    scanf("%d",&n);
    printf("enter array elements: ");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        sum=sum+a[i];
    }
    printf("sum of array elements is %d",sum);
    return 0;
}
