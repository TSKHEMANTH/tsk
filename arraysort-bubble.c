/******************************************************************************

                            Online C Compiler.
                 Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[100], n, i,j, temp;
    char ch;
    printf("enter ascend(A) or descend(D): \n");
    scanf("%c",&ch);
    printf("enter n= ");
    scanf("%d",&n);
    int swapascend(int);
    int swapdescend(int);
    for(i=0;i<n;i++)
    {
        printf("enter a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    if (ch=='A')
    {
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if (a[i]>a[i+1])
                {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                }
            }
        }
      printf("array elements in ascending order: \n");
        for(i=0;i<n;i++)
        {
            printf("%d\t",a[i]);
        }
    }
    else if (ch=='D')
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if (a[i]<a[i+1])
                {
                temp=a[i+1];
                a[i+1]=a[i];
                a[i]=temp;
                }
            }
        }
        printf("array elements in descending order: \n");
        for(i=0;i<n;i++)
        {
            printf("%d\t",a[i]);
        }
    }
    else
    {
        printf("invalid");
    }
    return 0;
}