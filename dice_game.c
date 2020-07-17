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
    printf("Rolling of DICE\n");
    printf("only 1,2,3,4,5,6\n");
    int i,n,p[100];
    printf("enter no. of persons: ");
    scanf("%d",&n);
    printf("\n");
    for(i=1;i<=n;i++)
    {
        printf("chance of person %d: ",i);
        p[i]=random_num();
        printf("\n");
    }
    return 0;
}
    