/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 03_weekdaynum_name.c
 * Brief:  Program to read weekday number and print weekday name using switch.
 * Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 * Title: Project Engineer ruggedBOARD
 * Last Modified Date: 28.09.2022
 *
/*********************************************************************************************/
/*C program to read weekday number and print weekday name using switch.*/
 
#include <stdio.h>
 
int main()
{
    int wDay;
     
    printf("Enter weekday number (0-6): ");
    scanf("%d",&wDay);
     
    switch(wDay)
    {
        case 0: 
            printf("Sunday");
            break;
        case 1: 
            printf("Monday");
            break;
        case 2: 
            printf("Tuesday");
            break;
        case 3: 
            printf("Wednesday");
            break;
        case 4: 
            printf("Thursday");
            break;
        case 5: 
            printf("Friday");
            break;
        case 6: 
            printf("Saturday");
            break;
        default:
            printf("Invalid weekday number.");
    }
    printf("\n");
    return 0;
}
