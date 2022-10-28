/*******************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 07_read_and_print_detailsof_student.c
 * Brief:  Program to read and print student details using structure pointer, 
 *         demonstrate example of structure with pointer.
 * Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 * Title: Project Engineer ruggedBoard.
 * Last Modified Date: 11.10.2022
 *
/*******************************/

#include <stdio.h>
 
struct student{
    char    name[30];
    int     roll;
    float   perc;
};

int main()
{
    struct student  std;         
    struct student  *ptr;        
     
    ptr= &std;                  
    printf("Enter details of student: ");
    printf("\nEnter the name of the student:");        
    gets(ptr->name);
    printf("Enter the roll no. of the student:");      
    scanf("%d",&ptr->roll);
    printf("Percentage secured:");    
    scanf("%f",&ptr->perc);
     
    printf("\nEntered details: ");
    printf("\nName:%s \nRollNo: %d \nPercentage: %.02f\n",ptr->name,ptr->roll,ptr->perc);

    return 0;
}
