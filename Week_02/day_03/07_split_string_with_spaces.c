/*******************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 07_split_string_with_spaces.c
 * Brief:  Program to split string by space into words.
 * Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 * Title: Project Engineer ruggedBoard.
 * Last Modified Date: 12.10.2022
 *
/*******************************/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char splitStrings[10][10];  
    int i, j, cnt;

    printf("Enter a string: ");
    gets(str);

    j = 0;
    cnt = 0;
    for (i = 0; i <= (strlen(str)); i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            splitStrings[cnt][j] = '\0';
            cnt++;  
            j = 0;  
        }
        else {
            splitStrings[cnt][j] = str[i];
            j++;
        }
    }
    printf("\nOriginal String is: %s", str);
    printf("\nStrings (words) after split by space:\n");
    for (i = 0; i < cnt; i++)
        printf("%s\n", splitStrings[i]);
    
    return 0;
}
