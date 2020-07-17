/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[100],b[100],c[100],i,j,k,A,B,n,p=0;
    printf("enter A: ");
    scanf("%d",&A);
    printf("enter array1: ");
    for(i=0;i<A;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<A;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    printf("enter B: ");
    scanf("%d",&B);
    printf("enter array2: ");
    for(j=0;j<B;j++)
    {
        scanf("%d",&b[j]);
    }
    for(j=0;j<B;j++)
    {
        printf("%d\t",b[j]);
    }
    printf("\n");
    for(n=0;n<A;n++)
    {
        c[p]=a[n];
        p++;
    }
    p=A;
    for(n=0;n<B;n++)
    {
        c[p]=b[n];
        p++;
    }
    for(k=0;k<(A+B);k++)
    {
        printf("%d\t",c[k]);
    }
    return 0;
}
