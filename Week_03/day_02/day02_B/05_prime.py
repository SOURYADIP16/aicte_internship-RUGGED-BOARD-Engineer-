''' 
 # © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 # this source code, object code, or executable code (collectively, Software), is granted only
 # under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 # or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 # the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 # For further information, contact community.ruggedboard.com / info@ruggedboard.com
 #
 # Application: 05_prime.py
 # Brief:  Program to print all prime numbers from 1 to N.
 # Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 # Title: Project Engineer ruggedBoard.
 # Last Modified Date: 18.10.2022
 #
''' 
upto = int(input("Find prime numbers upto : "))

print("\nAll prime numbers upto", upto, "are : ")

for num in range(2, upto + 1):

    i = 2

    for i in range(2, num):
        if(num % i == 0):
            i = num
            break
    if(i != num):
        print(num, end=" ")