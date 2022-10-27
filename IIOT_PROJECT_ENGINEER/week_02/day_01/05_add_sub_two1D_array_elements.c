/*******************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 05_add_sub_two1D_array_elements.c
 * Brief:  Program to Add and Subtract of Two One Dimensional Array elements.
 * Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 * Title: Project Engineer ruggedBOARD.
 * Last Modified Date: 10.10.2022
 *
/*******************************/ 
 
#include<stdio.h>
#define MAX 20 
 
void    readArray(int a[],int size) 
{ 
    int i; 
    for(i=0;i< size;i++) 
    { 
        printf("Enter %d element :",i+1); 
        scanf("%d",&a[i]); 
    } 
} 
 

void printArray(int a[],int size) 
{ 
    int i; 
    for(i=0;i < size; i++) 
        printf("%5d",a[i]); 
} 
 
void addArray(int a[],int b[],int c[],int size) 
{ 
    int i; 
    for(i=0; i< size;i++) 
        c[i]=a[i]+b[i]; 
} 

void subArray(int a[],int b[],int c[],int size) 
{ 
        int i; 
        for(i=0; i< size;i++) 
                c[i]=a[i]-b[i]; 
} 
 
int main() 
{ 
    int A[MAX],B[MAX],ADD[MAX],SUB[MAX]; 
    int i,n; 
 
 
    printf("\nEnter size of an Array :"); 
    scanf("%d",&n); 
 
    printf("\nEnter elements of Array 1:\n"); 
    readArray(A,n); 
    printf("\nEnter elements of Array 2:\n"); 
    readArray(B,n); 
 
    /* add Arrays*/
    addArray(A,B,ADD,n); 
    /* subtract two Arrays*/
    subArray(A,B,SUB,n); 
 
    printf("\nArray elements after adding :\n"); 
    printArray(ADD,n); 
 
    printf("\nArray elements after subtracting :\n"); 
    printArray(SUB,n); 
 
    printf("\n\n"); 
    return 0; 
}