/*******************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 09_swap_adjacent_elements_arr.c
 * Brief:  Program to swap adjacent elements of a one dimensional array
 * Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 * Title: Project Engineer ruggedBOARD.
 * Last Modified Date: 10.10.2022
 *
/*******************************/ 
#include <stdio.h>

int main()
{
    //1
    int n;
    int i;
    int temp;

    //2
    printf("Total number of elements in an array : ");
    scanf("%d", &n);

    //3
    int array[n];

    //4
    for (i = 0; i < n; i++)
    {
        printf("Enter element for position %d : ", i + 1);
        scanf("%d", &array[i]);
    }

    //5
    printf("Array entered : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    //6
    for (i = 0; i < n; i += 2)
    {
        //7
        if (i + 1 == n)
        {
            break;
        }

        //8
        temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
    }

    //9
    printf("\nArray after reversing is done : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
}
