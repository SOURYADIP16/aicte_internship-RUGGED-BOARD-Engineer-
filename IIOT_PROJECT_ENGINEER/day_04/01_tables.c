/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 01_tables.c
 * Brief:  Program to print tables from numbers 1 to 20.
 * Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 * Title: Project Engineer ruggedBOARD
 * Last Modified Date: 29.09.2022
 *
/*********************************************************************************************/
#include <stdio.h>
int main() {
	for (int table = 1; table <= 20; table++) {
		for (int i = 1; i <= 10; i++) {
			printf("%d * %d = %d \n", table, i, (table * i));
		}
		printf("---------- \n");
	}
}
