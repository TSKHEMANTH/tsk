/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,i=1;
    printf("enter n");
    scanf("%d",&n);
    while(i<=n)
    {
        if(n%i==0)
        {
            printf("factors of %d are:%d\n",n,i);
        }
        i++;
    }
    return 0;
}
