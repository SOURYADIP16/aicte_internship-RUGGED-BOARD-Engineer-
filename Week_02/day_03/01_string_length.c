/*******************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 01_string_length.c
 * Brief:  Program to calculate length of the string.
 * Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 * Title: Project Engineer ruggedBoard.
 * Last Modified Date: 12.10.2022
 *
/*******************************/
#include <stdio.h>
#include <string.h>

int main()
{
  char a[100];
  int length;

  printf("Enter a string to calculate its length\n");
  gets(a);

  length = strlen(a);

  printf("Length of the string = %d\n", length);

  return 0;
}
