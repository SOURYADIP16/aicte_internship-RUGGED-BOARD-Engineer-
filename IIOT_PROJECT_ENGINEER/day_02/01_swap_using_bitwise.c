/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 01_swap_using_bitwise.c
 * Brief:  Program to swap two number using Bitwise operator
 * Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 * Title: Project Engineer ruggedBOARD
 * Last Modified Date: 27.09.2022
 *
/*********************************************************************************************/
#include <stdio.h>

int main() {
    int i = 88;
    int k = 12;
    printf("The value of i=%d and k=%d before swapping.\n", i, k);

    i = i ^ k;
    k = i ^ k;
    i = i ^ k;
    printf("The value of i=%d and k=%d after swapping.", i, k);

    return 0;
}