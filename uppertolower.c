/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char ch;
    printf("enter the character=");
    scanf("%c",&ch);
    if (ch>=65 && ch<=90)
    {
        printf("the smalls of %c is %c",ch,ch-'A'+'a');
    }
    else
    {
        printf("the character %c is small",ch);
    }
    return 0;
}
