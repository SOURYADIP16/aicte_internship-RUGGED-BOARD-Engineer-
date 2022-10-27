/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 04_str_length.c
 * Brief:  Program to find Length of the String by passing String/ Character Array 
           as an argument using User Define Functions.
 * Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 * Title: Project Engineer ruggedBOARD
 * Last Modified Date: 30.09.2022
 *
/*********************************************************************************************/

#include <stdio.h>

int stringLength(char*);

int main()
{
    char text[100];
    int length;

    printf("Enter text (max- 100 characters): ");
    scanf("%[^\n]s", text);
     

    length = stringLength(text);

    printf("Input text is: %s\n", text);
    printf("Length is: %d\n", length);

    return 0;
}
 
int stringLength(char* str)
{
    int len = 0;

    for (len = 0; str[len] != '\0'; len++)
        ;
 
    return len;
}

int stringLen(char* str)
{
    int len = 0;
    for (len = 0; str[len] != '\0'; len++)
        ;
    return len;
}
