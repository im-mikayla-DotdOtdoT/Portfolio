# validate username exercise
# 1.) username is no mor ethan 12 characters
# 2.) must contain no spaces
# 3.) must contain no digits

username = input("Enter a username: ")

if len(username) > 12: # check if username is greater than 12 characters
    print("Your username cannot be more than 12 characters.")
elif not username.find(" ") == -1: # if spaces found in username does not equal -1 (false)
    print("Username cannot contain spaces.")
elif not username.isalpha(): # if username does not only contain letters
    print("Username cannot contain numbers.")
else:
    print(f"Welcome {username}!")

