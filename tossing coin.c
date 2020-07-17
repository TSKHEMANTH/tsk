/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int random_num()
{ 
    int upper=1, lower=0,count=1;
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
   int coin;
   printf("tossing a coin\n");
   coin=random_num();
   if(coin==0)
   {
       printf("heads\n");
   }
   else if(coin==1)
   {
       printf("tails\n");
   }
    return 0;
}
    