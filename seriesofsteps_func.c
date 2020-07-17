/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a=3,b=2,c=4,d=5,f=8,g=2,h=6,p,q,x,r,y;
    float R;
    int add(int, int);
    int sub(int, int);
    int mult(int, int);
    int divi(int, int);
    p=add(a,b);
    q=add(c,d);
    x=mult(p,q);
    r=divi(f,g);
    y=add(r,h);
    R=sub(x,y);
    printf("%f",R);
    return 0;
}
int add(int x, int y)
{
    int z;
    z=x+y;
    return z;
}
int sub(int x, int y)
{
    int z;
    z=x-y;
    return z;
}
int mult(int x, int y)
{
    int z;
    z=x*y;
    return z;
}
int divi(int x, int y)
{
    float z;
    z=(float)x/(float)y;
    return z;
}

