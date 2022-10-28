/*******************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 10_count_digits_spaces_special_characters_alphabets.c
 * Brief:  Program to count digits, spaces, special characters, alphabets in a string.
 * Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 * Title: Project Engineer ruggedBoard.
 * Last Modified Date: 12.10.2022
 *
/*******************************/

#include <stdio.h>

int main()
{
    char str[100];
    int countDigits, countAlphabet, countSpecialChar, countSpaces;
    int counter;
    countDigits = countAlphabet = countSpecialChar = countSpaces = 0;

    printf("Enter a string: ");
    gets(str);

    for (counter = 0; str[counter] != NULL; counter++) {

        if (str[counter] >= '0' && str[counter] <= '9')
            countDigits++;
        else if ((str[counter] >= 'A' && str[counter] <= 'Z') || (str[counter] >= 'a' && str[counter] <= 'z'))
            countAlphabet++;
        else if (str[counter] == ' ')
            countSpaces++;
        else
            countSpecialChar++;
    }

    printf("\nDigits: %d \nAlphabets: %d \nSpaces: %d \nSpecial Characters: %d", countDigits, countAlphabet, countSpaces, countSpecialChar);

    return 0;
}
