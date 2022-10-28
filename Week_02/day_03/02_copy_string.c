/*******************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 02_copy_string.c
 * Brief:  Program to copy one string to another.
 * Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 * Title: Project Engineer ruggedBoard.
 * Last Modified Date: 12.10.2022
 *
/*******************************/
#include <stdio.h>
#define MAX_SIZE 100  

int main()
{
    char text1[MAX_SIZE];
    char text2[MAX_SIZE];
    int i;
    printf("Enter any string: ");
    fgets(text1,MAX_SIZE,stdin);
    for(i=0; text1[i]!='\0'; i++)
    {
        text2[i] = text1[i];
    }
    text2[i] = '\0';

    printf("First string = %s\n", text1);
    printf("Second string = %s\n", text2);
   

    return 0;
}