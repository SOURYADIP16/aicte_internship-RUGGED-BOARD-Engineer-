/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 05_swap_nibbles.c
 * Brief:  Program to swap nibbles of a byte/word.
 * Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 * Title: Project Engineer ruggedBOARD
 * Last Modified Date: 27.09.2022
 *
/*********************************************************************************************/
#include <stdio.h>

unsigned char swapNibbles(unsigned char x)
{
	return ( (x & 0x0F)<<4 | (x & 0xF0)>>4 );
}

int main()
{
	unsigned char x = 200;
	printf("The no. after swapping nibbles : %u", swapNibbles(x));
	return 0;
}
