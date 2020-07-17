/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int random_num()
{ 
    int upper=6, lower=1,count=1;
    int i; 
    for (i = 0; i < count; i++) 
    { 
        int num = (rand() % 
           (upper - lower + 1)) + lower; 
        printf("%d ", num);
        return num;
    } 
}
int main()
{
    int n,i,p[100],dice,c=0;
    printf("enter no. of persons: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        p[i]=0;
    }
    while(c!=1)
    {
    for(i=0;i<n;i++)
    {
        dice=random_num();
        p[i]=p[i]+dice;
        if(p[i]<=100)
        {
        if(p[i]==1)
        {
            p[i]=38;
            c=0;
        }
        else if(p[i]==4)
        {
            p[i]=14;
            c=0;
        }
        else if(p[i]==8)
        {
            p[i]=30;
            c=0;
        }
        else if(p[i]==21)
        {
            p[i]=42;
            c=0;
        }
        else if(p[i]==32)
        {
            p[i]=10;
            c=0;
        }
        else if(p[i]==36)
        {
            p[i]=6;
            c=0;
        }
        else if(p[i]==48)
        {
            p[i]=26;
            c=0;
        }
        else if(p[i]==50)
        {
            p[i]=67;
            c=0;
        }
        else if(p[i]==62)
        {
            p[i]=18;
            c=0;
        }
        else if(p[i]==71)
        {
            p[i]=92;
            c=0;
        }
        else if(p[i]==80)
        {
            p[i]=99;
            c=0;
        }
        else if(p[i]==88)
        {
            p[i]=24;
            c=0;
        }
        else if(p[i]==95)
        {
            p[i]=56;
            c=0;
        }
        else if(p[i]==97)
        {
            p[i]=78;
            c=0;
        }
        else if(p[i]==100)
        {
            c=1;
            printf("game is won by person %d",i+1);
            break;
        }
        else
        {
            c=0;
        }
        }
        else
        {
            p[i]=p[i]-dice;
        }
    }
    }
    return 0;
}
    