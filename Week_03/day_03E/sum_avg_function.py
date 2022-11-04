''' 
 # © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 # this source code, object code, or executable code (collectively, Software), is granted only
 # under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 # or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 # the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 # For further information, contact community.ruggedboard.com / info@ruggedboard.com
 #
 # Application: sum_avg_function.py
 # Brief:  Program to find SUM and AVERAGE of two integer Numbers using User Define Function
 # Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 # Title: Project Engineer ruggedBoard.
 # Last Modified Date: 19.10.2022
 #
'''

def sum(x,y):
    return x+y

def avg(x,y):
    return sum(x,y)//2

a= int(input("Enter first number:"))
b= int(input("Enter second number:"))

print("Sum of the given two numbers is: ", sum(a,b))
print("Average of the given numbers is: ", avg(a,b))