/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    int a[100],i,n,k,b[100],c[100];
    printf("enter no. of elements: ");
    scanf("%d",&n);
    printf("enter array elements: ");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n-1;i++)
    {
        printf("%d\t",a[i]);
        c[i]=a[i];
    }
    printf("\n");
    for(i=0;i<=n-1;i++)
    {
        printf("%d\t",c[i]);
    }
    printf("the array elements in reverse order: \n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d\t",a[i]);
        b[i]=a[n-i-1];
    }
    printf("\n");
    for(k=0;k<=n-1;k++)
    {
        printf("%d\t",b[k]);
    }
    return 0;
}
