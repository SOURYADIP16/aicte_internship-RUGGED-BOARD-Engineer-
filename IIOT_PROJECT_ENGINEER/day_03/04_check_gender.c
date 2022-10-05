/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 04_check_gender.c
 * Brief:  Program to read gender (M/F) and print corresponding gender using switch.
 * Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 * Title: Project Engineer ruggedBOARD
 * Last Modified Date: 28.09.2022
 *
/*********************************************************************************************/
 
#include <stdio.h>
 
int main()
{
    char gender;
     
    printf("Enter gender (M/m or F/f): ");
    scanf("%c",&gender);
     
    switch(gender)
    {
        case 'M':
        case 'm':
            printf("Male.");
            break;
        case 'F':
        case 'f':
            printf("Female.");
            break;
        default:
            printf("Unspecified Gender.");
    }
    printf("\n");
    return 0;
}
