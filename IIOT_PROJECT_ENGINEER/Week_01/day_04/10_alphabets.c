/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 10_alphabets.c
 * Brief:  Program to print all upper case and lower case alphabets.
 * Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 * Title: Project Engineer ruggedBOARD
 * Last Modified Date: 29.09.2022
 *
/*********************************************************************************************/
 
#include <stdio.h>
 
int main()
{
    char i;
 
    printf("Capital (upper) case characters:\n");
    for(i='A'; i<='Z'; i++)
        printf("%c ",i);
 
    printf("\n\nLower case characters:\n");
    for(i='a'; i<='z'; i++)
        printf("%c ",i);
     
    return 0;
}
