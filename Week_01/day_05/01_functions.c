/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 01_functions.c
 * Brief:  Program to find SUM and AVERAGE of two integer Numbers using User Define Function
 * Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 * Title: Project Engineer ruggedBOARD
 * Last Modified Date: 30.09.2022
 *
/*********************************************************************************************/
 
#include <stdio.h>

/*function declarations*/
int sumTwoNum(int, int);  
float averageTwoNum(int, int); 

int main()
{
    int number1, number2;
    int sum;
    float avg;

    printf("Enter the first integer number: ");
    scanf("%d", &number1);

    printf("Enter the second integer number: ");
    scanf("%d", &number2);

     
    sum = sumTwoNum(number1, number2);
    avg = averageTwoNum(number1, number2);

    printf("Number1: %d, Number2: %d\n", number1, number2);
    printf("Sum: %d, Average: %f\n", sum, avg);

    return 0;
}

int sumTwoNum(int x, int y)
{ 
    int sum;
    sum = x + y;
    return sum;
}
float averageTwoNum(int x, int y)
{
    float average;
    return ((float)(x) + (float)(y)) / 2;
}
