/*
 * =====================================================================================
 *
 *       Filename:  stringcopy.c
 *
 *    Description:  Copy one string from one to another
 *
 *        Version:  1.0
 *        Created:  10/04/2018 20:05:33
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  SHANMUGAPRIYA RAVINDRAN
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>


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

char* strcpy_my(char* string1,char* string2)
{
    int strLen = 0, i;
    strLen = strlen_my(string1);
    printf("%d\n",strLen);
    for(i=0; i<strLen; i++)
    {
        *(string2+i) = *(string1+i);
    }

    return string2;
}


int main(void)
{
    char string1[] = "CopyMe";
    char* string2;

    int strLen = 0;
    strLen = strlen_my(string1);

    string2 = (char*) malloc(strLen * sizeof(int));


    printf("Copied string is %s\n",strcpy_my(string1,string2));

    return 0;

}
