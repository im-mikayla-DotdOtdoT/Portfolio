# Python calculator

operator = input("Enter an operator (+ - * /): ") # user enters an operator (plus, minus, mult, div)
num1 = float(input("Enter the first number: ")) # enter first number as a float (decimal)
num2 = float(input("Enter the second number: ")) # enter second

# if statements depending on inputted operator
# perform operation
# print result
if operator == "+":
    result = num1 + num2
    print(result)
elif operator == "-":
    result = num1 - num2
    print(result)
elif operator == "*":
    result = num1 * num2
    print(result)
elif operator == "/":
    result = num1 / num2
    print(result)
else:
    print(f"{operator} is not a valid operator.")