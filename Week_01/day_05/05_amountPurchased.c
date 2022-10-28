/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 05_amountPurchased.c
 * Brief:  Program to find Total Amount of purchased Items by Passing Structure
           as an argument using User Define Functions.
 * Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 * Title: Project Engineer ruggedBOARD
 * Last Modified Date: 30.09.2022
 *
/*********************************************************************************************/
#include <stdio.h>

 
struct Item {
    char itemName[30];
    int quantity;
    float price, totalAmount;
};
float totalAmount(struct Item);

int main()
{
   
    struct Item IT;
    float tAmount; 

    printf("Enter Item Name (max 30 characters): ");
    scanf("%[^\n]s", IT.itemName);
    

    printf("Enter price: ");
    scanf("%f", &IT.price);

    printf("Enter quantity: ");
    scanf("%d", &IT.quantity);

 
    tAmount = totalAmount(IT);

    printf("Item Name: %s\nPrice: %f\nQuantity: %d\n", IT.itemName, IT.price, IT.quantity);
    printf("\nTotal Price of all quanities:Rs. %f\n", tAmount);
    return 0;
}
float totalAmount(struct Item item)
{

    item.totalAmount = item.price * (float)item.quantity;

    return (item.totalAmount);
}
