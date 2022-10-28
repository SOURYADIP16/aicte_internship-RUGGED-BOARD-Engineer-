/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: arithmatic.c
 * Brief:  Write a simple c program to add,subtract,multiply,divide,modulus,increment and 
 *         decrement the numbers
 * Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 * Title: Project Engineer ruggedBoard.
 * Last Modified Date: 26.09.2022
 *
/*********************************************************************************************/
#include <stdio.h>
int main(){
    /* Variable declation */
    int a,b;
    int sum, difference, product, modulo;
    float quotient;
     
     
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
     
    sum = a + b;
    difference = a - b;
    product = a * b; 
    quotient = (float)a / b;
    modulo = a % b;
     
    printf("\nSum = %d", sum);
    printf("\nDifference  = %d", difference);
    printf("\nMultiplication = %d", product);
    printf("\nDivision = %.3f", quotient);
    printf("\nRemainder = %d", modulo);
    printf("\nIncrement the value of a by 1 : %d\n",a+1);
    printf("Decrement the value of b by 1 : %d\n",--b);
    return 0;
}