/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int p,t;
    float r;
    printf("enter principle amount p= ");
    scanf("%d",&p);
    printf("enter time in years t= ");
    scanf("%d",&t);
    printf("enter rate of interest r= ");
    scanf("%f",&r);
    float si(int, int, float);
    si(p,t,r);
}
float si(int p, int t, float r)
{
    float i;
    i=p*t*r/100;
    printf("%f",i);
    return 0;
}

