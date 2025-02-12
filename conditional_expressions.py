# conditional expression -> a one-line shortcut for the if-else statement (ternary operator)
#                           Print or assign one of two values based on a condition
#                           x if condition else y

num = 5
newNum = 6
a = 4
b = 9
# x if (condition) else y
print("Positive" if num > 0 else "Negative")

result = "Even" if newNum % 2 == 0 else "Odd"
print(result)

max_num = a if a > b else b
print(max_num)
min_num = a if a < b else b
print(min_num)