/*******************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 07_structure_with_pointer.c
 * Brief:  Program to demonstrate example structure pointer (structure with pointer).
 * Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 * Title: Project Engineer ruggedBoard.
 * Last Modified Date: 13.10.2022
 *
/*******************************/   

#include <stdio.h>

struct item {
    char itemName[30];
    int qty;
    float price;
    float amount;
};

int main()
{
    struct item itm;  
    struct item* pItem;  

    pItem = &itm;  
    printf("Enter product name: ");
    gets(pItem->itemName);
    printf("Enter price:");
    scanf("%f", &pItem->price);
    printf("Enter quantity: ");
    scanf("%d", &pItem->qty);
 
    pItem->amount = (float)pItem->qty * pItem->price;
 
    printf("\nName: %s", pItem->itemName);
    printf("\nPrice: %f", pItem->price);
    printf("\nQuantity: %d", pItem->qty);
    printf("\nTotal Amount: %f", pItem->amount);

    return 0;
}
