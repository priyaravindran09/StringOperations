/*
 * =====================================================================================
 *
 *       Filename:  strrev.c
 *
 *    Description:  String reversal in place
 *
 *        Version:  1.0
 *        Created:  10/04/2018
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  SHANMUGAPRIYA RAVINDRAN
 *
 * =====================================================================================
 */


#include <stdio.h>

int strlen_my(const char* s)
{
    int i = 0,length = 0;

    while(*(s+i) != '\0')
    {
        length++;
        i++;
    }

    return length;
}

char* myStrRev(char* strg)
{
    int strLen = 0, i = 0, mid = 0;
    char temp;


    strLen = strlen_my(strg);
    printf("length = %d\n",strLen);

    mid = strLen/2;
    printf("mid = %d\n",mid);


    for(i=0; i<=strLen/2; i++)
    {
        temp = *(strg+i);
        *(strg+i) = *(strg+strLen-i-1);
        *(strg+strLen-i-1) = temp;
    }

    return strg;
}

int main(void)
{

    char string[100];
    char* reversedString;

    printf("Reverse the given string\n Enter the string to be reversed\n");
    scanf("%s",string);

    reversedString = myStrRev(string);

    printf("The reversed string is %s\n",reversedString);

    return 0;
}
