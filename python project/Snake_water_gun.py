import random

'''
1 for snake
-1 for water 
0 for gun
'''
computer = random.choice([-1, 0, 1])  # Randomly select computer's choice
youDict = {"s": 1, "w": -1, "g": 0}   # Mapping user input to values
reverseDict = {1: "snake", -1: "water", 0: "gun"}  # Reverse mapping for output

# Taking user input
youstr = input("Enter your choice (s for snake, w for water, g for gun): ").lower()  # Convert to lowercase

# Checking if input is valid
if youstr not in youDict:
    print("Invalid input! Please enter 's', 'w', or 'g'.")
else:
    you = youDict[youstr]  # Converting user choice to number

    # Print choices
    print(f"You chose {reverseDict[you]}\nComputer chose {reverseDict[computer]}")

    # Checking the result
    if computer == you:
        print("It's a draw!")
    elif (computer == -1 and you == 1) or (computer == 1 and you == 0) or (computer == 0 and you == -1):
        print("You win!")
    else:
        print("You lose!")

    
