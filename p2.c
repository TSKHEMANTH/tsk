/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char c[100];
    int i,j,n,k=0;
    printf("enter array length: ");
    scanf("%d",&n);
    printf("enter array: ");
    scanf("%s",&c);
    printf("array is: ");
    printf("%s",c);
    printf("\n");
    for(i=1;i<=n;i++)
    {
     for(j=i+1;j<=n;j++)
     {
         if(c[i+k]==c[j+k])
         {  
            k++;
         }
     }
    }
    printf("max length of substring without repetitions: %d",k);
    return 0;
}
