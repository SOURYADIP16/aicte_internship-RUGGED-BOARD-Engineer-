/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 03_min_bits_as_int.c
 * Brief:  Program to get minimum number of bits to store an integer number.
 * Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 * Title: Project Engineer ruggedBOARD
 * Last Modified Date: 27.09.2022
/*********************************************************************************************/
#include <stdio.h>
int countBit(int);
int main()
{
	int num;
	printf("Enter an integer number :");
	scanf("%d",&num);

	printf("Total number of bits required = %d\n",countBit(num));
	return 0;
}

int countBit(int n)
{
	int count=0,i;
	if(n==0) return 0;
	for(i=0; i< 32; i++)
	{	
		if( (1 << i) & n)
			count=i;
	}
	return ++count;
}
