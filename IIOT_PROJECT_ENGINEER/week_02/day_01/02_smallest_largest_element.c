/*******************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 02_smallest_largest_element.c
 * Brief:  Program to find Smallest and Largest elements from One Dimensional Array Elements.
 * Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 * Title: Project Engineer ruggedBOARD.
 * Last Modified Date: 10.10.2022
 *
/*******************************/
#include <stdio.h>

int main()
{
    int arr[20], n, i, small, large;

    printf("Enter the number of elements you want to insert : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    small = arr[0];
    large = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
        }
        
        if (arr[i] > large)
        {
            large = arr[i];
        }
    }

    printf("\nLargest element is : %d", large);
    printf("\nSmallest element is : %d", small);

    return 0;
}