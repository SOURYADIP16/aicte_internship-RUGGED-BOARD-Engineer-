/*******************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 10_occurance_ofelements_in_arr.c
 * Brief:  Program to find occurrence of an element in one dimensional array.
 * Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 * Title: Project Engineer ruggedBOARD.
 * Last Modified Date: 10.10.2022
 *
/*******************************/ 
#include <stdio.h>

int main()
{
	int Size, i, num, occr = 0;

	printf("Please Enter the Array size = ");
	scanf("%d", &Size);

	int arr[Size];
	
	printf("Enter the Array %d elements : ", Size);
	for (i = 0; i < Size; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("Please Enter the Array Item to Know = ");
	scanf("%d", &num);

	for (i = 0; i < Size; i++)
	{
		if (arr[i] == num)
		{
			occr++;
		}
	}

	printf("%d Occurred %d Times.\n", num, occr);
return 0;
}