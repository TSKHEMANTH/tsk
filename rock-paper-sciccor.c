/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int random_num()
{
   int lower=1, upper=3,count=1,num;
    int i; 
    for (i = 0; i < count; i++) 
    { 
        num = (rand() % (upper - lower + 1)) + lower; 
    }
    return num;
}
int main()
{
    int random_num();
    int my,comp,i,p=0,c=0;
    printf("----------Welcome To the Game----------\n");
    printf("press 1 for ROCK, press 2 for PAPER, press 3 for SCISSOR\n\n");
    for(i=1;i<=3;i++)
    {
    printf("enter your number: \n");
    scanf("%d",&my);
    if(my==1)
    {
        printf("-----you selected Rock for game %d-----\n",i);
    }
    else if(my==2)
    {
        printf("-----you selected Paper for game %d-----\n",i);
    }
    else if(my==3)
    {
        printf("-----you selected Sciccor for game %d-----\n",i);
    }
    else
    {
        printf("-----error-----");
    }
        comp=random_num();
        printf("-----comp num: %d-----\n",comp);
        if(comp==1)
    {
        printf("-----comp selected Rock for game-----\n",i);
    }
    else if(comp==2)
    {
        printf("-----comp selected Paper for game %d-----\n",i);
    }
    else if(comp==3)
    {
        printf("-----comp selected Sciccor for game %d-----\n",i);
    }
        if(comp==my)
        {
        printf("%d game: tied\n",i);
        p=0;
        }
        else if((my==1)&&(comp==2))
        {
        printf("%d game: comp won\n",i);
        c++;
        }
        else if((my==1)&&(comp==3))
        {
        printf("%d game: you won\n",i);
        p++;
        }
        else if((my==2)&&(comp==1))
        {
        printf("%d game: you won\n",i);
        p++;
        }
        else if((my==2)&&(comp==3))
        {
        printf("%d game: comp won\n",i);
        c++;
        }
        else if((my==3)&&(comp==1))
        {
        printf("%d game: comp won\n",i);
        c++;
        }
        else if((my==3)&&(comp==2))
        {
        printf("%d game: you won\n",i);
        p++;
        }
    }
    if(c>p)
    {
        printf("you lost the game\n");
    }
    else if(c<p)
    {
        printf("you won the game\n");
    }
    else
    {
        printf("game tied\n");
    }
    
    return 0;
}
