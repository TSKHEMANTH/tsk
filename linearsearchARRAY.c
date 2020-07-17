/******************************************************************************

                            Online C Compiler.
                 Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[10],i,key, n;
    printf("enter no. of array elements: ");
    scanf("%d",&n);
    printf("enter array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    printf("enter the key to be found: ");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(key==a[i])
        break;
    }
    if (i<n)
    {
        printf("the key %d is found at index %d",key,i);
    }
    else
    {
        printf("the key %d is not found",key);
    }
    return 0;
}