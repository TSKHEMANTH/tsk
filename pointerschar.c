/******************************************************************************

                            Online C Compiler.
                 Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char ch;
    printf("enter character: ");
    scanf("%c",&ch);
    char *ptr;
    ptr=&ch;
    printf("value of ch: %c\n",ch);
    printf("value of ch: %u\n",*ptr);
    printf("address of ch: %u\n",ptr);
    printf("address of ch: %u\n",&ch);
    printf("value of ptr: %u\n",ptr);
    return 0;
}