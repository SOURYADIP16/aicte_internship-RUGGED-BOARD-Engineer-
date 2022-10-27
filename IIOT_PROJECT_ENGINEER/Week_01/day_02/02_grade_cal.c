/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 02_grade_cal.c
 * Brief:  Program to  calculate GRADE in your first semester.(Take input from user)
 * Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 * Title: Project Engineer ruggedBOARD
 * Last Modified Date: 27.09.2022
 *
/*********************************************************************************************/
  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>

  int main() {
        char str[100], ch;
        int i, n,grade[10];
        float credit[10], gpa = 0.0, totalCredit = 0.0;
/*O-Outstanding (Credit-5),,E-Excelent (Credit-4), A-Very Good (Credit-3),
B-good(Credit-2),C -Fair(Credit-1),D-Below average (Credit-0),F-Failed*/
        printf("Letter Grade and Credits for each subject:\n");
        for (i = 0; i <5; i++) {
                printf("Subject %d(Grade|Credit):", i + 1);
                ch = getchar();
                grade[i] = ch;
                scanf("%f", &credit[i]);
                getchar();
        }

        /* print the input grades and credits */
        printf("\nSubject | Grade | Credit\n");
        for (i = 0; i < 5; i++) {
                printf("   %d    |  %c    | %.0f\n", i + 1, grade[i], credit[i]);
        }

        /* calculate gpa value */
        for (i = 0; i < 5; i++) {
                switch (grade[i]) {
                        case 'O':
                                gpa = gpa + 10 * credit[i];
                                totalCredit = totalCredit + credit[i];
                                break;
                        case 'A':
                                gpa = gpa + 9 * credit[i];
                                totalCredit = totalCredit + credit[i];
                                break;

                        case 'B':
                                gpa = gpa + 8 * credit[i];
                                totalCredit = totalCredit + credit[i];
                                break;

                        case 'C':
                                gpa = gpa + 7 * credit[i];
                                totalCredit = totalCredit + credit[i];
                                break;

                        case 'D':
                                gpa = gpa + 6 * credit[i];
                                totalCredit = totalCredit + credit[i];
                                break;

                        case 'E':
                                gpa = gpa + 5 * credit[i];
                                totalCredit = totalCredit + credit[i];
                                break;

                        default:
                                printf("Given Wrong grade!!\n");
                                exit(0);

                }
        }
        printf("credit points index: %f\t total_credit: %f\n", gpa, totalCredit);
        gpa = gpa / totalCredit;
        printf("GPA for your score: %.2f\n", gpa);
        return 0;
  }
