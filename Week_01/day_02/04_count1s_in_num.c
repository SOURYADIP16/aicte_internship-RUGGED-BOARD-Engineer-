/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 04_count1s_in_num.c
 * Brief:  Program to count number of 1's in a number.
 * Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 * Title: Project Engineer ruggedBOARD
 * Last Modified Date: 27.09.2022
 *
/*********************************************************************************************/
#include <stdio.h>
void count1s(int N)
{
	int count0 = 0, count1 = 0;
	while (N > 0) {
		if (N & 1) {
			count1++;
		}
		else {
			count0++;
		}
		N = N >> 1;
	}
	printf("Count of 1s in N is %d\n", count1);
}
int main()
{
	int N = 9;
	count1s(N);
	return 0;
}
