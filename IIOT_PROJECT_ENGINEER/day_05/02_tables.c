/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 02_tables.c
 * Brief:  Program to print Table of an Integer Number using User Define Functions.
 * Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 * Title: Project Engineer ruggedBOARD
 * Last Modified Date: 30.09.2022
 *
/*********************************************************************************************/
#include<stdio.h>  
  
void tables(int);  
  
int main()  
{  
    int num;  
  
    printf("Enter a positive number:\n");  
    scanf("%d", &num);  
  
    printf("\nMultiplication Table for %d is:\n", num);  
  
    tables(num);  
  
    return 0;  
}  
  
void tables(int num)  
{  
    int count;  
  
    for(count = 1; count <= 10; count++)  
    {  
        printf("%d x %d = %d\n", num, count, num*count);  
    }  
}  