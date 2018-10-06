/*
 * =====================================================================================
 *
 *       Filename:  addBinary.c
 *
 *    Description:  Function to add 2 binary strings
 *
 *        Version:  1.0
 *        Created:  10/06/2018 11:40:50
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  SHANMUGAPRIYA RAVINDRAN
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>

//#define DEBUG

int main(void)
{
    char string1[64];
    char string2[64];
    char string3[64];

    int s1Len = 0,s2Len = 0, length = 0;
    int i = 0, carry = 0, sum = 0, s = 0;

    printf("Enter the 2 binary strings to be added(upto 64 bits\n");
    scanf("%s",string1);
    scanf("%s",string2);
#ifdef DEBUG
    printf("%s\n",string1);
    printf("%s\n",string2);
#endif
    s1Len = strlen(string1);
    s2Len = strlen(string2);
#ifdef DEBUG
    printf("s1Len %d\n",s1Len);
    printf("s2Len %d\n",s2Len);
#endif

    length = (s1Len > s2Len) ? s1Len : s2Len ;
#ifdef DEBUG
    printf("length %d\n",length);
#endif

    for(i =length-1; i>=0; i--)
    {
#ifdef DEBUG
        printf("i %d\n",i);
        printf("(string1[i]-'0') + (string2[i]-'0' =  %d\n",((string1[i]-'0') + (string2[i]-'0')));
#endif
        sum = ((string1[i]-'0') + (string2[i]-'0')) + carry;
        s = sum%2;
#ifdef DEBUG
        printf("s %d\n",s);
#endif
        carry = sum/2;
#ifdef DEBUG
        printf("carry %d\n",carry);
#endif
        string3[i+1] = s+'0';
    }
    if(carry)
        string3[i+1] = carry+'0';

    printf("sum: %s\n",string3);

    return 0;
}
