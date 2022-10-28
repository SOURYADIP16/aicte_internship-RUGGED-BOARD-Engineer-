/*******************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 04_employee_details_using_structure.c
 * Brief:  Program to read and print an employee's detail using structure.
 * Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 * Title: Project Engineer ruggedBoard.
 * Last Modified Date: 13.10.2022
 *
/*******************************/ 
 
#include <stdio.h>
  
struct employee{
    char    name[30];
    int     empId;
    float   salary;
};
 
int main()
{
    struct employee emp;
 
    printf("\nEnter details :\n");
    printf("Name:");          gets(emp.name);
    printf("ID:");            scanf("%d",&emp.empId);
    printf("Salary:");        scanf("%f",&emp.salary);
     
    printf("\nEntered detail is:");
    printf("Name: %s\n"   ,emp.name);
    printf("Id: %d\n"     ,emp.empId);
    printf("Salary: %f\n",emp.salary);
    return 0;
}
