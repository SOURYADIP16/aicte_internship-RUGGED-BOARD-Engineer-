/*******************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 05_count_vowels_const_using_pointer.c
 * Brief:  Program to count vowels and consonants in a string using pointer.
 * Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 * Title: Project Engineer ruggedBoard.
 * Last Modified Date: 11.10.2022
 *
/*******************************/
#include <stdio.h>
int main()
{
    char str[100];
    char *p;
    int  vCount=0,cCount=0;

    printf("Enter any string: ");
    fgets(str, 100, stdin);

    p=str;

    while(*p!='\0')
    {
        if(*p=='A' ||*p=='E' ||*p=='I' ||*p=='O' ||*p=='U'
        		||*p=='a' ||*p=='e' ||*p=='i' ||*p=='o' ||*p=='u')
            vCount++;
        else
            cCount++;
        p++;
    }

    printf("Number of Vowels in String: %d\n",vCount);
    printf("Number of Consonants in String: %d",cCount);
    return 0;
}


 