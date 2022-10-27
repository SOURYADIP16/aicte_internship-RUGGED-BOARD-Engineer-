/*******************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 03_replace_odd_even_0_1.c
 * Brief:  Program to replace all EVEN elements by 0 and Odd by 1 in One Dimensional Array.
 * Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 * Title: Project Engineer ruggedBOARD.
 * Last Modified Date: 10.10.2022
 *
/*******************************/ 
#include <stdio.h>
 
void readArray(int arr[], int n)
{
    int i = 0;

    printf("\nEnter elements : \n");

    for (i = 0; i < n; i++) {
        printf("Enter arr[%d] : ", i);
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int n)
{
    int i = 0;

    printf("\nElements are : ");

    for (i = 0; i < n; i++) {
        printf("\n\tarr[%d] : %d", i, arr[i]);
    }
    printf("\n");
}

void replaceEvenOdd(int arr[], int n)
{
    int i = 0;

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            arr[i] = 0;
        else
            arr[i] = 1;
    }
}

int main()
{
    int arr[100];

    readArray(arr, 10);

    printf("\nBefore replacement : ");
    printArray(arr, 10);

    replaceEvenOdd(arr, 10);

    printf("\nAfter replacement : ");
    printArray(arr, 10);

    return 0;
}
