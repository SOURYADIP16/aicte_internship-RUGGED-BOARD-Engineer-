/*******************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 06_find_element_from_arr.c
 * Brief:  Program to find a number from array elements.
 * Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 * Title: Project Engineer ruggedBOARD.
 * Last Modified Date: 10.10.2022
 *
/*******************************/ 
#include <stdio.h>

int main()
{
  int array[100], search, i, n;

  printf("Enter number of elements in array:\n");
  scanf("%d", &n);

  printf("Enter %d integer(s)\n", n);

  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);

  printf("Enter a number to search\n");
  scanf("%d", &search);

  for (i = 0; i < n; i++)
  {
    if (array[i] == search)    /* If required element is found */
    {
      printf("%d is present at location %d.\n", search, i+1);
      break;
    }
  }
  if (i == n)
    printf("%d isn't present in the array.\n", search);

  return 0;
}