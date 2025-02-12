# logical operators -> evaluate multiple conditions (or, and, not)
#                       or -> at least one condition must be true
#                       and -> both conditions must be true
#                       not -> inverts the condition (true->false ; false->true)

temp = 25 # if changed to be >35, will return true
its_raining = True #if changed to false, the following condition could possibly be true depending on other conditions

# for "or" only ONE condtion needs to be true in order for the next block of code to be executed
if temp > 35 or temp < 0 or its_raining:
    print("The outdoor event is cancelled.") # if any of the 3 conditions is true...
else:
    print("The outdoor event is still scheduled.")

newTemp = 30
its_cloudy = True

if newTemp >= 30 and its_cloudy:
    print("The upcoming event is still scheduled.")
else:
    print("The upcoming event is cancelled.")

