#include<stdio.h>
int main()
{
    int n,i,j,p,q,r,s;
    scanf("%d",&n);
    p=n;
    q=n;
    r=n;
    s=n;
    int a[2*(n)-1][2*(n)-1];
    for(i=0;i<=2*(n-1);i++)
    {
        for(j=0;j<=2*(n-1);j++)
        {
            if(i==j)
            {
                if(j<=n-1)
                {
                    a[i][j]=q;
                    q=q-1;
                    if(j==n-1)
                    {
                        q=q+1;
                    }
                }
                else 
                {
                    q++;
                    a[i][j]=q;
                }
            }
            else if(i+j==2*(n-1))
            {
                if(j>=n-1)
                {
                a[i][j]=p;
                p--;
                if(j==n-1)
                {
                    p++;
                }
                }
                else {
                p++;
                a[i][j]=p;
                }
            }
            else if((i<j)&&(i+j<2*(n-1)))
            {
                a[i][j]=a[i][j-1];
            }
            else if((i>j)&&(i+j<2*(n-1)))
            {
                a[i][j]=a[i-1][j];
            }
            else if((i>j)&&(i+j>2*(n-1)))
            {
                a[i][j]=a[i][j-1];
            }
            else if((i<j)&&(i+j>2*(n-1)))
            {
                a[i][j]=a[i-1][j];
            }
            else
            {
                a[i][j]=0;
            }
        }
    }
    for(i=0;i<=2*(n-1);i++)
    {
        for(j=0;j<=2*(n-1);j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}