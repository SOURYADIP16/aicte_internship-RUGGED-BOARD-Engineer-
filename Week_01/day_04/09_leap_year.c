/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 09_leap_year.c
 * Brief:  Program to print all leap years from 1 to N.
 * Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 * Title: Project Engineer ruggedBOARD
 * Last Modified Date: 29.09.2022
 *
/*********************************************************************************************/
 
 
#include <stdio.h>
 
//function to check leap year
int checkLeapYear(int year)
{
    if( (year % 400==0)||(year%4==0 && year%100!=0) )
        return 1;
    else
        return 0;
}
 
int main()
{
    int i,n;
    printf("The required leap years are as follows :\n");
    printf("Enter the value of nth year starting from 1: ");
    scanf("%d",&n);
 
    printf("Leap years from 1 to %d:\n",n);
    for(i=1;i<=n;i++)
    {
        if(checkLeapYear(i))
            printf("%d\t",i);
    }
     
    return 0;
}
