/******************************************************************************

                            Online C Compiler.
                 Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[100][100], b[100][100],c[100][100], i, j, r1,r2,r3,c1,c2,c3;
    printf("enter rows1: ");
    scanf("%d",&r1);
    printf("enter rows2: ");
    scanf("%d",&r2);
    printf("enter rows3: ");
    scanf("%d",&r3);
    printf("enter col1: ");
    scanf("%d",&c1);
    printf("enter col2: ");
    scanf("%d",&c2);
    printf("enter col3: ");
    scanf("%d",&c3);
    printf("enter matrix1: ");
    for(i=1;i<=r1;i++)
    {
        for(j=1;j<=c1;j++)
        {
            printf("enter a[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=1;i<=r2;i++)
    {
        for(j=1;j<=c2;j++)
        {
            printf("enter b[%d][%d]= ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    if((r1=r2)&&(c1=c2))
    {
        for(i=1;i<=r3;i++)
        {
            for(j=1;j<=c3;j++)
            {
                c[i][j]=a[i][j]+b[i][j];
            }
        }
        printf("a[%d][%d]+b[%d][%d] is c[%d][%d]: \n",i,j,i,j,i,j);
        for(i=1;i<=r3;i++)
        {
            for(j=1;j<=c3;j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("matrix scale is not same for both matrices\n");
        printf("addition cannot be done");
    }
    return 0;
}
