# Python weight converter

weight = float(input("Enter your weight: "))
unit = input("Kilograms or pounds? (K or L): ")

if unit == "L":
    weight = weight * 2.205
    unit = "Lbs"
    print(f"Your weight is: {round(weight, 1)} {unit}")
elif unit == "K":
    weight = weight / 2.205
    unit = "Kgs"
    print(f"Your weight is: {round(weight, 1)} {unit}")
else:
    print(f"{unit} was not a valid input.")