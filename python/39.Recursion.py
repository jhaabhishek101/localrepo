'''
factorial(0)=1
factorial(1)=1
factorial(2)=2 X 1
factorial(3)=3 X 2 X 1
factorial(4)=4 X 2 X 1

factorial(n)=n* factorial(n-1)
'''


def factorial(n):
    if n == 0 or n == 1: 
        return 1
    else:
        return n * factorial(n-1)  # Proper indentation bhai indentation imp h

n = int(input("Enter a number: "))  # Space after ":"
print(f"The factorial of this number is: {factorial(n)}")  # Removed ";"


