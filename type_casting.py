# type casting = the process of converting a variable from one data type to another
                    # sting(), int(), float(), bool()

name = "Mikayla"
age = 21
gpa = 3.75
is_student = True

print(type(name)) # print the variable type

gpa = int(gpa) # will convert to a different variable type (3.75 now becomes 3)
print(gpa)

age = float(age) # change integer to float (21 now becomes 21.0)
print(age)

age = str(age)
print(age) # although not written out in words, the integer now becomes a string. can check using type()
# because the integer variable now is a string, you cannot perform functions such as addition or subtraction.
# age + 1 would not work when it is a string
print(type(age))

name = bool(name) # booleans only return 'True' or 'False'
print(name)
# if the string variable was left empty (name = "") then boolean would return false
# = bool() can be a way to check user input

# type casting very useful when handling user input
