''' 
 # © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 # this source code, object code, or executable code (collectively, Software), is granted only
 # under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 # or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 # the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 # For further information, contact community.ruggedboard.com / info@ruggedboard.com
 #
 # Application:  03_weekday_num_and_weekday.py
 # Brief:  Program to read weekday number and print weekday name using decision statements.
 # Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 # Title: Project Engineer ruggedBoard.
 # Last Modified Date: 18.10.2022
 #
'''
weekday = int(input("Enter weekday day number (1-7) : "))

if weekday == 1 :
    print("\nMonday");

elif weekday == 2 :
    print("\nTuesday")

elif(weekday == 3) :
    print("\nWednesday")

elif(weekday == 4) :
    print("\nThursday")

elif(weekday == 5) :
    print("\nFriday")

elif(weekday == 6) :
    print("\nSaturday")

elif (weekday == 7) :
    print("\nSunday")

else :
    print("\nPlease enter weekday number between 1-7.")