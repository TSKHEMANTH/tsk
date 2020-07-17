/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,m,a,b=0,temp;
    printf("enter n");
    scanf("%d",&n);
    m=n;
    while(n>10)
    {
        a=n%10;
        b=b*10+a;
        n=n/10;
    }
    temp=b*10+n;
    printf("%d",temp);
    if(m==temp)
    {
        printf("palindrome");
    }
    else
    {
        printf("not a palindrome");
    }
    return 0;
}
