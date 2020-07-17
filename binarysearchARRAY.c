/******************************************************************************

                            Online C Compiler.
                 Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int temp,mid,a[100],i,n,j,k;
    int found(int a[], int, int, int );
    int kless(int a[], int, int, int );
    int kless(int a[], int, int, int );
    
    printf("enter no. of array elements(n):");
    scanf("%d",&n);
    printf("enter array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if (a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("array elements in ascending order: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    printf("enter the element to be searched: \n");
    scanf("%d",&k);
    mid=(0+n-1)/2;
    printf("mid index is: ");
    printf("%d\n",mid);
    if(k>a[n-1])
    {
        printf("the key %d is not found",k);
    }
    else
    {
        found(a, mid, n, k);
    }
    return 0;
}
int kless(int a[], int n, int i, int k)
{   
    for(i=0;i<(n-1)/2;i++)
                    {
                        if (k==a[i])
                        break;
                    }
                    printf("the key %d is found less at index %d",k,i);
    return 0;
}
int kmore(int a[], int n, int i, int k)
{
     for(i>=(n+1)/2;i<n;i++)
                    {
                        if (k==a[i])
                        break;
                    }
                    printf("the key %d is found more at index %d",k,i);
    return 0;
}
int found(int a[], int mid, int n, int k)
{
    int i;
    if (k==a[mid])
            {
                printf("the key %d is found at index %d",k,mid);
            }
    else 
        {
                if (k<a[mid])
                {
                    kless(a, n, i, k);
                }
                else if (k>a[mid])
                {
                    kmore(a, n, i, k);
                }
        }
        return 0;
}