/*******************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 05_concatenate_two_strings.c
 * Brief:  Program to concatenate two strings without using library function.
 * Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 * Title: Project Engineer ruggedBoard.
 * Last Modified Date: 12.10.2022
 *
/*******************************/
#include <stdio.h>
#include <string.h>
void concat(char[], char[]);
int main()
{
    char s1[50], s2[30];
    printf("\nEnter String 1 :");
    gets(s1);
    printf("\nEnter String 2 :");
    gets(s2);
    concat(s1, s2);
    printf("\nConcated string is :%s", s1);
    return (0);
}
void concat(char s1[], char s2[])
{
    int i, j;
    i = strlen(s1);
    for (j = 0; s2[j] != '\0'; i++, j++)
    {
        s1[i] = s2[j];
    }
    s1[i] = '\0';
}