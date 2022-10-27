/*******************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 01_pointers_basics.c
 * Brief:  Program to create, initialize, assign and access a pointer variable.
 * Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 * Title: Project Engineer ruggedBoard.
 * Last Modified Date: 11.10.2022
 *
/*******************************/
 
#include <stdio.h>

int main()
{
    int num;    /*declaration of integer variable*/
    int *pNum;  /*declaration of integer pointer*/
 
    pNum=& num; /*assigning address of num*/
    num=50;    /*assigning 100 to variable num*/
 
    //access value and address using variable num
    printf("Using variable num:\n");
    printf("value of num: %d\naddress of num: %u\n",num,&num);
    //access value and address using pointer variable num
    printf("Using pointer variable:\n");
    printf("value of num: %d\naddress of num: %u\n",*pNum,pNum);
 
   return 0;
}
