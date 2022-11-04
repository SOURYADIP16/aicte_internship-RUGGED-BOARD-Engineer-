''' 
 # © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 # this source code, object code, or executable code (collectively, Software), is granted only
 # under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 # or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 # the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 # For further information, contact community.ruggedboard.com / info@ruggedboard.com
 #
 # Application: grade_calculation.py
 # Brief:  Program to calculate GRADE in your first semester.(Take input from user)
 # Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 # Title: Project Engineer ruggedBoard.
 # Last Modified Date: 17.10.2022
 #
'''
markOne = int(input("Enter your marks in subject 1: "))
markTwo = int(input("Enter your marks in subject 2: "))
markThree = int(input("Enter your marks in subject 3: "))
markFour = int(input("Enter your marks in subject 4: "))
markFive = int(input("Enter your marks in subject 5: "))

tot = markOne+markTwo+markThree+markFour+markFive
avg = tot/5

if avg>=91 and avg<=100:
    print("Your Grade is Outstanding (O)")
elif avg>=81 and avg<91:
    print("Your Grade is Excellent (E)")
elif avg>=71 and avg<81:
    print("Your Grade is Very good (A)")
elif avg>=61 and avg<71:
    print("Your Grade is Good (B)")
elif avg>=51 and avg<61:
    print("Your Grade is Fair (C)")
elif avg>=41 and avg<51:
    print("Your Grade is Below average (D)")
elif avg>=33 and avg<41:
    print("Your Grade is Failed (F)")
else:
    print("Invalid Input!")
print(avg)