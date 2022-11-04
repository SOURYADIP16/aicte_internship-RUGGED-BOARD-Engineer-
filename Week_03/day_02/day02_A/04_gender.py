''' 
 # © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 # this source code, object code, or executable code (collectively, Software), is granted only
 # under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 # or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 # the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 # For further information, contact community.ruggedboard.com / info@ruggedboard.com
 #
 # Application: 04_gender.py
 # Brief:  Program to read gender (M/F) and print corresponding gender using decision statement. 
 # Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 # Title: Project Engineer ruggedBoard.
 # Last Modified Date: 18.10.2022
 #
'''
gender = input("Please enter your Gender (M/F) : ")

if (gender == "M" or gender == "m" or gender == "Male" or gender == "male"):
    print("The gender in Male")
elif (gender == "F" or gender == "f" or gender == "FeMale" or gender == "Female" or gender == "feMale" or gender == "female"):
    print("The gender is Female")
else:
    print("Please provide an appropriate format")