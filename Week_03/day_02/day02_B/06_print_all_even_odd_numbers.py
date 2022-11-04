''' 
 # © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 # this source code, object code, or executable code (collectively, Software), is granted only
 # under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 # or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 # the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 # For further information, contact community.ruggedboard.com / info@ruggedboard.com
 #
 # Application: 06_print_all_even_odd_numbers.py
 # Brief:  Program to print all even and odd numbers from 1 to N.
 # Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 # Title: Project Engineer ruggedBoard.
 # Last Modified Date: 18.10.2022
 #
''' 

even_numbers = [] 
odd_numbers = [] 
start = 1 
end = int(input("Enter number upto you want to print: ")) 
for number in range(start, end + 1): 
	if number // 2 == number / 2: 
		even_numbers.append(number) 
	elif number // 2 != number / 2: 
		odd_numbers.append(number) 
print('Even numbers:', even_numbers) 
print('\n') 
print('Odd numbers:', odd_numbers)