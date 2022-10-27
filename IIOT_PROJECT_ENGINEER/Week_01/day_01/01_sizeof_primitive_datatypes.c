/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 01_sizeof_primitive_datatypes.c
 * Brief:  Program to find size of the primary datatypes.
 * Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 * Title: Project Engineer ruggedBoard.
 * Last Modified Date: 26.09.2022
 *
/*********************************************************************************************/
#include <stdio.h>
int main()
{
    int integerType;
    float floatType;
    double doubleType;
    char charType;

    // Sizeof operator is used to evaluate the size of a variable
    printf("Size of int: %lu bytes\n",sizeof(integerType));
    printf("Size of unsigned int: %lu bytes \n", sizeof(unsigned int));
    printf("Size of long int: %lu bytes \n", sizeof(long int));
    printf("Size of long long int: %lu bytes \n", sizeof(long long int));
    printf("\n");
    printf("Size of float: %lu bytes\n",sizeof(floatType));
    printf("Size of double: %lu bytes\n",sizeof(doubleType));
    printf("Size of long double: %lu bytes \n", sizeof(long double));
    printf("\n");
    printf("Size of char: %lu byte\n",sizeof(charType));

    return 0;
}