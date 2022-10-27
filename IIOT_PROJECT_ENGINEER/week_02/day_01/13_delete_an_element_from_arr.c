/*******************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 13_delete_an_element_from_arr.c
 * Brief:  Program to delete given element from one dimensional array.
 * Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 * Title: Project Engineer ruggedBOARD.
 * Last Modified Date: 10.10.2022
 *
/*******************************/ 
#include <stdio.h>

int main()
{
    int array[100], position, c, n;
    
    printf("Enter number of elements in array\n");
    scanf("%d", &n);
    
    printf("Enter %d elements\n", n);
    
    for ( c = 0 ; c < n ; c++ )
    scanf("%d", &array[c]);
    
    printf("Enter the location where you wish to delete element\n");
    scanf("%d", &position);
    
    if ( position >= n+1 )    
    printf("Deletion not possible.\n");
    
    else
    {    
        for ( c = position - 1 ; c < n - 1 ; c++ ) 
        array[c] = array[c+1];        
        
        printf("Resultant array is\n");
        
        for( c = 0 ; c < n - 1 ; c++ )        
        printf("%d\n", array[c]);        
    }    
    return 0;
}