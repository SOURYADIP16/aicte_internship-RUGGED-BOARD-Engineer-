''' 
 # © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 # this source code, object code, or executable code (collectively, Software), is granted only
 # under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 # or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 # the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 # For further information, contact community.ruggedboard.com / info@ruggedboard.com
 #
 # Application: oddeven_replace.py
 # Brief:  Program to replace all EVEN elements by 0 and Odd by 1 in list.
 # Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 # Title: Project Engineer ruggedBoard.
 # Last Modified Date: 19.10.2022
 #
'''

def sectionC(collection):  
    for index, item in enumerate(collection): # using better names than n, i
        if item % 2 == 0: # check if element is even
            collection[index] = 0
         
    return collection

collection=[5,2,7,8,10]
print("Our list: ",collection)
print("Even numbers are replaced by 0: ")
print([x if x % 2 != 0 else 0 for x in collection])
print("Odd numbers are replaced by 1: ")
print([x if x % 2 == 0 else 1 for x in collection])