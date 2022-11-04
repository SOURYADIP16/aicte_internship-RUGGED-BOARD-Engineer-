''' 
 # © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 # this source code, object code, or executable code (collectively, Software), is granted only
 # under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 # or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 # the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 # For further information, contact community.ruggedboard.com / info@ruggedboard.com
 #
 # Application: 01_swap_two_number_using_bitwise_operator.py
 # Brief:  Program to swap two number using Bitwise operator.
 # Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 # Title: Project Engineer ruggedBoard.
 # Last Modified Date: 17.10.2022
 #
'''
a = int(input(" Please Enter the First Value : "))
b = int(input(" Please Enter the Second Value : "))

print("Before: a = {0} and b = {1}".format(a, b))

a = a^b
b = a^b
a = a^b

print("After: a = {0} and b = {1}".format(a, b))