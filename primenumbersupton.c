/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n, i;
    printf("enter n: ");
    scanf("%d",&n);
    if (n>1)
    {
        for(i=2;i<=n;i++)
        {
            if ((i==2)||(i==3)||(i==5)||(i==7))
            {
                printf("%d\t",i);
            }
        }
        for(i=8;i<=n;i++)
        {
            if (i%2!=0)
            {
                if (i%3!=0)
                {
                    if(i%5!=0)
                    {
                        if(i%7!=0)
                        {
                            printf("%d\t",i);
                        }
                    }
                }
            }
        }
    }
    else if (n==1)
    {
        printf("%d is neither prime nor composite",n);
    }
    else
    {
        printf("invalid number");
    }
    return 0;
}
