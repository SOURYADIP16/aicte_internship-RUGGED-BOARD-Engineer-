/*******************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 01_create_declare_initialize_structure.c
 * Brief:  Program to create, declare and initialize structure.
 * Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 * Title: Project Engineer ruggedBoard.
 * Last Modified Date: 13.10.2022
 *
/*******************************/
#include <stdio.h>

struct employee {
    char name[30];
    int empId;
    float salary;
};

int main()
{
    
    struct employee emp = { "SOURYADIP GHOSH", 1680, 98098.00f };

    printf("\n Name: %s", emp.name);
    printf("\n Id: %d", emp.empId);
    printf("\n Salary: Rs.%f\n", emp.salary);
    
    return 0;
}
