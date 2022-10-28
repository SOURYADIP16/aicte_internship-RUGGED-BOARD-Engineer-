/*******************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 06_print_value_with_address_ofelements.c
 * Brief:  Program to read array elements and print with addresses.
 * Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 * Title: Project Engineer ruggedBoard.
 * Last Modified Date: 11.10.2022
 *
/*******************************/

#include <stdio.h>
 
int main()
{
    int arr[10];        
    int *pa;             
    int  i;
     
    pa=&arr[0];          
     
    printf("Enter array elements:\n");
    for(i=0;i < 10; i++){
        printf("Enter element %02d: ",i+1);
        scanf("%d",pa+i);   
    }
     
    printf("\nEntered array elements are:");
    printf("\nAddress\t\tValue\n");
    for(i=0;i<10;i++){
        printf("%08X\t%03d\n",(pa+i),*(pa+i));
    }
     
     
    return 0;
}
