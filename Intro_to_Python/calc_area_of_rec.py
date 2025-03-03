# Exercise 1: Calculate the area of a rectangle

length = input("Enter the length: ")
width = input("Enter the width: ")

# type casting: convert user input, which is a string, to integers
length = int(length)
width = int(width)
area = length * width

print(f"The area is: {area} cm².")