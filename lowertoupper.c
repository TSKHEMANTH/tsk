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
    if(ch>=97 && ch<=122)
    {
        printf("the caps letter of %c is %c",ch,ch-'a'+'A');
    }
    else
    {
        printf("the character %c is already in caps",ch);
    }
    return 0;
}
