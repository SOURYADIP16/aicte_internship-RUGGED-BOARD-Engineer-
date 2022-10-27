/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 08_math.c
 * Brief:  Program to print square, cube and square root of all numbers from 1 to N.
 * Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 * Title: Project Engineer ruggedBOARD
 * Last Modified Date: 29.09.2022
 *
/*********************************************************************************************/
#include <stdio.h>
#include <math.h>
 
int main()
{
    int i,n;
 
    printf("Enter the value of N: ");
    scanf("%d",&n);
 
    printf("No     Square   Cube    Square Root\n");
    for(i=1;i<=n;i++)
    {
        printf("%d \t %d \t %d \t %.2f\n",i,(i*i),(i*i*i),sqrt((double)i));
    }
     
    return 0;
}