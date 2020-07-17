/******************************************************************************

                            Online C Compiler.
                 Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a=1, b=9;
    int swap(int *, int *);
    printf("before swapping a=%d, b=%d  \n", a,b);
    swap(&a, &b);
    return 0;
}
int swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("after swapping a=%d, b=%d",*x,*y);
    return 0;
}


