''' 
 # © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 # this source code, object code, or executable code (collectively, Software), is granted only
 # under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 # or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 # the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 # For further information, contact community.ruggedboard.com / info@ruggedboard.com
 #
 # Application: print_same_string_without_loop.py
 # Brief:  Program to print same string 10000 times without loop.
 # Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 # Title: Project Engineer ruggedBoard.
 # Last Modified Date: 17.10.2022
 #
'''
str=input("Enter a string: ")
multpr=int(input("Enter any number: "))
repeated_strg=str*multpr
splitd_strng=repeated_strg.split()
result= (splitd_strng)
print("Result= ",result)
