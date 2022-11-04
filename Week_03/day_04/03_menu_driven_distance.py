''' 
 # © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 # this source code, object code, or executable code (collectively, Software), is granted only
 # under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 # or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 # the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 # For further information, contact community.ruggedboard.com / info@ruggedboard.com
 #
 # Application: 03_menu_driven_distance.py
 # Brief:  Write a menu driven program to read, display, add and subtract two distances.
 # Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 # Title: Project Engineer ruggedBoard.
 # Last Modified Date: 20.10.2022
 #
'''
class Dist: 
    def _init_(self): 
        self.dist1=0 
        self.dist2=0 
    def read(self): 
        self.dist1=int(input("Enter distance 1: ")) 
        self.dist2=int(input("Enter distance 2: ")) 
    def disp(self): 
        print("distance 1: " , self.dist1) 
        print("distance 2: " , self.dist2) 
    def add(self): 
        print("Total distances: ", self.dist1+self.dist2) 
    def sub(self): 
        print("Subtracted distance: " , self.dist1-self.dist2)  
d=Dist( ) 
choi = "y"
while(choi == "y"): 
    print("1.Read\n2.Display\n3.Total\n4.Subtract") 
    ch = int(input("Enter your choice: ")) 
    if(ch==1): 
        d.read( ) 
    elif(ch==2): 
        d.disp( ) 
    elif(ch==3): 
        d.add( ) 
    elif(ch==4): 
        d.sub( ) 
    else: 
         print("Invalid Input…") 
         choi = input("Do you want to continue") 