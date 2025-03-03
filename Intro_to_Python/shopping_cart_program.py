# Exercise 2: Shopping Cart Program

item = input("What item would you like to purchase?: ")
price = float(input("What is the price?: ")) # type cast input as float
quantity = int(input("How many would you like?: ")) # type cast as integer
total = price * quantity # get price total by mult.
print(f"Your total price for {quantity} {item} is: {total}.")
