''' 
 # © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 # this source code, object code, or executable code (collectively, Software), is granted only
 # under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 # or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 # the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 # For further information, contact community.ruggedboard.com / info@ruggedboard.com
 #
 # Application: 05_oddeven_using_class.py
 # Brief:  Write a menu driven program to read, display, add and subtract two distances.
 # Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 # Title: Project Engineer ruggedBoard.
 # Last Modified Date: 20.10.2022
 #
'''

class CodesCracker:
    def checkEvenOdd(self, n):
        if n%2==0:
            return 1

print("Enter a Number: ", end="")
num = int(input())

obj = CodesCracker()
chk = obj.checkEvenOdd(num)
if chk==1:
    print("Even Number")
else:
    print("Odd Number")