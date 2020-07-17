/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b,temp;
    printf("enter the numbers: ");
    scanf("%d%d",&a,&b);
    if (b>a)
    {
        while(a!=0)
        {
            temp=b%a;
            b=a;
            a=temp;
        }
    printf("GCD is %d",b);
    }
    else if (a>b)
    {
        while(b!=0)
        {
            temp=a%b;
            a=b;
            b=temp;
        }
    printf("GCD is %d",a);
    }
    else
    {
        printf("GCD is %d",a);
    }
    return 0;
}
