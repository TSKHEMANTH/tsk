/******************************************************************************

                            Online C Compiler.
                 Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[100][100],i,j,r,c,sum=0,sum1=0;
    printf("enter no. of rows(r): ");
    scanf("%d",&r);
    printf("enter no. of columns(c): ");
    scanf("%d",&c);
    printf("enter matrix elements: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("enter a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j)
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("trace of the matrix is %d\n",sum);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum1=sum1+a[i][j];
        }
    }
    printf("sum of all elements is %d",sum1);
    return 0;
}
