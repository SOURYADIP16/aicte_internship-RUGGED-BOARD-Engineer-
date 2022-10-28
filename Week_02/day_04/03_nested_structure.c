/*******************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 03_nested_structure.c
 * Brief:  Program to demonstrate example of nested structure.
 * Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 * Title: Project Engineer ruggedBoard.
 * Last Modified Date: 13.10.2022
 *
/*******************************/ 
#include <stdio.h>

struct student {
    char name[30];
    int rollNo;

    struct dateOfBirth {
        int dd;
        int mm;
        int yy;
    } DOB;  
};

int main()
{
    struct student std;

    printf("Enter name: ");
    gets(std.name);
    
    printf("Enter roll number: ");
    scanf("%d", &std.rollNo);
    
    printf("Enter Date of Birth [DD MM YY] format: ");
    scanf("%d%d%d", &std.DOB.dd, &std.DOB.mm, &std.DOB.yy);
    
    printf("\nName : %s \nRollNo : %d \nDate of birth : %02d/%02d/%02d\n", std.name, std.rollNo, std.DOB.dd, std.DOB.mm, std.DOB.yy);

    return 0;
}
 

 