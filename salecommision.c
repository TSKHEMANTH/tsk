/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char item;
    float saleamt, commi;
    printf("enter the item and saleamt: ");
    scanf("%c%f",&item,&saleamt);
    if (item=='c')
    {
        if (saleamt<10000)
        {
            printf("commision is nil");
        }
        else if(saleamt>=10000 && saleamt<25000)
        {
            printf("commision is %f",0.08*saleamt);
        }
        else
        {
            printf("commision is %f",2000+((25000-saleamt)*0.1));
        }
    }
    else if (item=='m')
    {
        if (saleamt<10000)
        {
            printf("commision is %f",0.05*saleamt);
        }
        else
        {
            printf("commision is %f",(0.05*10000)+(0.08*(saleamt-10000)));
        }
    }
    else
    {
        printf("invalid item entry");
    }
    return 0;
}
