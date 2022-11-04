''' 
 # © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 # this source code, object code, or executable code (collectively, Software), is granted only
 # under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 # or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 # the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 # For further information, contact community.ruggedboard.com / info@ruggedboard.com
 #
 # Application: 04_sum_avg_marks.py
 # Brief:  Program to find total and average marks using class
 # Author: SOURYADIP GHOSH ( souryadipghosh62@gmail.com )
 # Title: Project Engineer ruggedBoard.
 # Last Modified Date: 20.10.2022
 #
'''

numStudents = 0
ageList = list()
class student(object):
    def __init__(self, name, stuID, marks):
        self.name = name
        self.stuID = stuID
        self.marks = marks
    def student_display(self):
        global numStudents
        global ageLists
        numStudents = numStudents + 1
        stuID = str(self.stuID)
        marks = str(self.marks)
        ageList.append(self.marks)
        print(f"This student's name is {self.name}, his student ID is {stuID} and his marks is {marks}")
 
student1 = student("Justin", 10001, 100)
student2 = student("Charles", 10002, 89)
student3 = student("Erik", 10003, 20)
student4 = student("The Doctor", 99999,75)
student5 = student("Steven", 10004, 50)
student6 = student("Melissa", 10005, 99)
student7 = student("Sarah", 10006, 100)
student8 = student("Eren", 10007, 98)
students = 0                                            

print(student1.student_display())
print(student2.student_display())
print(student3.student_display())
print(student4.student_display())
print(student5.student_display())
print(student6.student_display())
print(student7.student_display())
print(student8.student_display())

print(f"There are {numStudents} students in the class.")

average = 0
sum = 0
for n in ageList:
    sum = sum + n
average = sum/len(ageList)

print(f"The total sum of marks in the class is {sum}.")
print(f"The average marks in the class is {average}.")