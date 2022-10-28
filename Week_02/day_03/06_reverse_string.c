/*******************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 06_reverse_string.c
 * Brief:  Program to reverse a string.
 * Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 * Title: Project Engineer ruggedBoard.
 * Last Modified Date: 12.10.2022
 *
/*******************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    printf("Enter String: ");
    gets(str);
    printf("Entered string is: %s\n", str);
    int start = 0, end = strlen(str) - 1;

    // Start variable points at the start of the string
    // End Variables points at the last index of the string
    while (start < end)
    {
        // Swapping characters at start and end
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Incrementing start and decrementing end
        start++;
        end--;
    }
    printf("Reversed string is: %s", str);

    return 0;
}