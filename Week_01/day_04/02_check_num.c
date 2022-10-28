/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 02_check_num.c
 * Brief:  Program to check entered number is ZERO, POSITIVE or NEGATIVE until user does not want to quit.
 * Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 * Title: Project Engineer ruggedBOARD
 * Last Modified Date: 29.09.2022
 *
/*********************************************************************************************/
#include<stdio.h>
int main()
{
    int number, positive = 0, negative = 0, zero = 0;
    char choice='Y';

    do
    {
        printf("Enter a number: ");
        scanf("%d", &number);

        if (number > 0)
        {
            positive++;
        }
        else if (number < 0)
        {
            negative++;
        }
        else
        {
            zero++;
        }

        printf("Do you want to Continue(y/n)? ");
        scanf(" %c", &choice); //note the space before " %c" otherwise your while loop would not work

    }while(choice == 'y' || choice == 'Y');


    printf("\nPositive Numbers :%d\nNegative Numbers :%d\nZero Numbers :%d", positive, negative, zero);

    return 0;
}