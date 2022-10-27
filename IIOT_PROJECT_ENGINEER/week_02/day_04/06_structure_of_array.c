/*******************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 06_structure_of_array.c
 * Brief:  Program to demonstrate example of structure of array.
 * Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 * Title: Project Engineer ruggedBoard.
 * Last Modified Date: 13.10.2022
 *
/*******************************/    

#include <stdio.h>

struct student {
    char name[30];
    int marks[5];
    int total;
    float perc;
};

int main()
{
    struct student std;
    int i;

    printf("Enter name: ");
    gets(std.name);

    printf("Enter marks:\n");
    std.total = 0;
    for (i = 0; i < 5; i++) {
        printf("Marks in subject %d : ", i + 1);
        scanf("%d", &std.marks[i]);
        std.total += std.marks[i];
    }
    std.perc = (float)((float)std.total / (float)500) * 100;

    printf("\nName: %s \nTotal: %d \nPercentage: %.2f", std.name, std.total, std.perc);

    return 0;
}
