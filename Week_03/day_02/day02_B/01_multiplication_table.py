''' 
 # © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 # this source code, object code, or executable code (collectively, Software), is granted only
 # under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 # or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 # the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 # For further information, contact community.ruggedboard.com / info@ruggedboard.com
 #
 # Application: 01_multiplication_table.py
 # Brief:  Program to print tables from numbers 1 to 20.
 # Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 # Title: Project Engineer ruggedBoard.
 # Last Modified Date: 18.10.2022
 #
'''

for i in range(1,21):
    print("\n\nMULTIPLICATION TABLE FOR %d\n" %(i))
    for j in range(1,11):
        print("%-5d X %5d = %5d" % (i, j, i*j))
