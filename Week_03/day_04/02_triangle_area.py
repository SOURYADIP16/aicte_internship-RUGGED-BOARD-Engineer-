''' 
 # © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 # this source code, object code, or executable code (collectively, Software), is granted only
 # under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 # or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 # the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 # For further information, contact community.ruggedboard.com / info@ruggedboard.com
 #
 # Application: 02_triangle_area.py
 # Brief:  Write a program using class to accept three sides of a triangle and print its area.
 # Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 # Title: Project Engineer ruggedBoard.
 # Last Modified Date: 20.10.2022
 #
'''
class Trianglearea:
    def __init__(self,a,b,c):
        self.a=float(a)
        self.b=float(b)
        self.c=float(c)
    def area(self):
        s=(self.a +self.b+self.c)/2
        return((s*(s-self.a)*(s-self.b)*(s-self.c)**0.5))
a=int(input("Enter the lenght of side a : "))
b=int(input("Enter the lenght of side b : "))
c=int(input("Enter the lenght of side c : "))

ar= Trianglearea(a,b,c)
print("The required area of the triangl abc : ",ar.area())
 