/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x, y;
    float a, b;
    printf("enter the values\n");
    scanf("%d%d%f%f",&x,&y,&a,&b);
    printf("the values are\n");
    printf("%d\t%d\t%f\t%f",x,y,a,b);
    return 0;
}
