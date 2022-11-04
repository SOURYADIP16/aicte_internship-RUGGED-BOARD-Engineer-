''' 
 # © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 # this source code, object code, or executable code (collectively, Software), is granted only
 # under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 # or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 # the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 # For further information, contact community.ruggedboard.com / info@ruggedboard.com
 #
 # Application: sum_product_list.py
 # Brief:  Program to calculate Sum, Product of all elements in list.
 # Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 # Title: Project Engineer ruggedBoard.
 # Last Modified Date: 19.10.2022
 #
'''

sum = 0
list1 = [1,2,3]
 
for ele in range(0, len(list1)):
	sum = sum + list1[ele]
     
def multiply(numbers):  
    total = 1
    for x in numbers:
        total *= x  
    return total  
 

print("Sum of all elements in given list: ", sum)
print("Product of all elements in given list: ",multiply((list1)))
