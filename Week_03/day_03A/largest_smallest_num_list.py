''' 
 # © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 # this source code, object code, or executable code (collectively, Software), is granted only
 # under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 # or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 # the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 # For further information, contact community.ruggedboard.com / info@ruggedboard.com
 #
 # Application: largest_smallest_num_list.py
 # Brief:  Program to find Smallest and Largest elements from list.
 # Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 # Title: Project Engineer ruggedBoard.
 # Last Modified Date: 19.10.2022
 #
'''
def find_len(list1):
	length = len(list1)
	list1.sort()
	print("Largest element is:", list1[length-1])
	print("Smallest element is:", list1[0])
 
list1=[1, 45, 2, 10, 8, 6, 4]
Largest = find_len(list1)
