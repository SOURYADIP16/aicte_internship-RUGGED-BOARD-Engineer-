''' 
 # © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 # this source code, object code, or executable code (collectively, Software), is granted only
 # under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 # or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 # the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 # For further information, contact community.ruggedboard.com / info@ruggedboard.com
 #
 # Application: 02_check_num_is_zero_positive_negative.py
 # Brief:  Program to check entered number is ZERO, POSITIVE or NEGATIVE until user
 #         does not want to quit.
 # Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 # Title: Project Engineer ruggedBoard.
 # Last Modified Date: 18.10.2022
 #
'''
 
n=2
while(1):
    n = float(input("Input a number: "))
    if n >= 0:
        if n == 0:
            print("It is Zero!")
        else:
            print("Number is Positive number.")
    else:
        print("Number is Negative number.")
         
    if(n):
        input("Want to check again (press Y/y for 'yes') :")
        break
input("Want to check again (press Y/y for 'yes') :")