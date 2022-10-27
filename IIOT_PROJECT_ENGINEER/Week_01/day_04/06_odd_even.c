/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 06_odd_even.c
 * Brief:  program to print all even and odd numbers from 1 to N.
 * Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 * Title: Project Engineer ruggedBOARD
 * Last Modified Date: 29.09.2022
 *
/*********************************************************************************************/
#include <stdio.h>

int checkEven(int num)
{
    /*if number (num) is divisible by 2, number is even*/
    if (num % 2 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int i, n;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (checkEven(i))
            printf("%4d [EVEN]\t", i);
        else
            printf("%4d [ODD]\t", i);
    }

    return 0;
}
