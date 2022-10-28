/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 02_largest_among_three.c
 * Brief:  Program to find largest number among three numbers.
 * Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 * Title: Project Engineer ruggedBOARD
 * Last Modified Date: 28.09.2022
 *
/*********************************************************************************************/
#include <stdio.h>

int main()
{
	int n1,n2,n3,max;
    printf("enter the first number: ");
    scanf("%d",&n1);
    printf("enter the second number: ");
    scanf("%d",&n2);
    printf("enter the third number: ");
    scanf("%d",&n3);
	max = (n1 > n2) ? (n1 > n3 ? n1 : n3) : (n2 > n3 ? n2 : n3);
	printf("Largest number among %d, %d and %d is %d.",n1, n2, n3, max);

	return 0;
}
