/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 03_sum_ofall_elements.c
 * Brief:  Program to find Sum of all Array Elements by passing array as an
           argument using User Define Functions.
 * Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 * Title: Project Engineer ruggedBOARD
 * Last Modified Date: 30.09.2022
 *
/*********************************************************************************************/

/*  
C program to find Sum of all Array Elements by passing array 
as an argument using User Define Functions.
*/

#include <stdio.h>

#define MAX_ELEMENTS 100

int sumOfElements(int[], int);

int main()
{
    int N, i, sum;
    int arr[MAX_ELEMENTS];

    printf("Enter total number of elements(1 to %d): ", MAX_ELEMENTS);
    scanf("%d", &N);

    if (N > MAX_ELEMENTS) {
        printf("You can't input larger than MAXIMUM value\n");
        return 0;
    }
    else if (N < 0) {
        printf("You can't input NEGATIVE or ZERO value.\n");
        return 0;
    }

   
    printf("Enter array elements:\n");
    for (i = 0; i < N; i++) {
        printf("Enter element %4d: ", (i + 1));
        scanf("%d", &arr[i]);
    }

    sum = sumOfElements(arr, N);

    printf("\nSUM of all Elements: %d\n", sum);

    return 0;
}
 
int sumOfElements(int x[], int n)
{
    int sum, i;
    sum = 0;

    for (i = 0; i < n; i++) {
        sum += x[i];
    }

    return sum;
}
