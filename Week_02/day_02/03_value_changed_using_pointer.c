/*******************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 03_value_changed_using_pointer.c
 * Brief:  Program to change the value of constant integer using pointers.
 * Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 * Title: Project Engineer ruggedBoard.
 * Last Modified Date: 11.10.2022
 *
/*******************************/
#include <stdio.h>
 
int main()
{
    const int a=20;     //declare and assign constant integer
    int *p;             //declare integer pointer
    p=&a;               //assign address into pointer p
 
    printf("Before changing - value of a: %d",a);
 
    //assign value using pointer
    *p=40;
 
    printf("\nAfter  changing - value of a: %d",a);
    printf("\nValue has changed.");
 
    return 0;
}