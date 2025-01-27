# This is my first python program
print("Hello, World!") # use double quotes or single quotes for print
print("My name is Mikayla!")

# Variables = string, integer, float, boolean
# use assignment operator (=) to assign value to variable
# use single or double quotes for strings

first_name = "Mikayla"
print(first_name) # when a value is assigned, no need to use quotes when using the variable itself. print("first_name") is not correct
# f_string: begin a string with f or F (meaning format), a set of quotes, then curly braces containing the variable
print(f"Hello {first_name}.")

# integers do not use quotes
age = 21
print(f"You are {age} years old.") # put f inside parentheses after print

# floats are decimals
gpa = 4.0
print(f"Your current GPA is {gpa}.")

# booleans are either true or false. the first letter is capital: False or True
is_student = True

if is_student: #use semicolon in if statement
    print("You are a student.") # no need to use f_string as no variable is being inserted
else:
    print("You are not a student.")


