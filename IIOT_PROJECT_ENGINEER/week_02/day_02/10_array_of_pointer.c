/*******************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 10_array_of_pointer.c
 * Brief:  Program to demonstrate example of array of pointers.
 * Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 * Title: Project Engineer ruggedBoard.
 * Last Modified Date: 11.10.2022
 *
/*******************************/
#include <stdio.h>
 
int main()
{
    int p,q,r;
    int *ptr[3];
    ptr[0]= &p;
    ptr[1]= &q;
    ptr[2]= &r;
    p=100;
    q=200;
    r=300;
    printf("value of p: %d, q: %d, r: %d\n",*ptr[0],*ptr[1],*ptr[2]);
 
    *ptr[0] +=10;
    *ptr[1] +=10;
    *ptr[2] +=10;
    printf("After adding 10\nvalue of p: %d, q: %d, r: %d\n",*ptr[0],*ptr[1],*ptr[2]);
 
    return 0;
}
