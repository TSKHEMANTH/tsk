/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char category, marital;
    float service;
    printf("enter the category(P,T) and the marital status(U,M): \n");
    scanf("%c%c",&category,&marital);
    if (category=='P')
    {
        printf("enter the service: \n");
        scanf("%f",&service);
        if (marital=='U')
        {
            if (service>=30)
            {
                printf("loan is 50,000");
            }
            else if (service>=0 && service<=30)
            {
                printf("loan is 25,000");
            }
            else
            {
                printf("invalid service entry");
            }
        }
        else if (marital=='M')
        {
            if (service>=30)
            {
                printf("loan is 40,000");
            }
            else if (service>=0 && service <=30)
            {
                printf("loan is 20,000");
            }
            else
            {
                printf("invalid service entry");
            }
        }
        else
        {
            printf("invalid maritalstatus entry");
        }
    }
    else if (category=='T')
    {
        printf("loan is 10,000");
    }
    else
    {
        printf("invalid category entry");
    }
    return 0;
}
