/******************************************************************************

                            Online C Compiler.
                 Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[100][100], b[100][100], r, c, i, j;
    printf("enter rows= ");
    scanf("%d",&r);
    printf("enter columns= ");
    scanf("%d",&c);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf("enter a[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("transpose of a[%d][%d] is b[%d][%d]: \n",r,c,c,r);
    for(j=1;j<=c;j++)
    {
        for(i=1;i<=r;i++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
