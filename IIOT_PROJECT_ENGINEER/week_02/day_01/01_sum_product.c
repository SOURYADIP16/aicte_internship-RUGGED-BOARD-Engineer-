/*******************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 01_sum_product.c
 * Brief:  Program to calculate Sum, Product of all elements.
 * Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 * Title: Project Engineer ruggedBoard.
 * Last Modified Date: 10.10.2022
 *
/*******************************/
 
#include <stdio.h>  
int main() 
{ 
    int arr[10]; 
    int sum,product,i,n;
  
    printf("\nEnter the size of an array:\n"); 
    scanf("%d",&n);
    printf("Enter the elements -\n");
    for(i=0; i<n; i++) 
    { 
        printf("Enter arr[%d] : ",i); 
        scanf("%d",&arr[i]); 
    } 

    sum=0;
    product=1;
    for(i=0; i<n; i++)
    {
        sum=sum+arr[i];
        product=product*arr[i];
    }
       
    printf("\nSum of array is: %d"  ,sum); 
    printf("\nProduct of array is: %d\n",product); 
  
    return 0; 
}
