# if: Perform code only if the statement is true
#       else if (elif): perform different block of code if the statement is false
#           else: perform different code if previous statement(s) (if & elif) are false

# Check to see if user is eligible for a credit card (must be 18yrs old)
age = int(input("Enter your age: "))

if age >= 18: # if the user has inputted an age 18 or above...
    print("You are now signed up for a credit card!")
elif age <= 0: # else if statement
    print("The number you have entered is 0 or negative.")
else: # the previous if statement is not true, the user is under 18...
    print("You must be 18+ to sign up.")