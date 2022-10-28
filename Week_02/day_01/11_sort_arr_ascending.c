/*******************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 11_sort_arr_ascending.c
 * Brief:  Program to sort an one dimensional array in ascending order.
 * Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 * Title: Project Engineer ruggedBOARD.
 * Last Modified Date: 10.10.2022
 *
/*******************************/ 
#include <stdio.h>

int main()
{
    int array[100], n, i, j, swap;

    printf("Enter number of elements\n");
    scanf("%d", &n);

    printf("Enter %d integers\n", n);

    for (i = 0; i < n; i++)
        scanf("%d", &array[i]);

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j + 1])  
            {
                swap = array[j];
                array[j] = array[j + 1];
                array[j + 1] = swap;
            }
        }
    }

    printf("Sorted list in ascending order:\n");

    for (i = 0; i < n; i++)
        printf("%d\t", array[i]);

    return 0;
}