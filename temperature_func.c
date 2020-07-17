/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char ttype;
    printf("enter temp. type: ");
    scanf("%c",&ttype);
    float temp;
    printf("enter temperature= ");
    scanf("%f",&temp);
    int FTC(float);
    int CTF(float);
    if (ttype=='f')
    {
        FTC(temp);
    }
    else if (ttype=='c')
    {
        CTF(temp);
    }
    return 0;
}
int FTC(float temp)
{
    float c, f;
    f=temp;
    c=(5*(f-32)/9);
    printf("temperature in celcius is %0.4f",c);
    return 0;
}
int CTF(float temp)
{
    float f, c;
    c=temp;
    f=((9*c)/5)+32;
    printf("temperature in fahrenheit is %0.4f",f);
    return 0;
}


