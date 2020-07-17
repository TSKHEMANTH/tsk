/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float n,k,sum=0;
    int a[100],i;
    float avg;
    printf("enter n=");
    scanf("%f",&n);
    printf("enter the numbers");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("%f",sum);
    avg=(sum/n);
    printf("avg is %f",avg);
    return 0;
}
