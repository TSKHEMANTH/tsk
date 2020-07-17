/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int random_num()
{
   int lower=1, upper=10,count=1,num;
    int i; 
    for (i = 0; i < count; i++) 
    { 
        num = (rand() % (upper - lower + 1)) + lower; 
    }
    return num;
}
int main()
{
    int guess, comp,i,chance;
    comp=random_num();
    printf("no. of chances you require (max will be 7): ");
    scanf("%d",&chance);
    printf("\n");
    if((chance>=1)&&(chance<=7))
    {
    for(i=1;i<=chance;i++)
    {
        printf("chance %d",i);
        printf("enter your guessing number: \n");
    scanf("%d",&guess);
    if(guess==comp)
    {
        printf("you guessed correctly\n");
        break;
    }
    else if(guess<comp)
    {
        printf("you guessed too low\n");
    }
    else if(guess>comp)
    {
        printf("you guessed too high\n");
    }
    }
    }
    return 0;
}
