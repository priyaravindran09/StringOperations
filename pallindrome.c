/*
 * =====================================================================================
 *
 *       Filename:  pallindrome.c
 *
 *    Description:  Function to find if string is pallindrome or not
 *
 *        Version:  1.0
 *        Created:  10/05/2018 19:09:31
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  SHANMUGAPRIYA RAVINDRAN
 *
 *
 * =====================================================================================
 */


#include <stdio.h>
#include <stdbool.h>
#include <string.h>


bool checkPallindrome(char* str)
{
    int length,i;

    length = strlen(str);
    printf("length %d\n",length);

    for(i=0; i<length/2; i++)
    {
        printf("*(str+i) %c-",*(str+i));
        printf("*(str+length-1-i) %c*",*(str+length-1-i));
        if(*(str+i) != *(str+length-1-i))
            return false;

    }

    return true;
}


int main(void)
{
    char string[50];

    printf("Enter the string for pallindrome check.\nString needs to be all in uppercase or all in lower case.\n");
    scanf("%s",string);

    if(checkPallindrome(string))
        printf("\nGiven string is a pallindrome\n");
    else
        printf("\nGiven string is not a pallindrome\n");

    return 0;

}
