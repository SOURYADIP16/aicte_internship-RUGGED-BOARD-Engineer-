''' 
 # © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 # this source code, object code, or executable code (collectively, Software), is granted only
 # under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 # or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 # the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 # For further information, contact community.ruggedboard.com / info@ruggedboard.com
 #
 # Application: swap_adjacent_element_list.py
 # Brief:  Program to swap adjacent elements of a List.
 # Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 # Title: Project Engineer ruggedBoard.
 # Last Modified Date: 19.10.2022
 #
'''

myList = []
length = int(input("Enter number of elements: "))
for i in range(0, length):
    val = int(input())
    myList.append(val)

print("Enter indexes to be swapped ")
index1 = int(input("index 1: "))
index2 = int(input("index 2: "))

print("Initial List: ", myList)
# Swapping given elements
myList[index1], myList[index2] = myList[index2], myList[index1]

# Printing list 
print("List after Swapping: ", myList)
