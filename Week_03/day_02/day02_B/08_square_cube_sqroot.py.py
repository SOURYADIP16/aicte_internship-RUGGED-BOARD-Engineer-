''' 
 # © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 # this source code, object code, or executable code (collectively, Software), is granted only
 # under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 # or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 # the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 # For further information, contact community.ruggedboard.com / info@ruggedboard.com
 #
 # Application: 08_square_cube_sqroot.py
 # Brief:  Program to print square, cube and square root of all numbers from 1 to N.
 # Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 # Title: Project Engineer ruggedBoard.
 # Last Modified Date: 18.10.2022
 #
''' 

n=int(input("Enter the number upto which you want the required result: "))

for i in range(1,n+1):
    print(f"The square of {i} : {i**2}")
    print(f"The cube of {i} : {i**3}")
    print(f"The square root of {i} : {i**0.5:.3f}")
    print()

    