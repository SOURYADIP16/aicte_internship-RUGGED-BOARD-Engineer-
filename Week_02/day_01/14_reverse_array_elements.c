/*******************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 14_reverse_array_elements.c
 * Brief:  Program to create array with reverse elements of one dimensional array.
 * Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 * Title: Project Engineer ruggedBOARD.
 * Last Modified Date: 10.10.2022
 *
/*******************************/ 
#include <stdio.h>
 
int main(){
    int arr[20];
    int n,i,temp;
    printf("Enter number of elements\n");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Printing user input array:\n");
    for(i = 0; i < n; i++){
        printf("%d\t", arr[i]);
    }

    for(int i = 0; i<n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }

    printf("\nThe required reversed array:\n");
    for(int i = 0; i < n; i++){
        printf("%d\t", arr[i]);
    }

return 0;
}