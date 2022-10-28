/*******************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 08_print_sizeof_pointer_variable.c
 * Brief:  Program to print size of different types of pointer variables.
 * Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 * Title: Project Engineer ruggedBoard.
 * Last Modified Date: 11.10.2022
 *
/*******************************/
#include <stdio.h>
 
int main()
{
    printf("\nsize of char pointer: %d"     ,sizeof(char*));
    printf("\nsize of int pointer: %d"      ,sizeof(int*));
    printf("\nsize of float pointer: %d"    ,sizeof(float*));
    printf("\nsize of long int pointer: %d" ,sizeof(long int*));
    printf("\nsize of double pointer: %d\n" ,sizeof(double*));
    return 0;
}
