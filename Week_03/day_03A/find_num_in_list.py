''' 
 # © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 # this source code, object code, or executable code (collectively, Software), is granted only
 # under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 # or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 # the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 # For further information, contact community.ruggedboard.com / info@ruggedboard.com
 #
 # Application: find_num_in_list.py
 # Brief:  Program to find a number from List elements.
 # Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 # Title: Project Engineer ruggedBoard.
 # Last Modified Date: 19.10.2022
 #
'''

myList = []
length = int(input("Enter number of elements: "))
for i in range(0, length):
    value = int(input())
    myList.append(value)
ele = int(input("Enter element to be searched in the list: "))

 
found = False
for i in myList:
    if(i == ele) :
        found = True
        break
if(found):
    print("Element found")
else :
    print("Element not found!")
