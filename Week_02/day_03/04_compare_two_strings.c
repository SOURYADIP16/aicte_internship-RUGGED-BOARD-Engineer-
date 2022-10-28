/*******************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 04_compare_two_strings.c
 * Brief:  Program to compare two strings using case and ignoring case without using 
 *         library functions.
 * Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 * Title: Project Engineer ruggedBoard.
 * Last Modified Date: 12.10.2022
 *
/*******************************/
#include <stdio.h>
#include <ctype.h>
 
int stringCmp (char *s1,char *s2);
int stringCmpi(char *s1,char *s2);
 
int main()
{
    char str1[100],str2[100];
 
	printf("Enter  string 1 : ");
    scanf("%[^\n]s",str1); 

    getchar();  
 
    printf("Enter  string 2 : ");
    scanf("%[^\n]s",str2); 
 
    if(!stringCmp(str1,str2))
        printf("\n stringCmp  :String are same.");
    else
        printf("\n stringCmp  :String are not same.");
 
    if(!stringCmpi(str1,str2))
        printf("\n stringCmpi :String are same.");
    else
        printf("\n stringCmpi :String are not same.");
 
 
    printf("\n");
    return 0;
}
 
int stringCmp (char *s1,char *s2)
{
    int i=0;
    for(i=0; s1[i]!='\0'; i++)
    {
        if(s1[i]!=s2[i])
            return 1;
    }
    return 0;
}
 
int stringCmpi (char *s1,char *s2)
{
    int i=0,diff=0;
    for(i=0; s1[i]!='\0'; i++)
    {
        if( toupper(s1[i])!=toupper(s2[i]) )
            return 1;           
    }
    return 0;
}
