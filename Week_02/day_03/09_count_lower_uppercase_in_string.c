/*******************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 09_count_lower_uppercase_in_string.c
 * Brief:  Program to count upper case and lower case characters in a string.
 * Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 * Title: Project Engineer ruggedBoard.
 * Last Modified Date: 12.10.2022
 *
/*******************************/

#include <stdio.h>

int main()
{
    char str[100];
    int countL, countU;
    int counter;
    countL = countU = 0;

    printf("Enter a string: ");
    gets(str);

    for (counter = 0; str[counter] != NULL; counter++) {

        if (str[counter] >= 'A' && str[counter] <= 'Z')
            countU++;
        else if (str[counter] >= 'a' && str[counter] <= 'z')
            countL++;
    }

    printf("Total Upper case characters: %d, Lower Case characters: %d", countU, countL);

    return 0;
}
