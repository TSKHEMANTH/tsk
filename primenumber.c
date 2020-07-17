/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    if (n>7)
    {
        if ((n%2==0)||(n%3==0)||(n%5==0)||(n%7==0))
        {
            printf("%d is composite number",n);
        }
        else
        {
            printf("%d is prime number",n);
        }
    }
    else if (n==1)
    {
        printf("%d is neither prime nor composite",n);
    }
    else if (n>1)
    {
        if ((n==2)||(n==3)||(n==5)||(n==7))
        {
            printf("%d is prime number",n);
        }
        else
        {
            printf("%d is composite number",n);
        }
    }
    else
    {
        printf("invalid number");
    }
    return 0;
}
