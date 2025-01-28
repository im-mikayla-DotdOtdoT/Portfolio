# input() = A function that prompts the user to enter data
#               Returns the entered data as a string

name = input("What is your name?: ") # name = assigns user input to variable 'name'
print(f"Hello, {name}!") # user input assigned to variable and formatted to print

age = input("How old are you?: ") # assign variable, input("Prompt in quotes)
print(f"You are {age} years old.")

# because user input is returned as a string, use type casting to convert
# if you wanted age to be an integer: age = int(age).
# with this, you'll be able to perform functions such as addition
# if someone inputted 21: age = int(age). print(f"Happy Birthday! You are now {age(22)} years old!")