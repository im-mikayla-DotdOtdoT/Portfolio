import math # <- import math module allows for more mathematical features
print(math.pi) # <- print the decimal 'pi'

sqrt_result = math.sqrt(9) # <- print square root of inserted variable/number in the parentheses
print(sqrt_result)

ceil_result = math.ceil(7.5) # <- ceiling function will always round a floating point number up
flr_result = math.floor(4.5) # <- floor function which always rounds a floating point number down
print(ceil_result)
print(flr_result)

# radius = float(input("Enter the radius: ")) <- user input radius
# Circumference = 2 * math.pi * radius <- find circumference with 2pi(r)
# area = math.pi * pow(radius, 2) <- find area with pi * radius^2
# print(f"The area of the circle is {round(area, 2)}cm^2")

# hypothesis of triangle = c = square root of a^2 + b^2
# a = float(input("Enter side A: "))
# b = float(input("Enter side B: "))
# c = math.sqrt(pow(a, 2) + pow(b, 2))
# print(f"Side C = {c}")


books = 0 # assign value to variable 'book'

# if you wanted to increase the number by 1...
# books = books + 1  this is a way to do so

books += 1 # the += performs the operation and automatically assigns the new value
            # this can be done with other basic operators (-= , *= , /=)
print(books)

# ** is for exponents
# books = books ** 2 ; can be written as books **= 2
# remainder of division (modulo) is %
# books = books % 5 ; can also be written as books %= 5

# built in math related functions

w = 5
x = 6.81
y = -2
z = 4

result = round(x) # round function to round a decimal
print(result)

# abs() finds the absolute value of a number
absolute = abs(y)
print(absolute)

# pow( , ) raises the first number/variable to the power of the second number/variable
power = pow(w, 3)
print(power)

# max( , , , ) gives maximum of the values
# min( , , , ) gives minimum of the values

largest = max(x, w, z)
print(largest)

smallest = min(x, w, z)
print(smallest)
