#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b;
    printf("enter a,b= ");
    scanf("%d%d",&a,&b);
    printf("%d+%d=%d",a,b,add(a,b));
    return 0;
}
int add(int x, int y)
{
    return (x+y);
}
