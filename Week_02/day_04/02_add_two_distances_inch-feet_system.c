/*******************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 02_add_two_distances_inch-feet_system.c
 * Brief:  Program to add two distances in feet and inches using structure.
 * Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 * Title: Project Engineer ruggedBoard.
 * Last Modified Date: 13.10.2022
 *
/*******************************/
#include <stdio.h>

struct Distance {
   int feet;
   float inch;
} d1, d2, result;

int main() {
 
   printf("Enter 1st distance\n");
   printf("Enter feet: ");
   scanf("%d", &d1.feet);
   printf("Enter inch: ");
   scanf("%f", &d1.inch);

   printf("\nEnter 2nd distance\n");
   printf("Enter feet: ");
   scanf("%d", &d2.feet);
   printf("Enter inch: ");
   scanf("%f", &d2.inch);
  
   result.feet = d1.feet + d2.feet;
   result.inch = d1.inch + d2.inch;

   while (result.inch >= 12.0) {
      result.inch = result.inch - 12.0;
      ++result.feet;
   }
   printf("\nSum of distances = %d\'-%.1f\"", result.feet, result.inch);
   return 0;
}