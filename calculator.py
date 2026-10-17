Create a command-line calculator that can perform basic arithmetic operations such as addition, subtraction, multiplication, and division. Additionally, add functionality for exponentiation, square root, and basic 
trigonometric functions (sin, cos, tan).

import math

# Arithmetic operations
def add(a, b):
    return a + b

def subtract(a, b):
    return a - b

def multiply(a, b):
    return a * b

def divide(a, b):
    if b == 0:
        raise ValueError("Cannot divide by zero.")
    return a / b

def power(a, b):
    return a ** b

def square_root(a):
    if a < 0:
        raise ValueError("Cannot find square root of a negative number.")
    return math.sqrt(a)

# Trigonometric functions (input in degrees)
def sine(a):
    return math.sin(math.radians(a))

def cosine(a):
    return math.cos(math.radians(a))

def tangent(a):
    if math.isclose(a % 180, 90, abs_tol=1e-10):
        raise ValueError("Tangent is undefined at this angle.")
    return math.tan(math.radians(a))

# Store previous results
history = []

while True:
    print("\n===== COMMAND-LINE CALCULATOR =====")
    print("1. Addition")
    print("2. Subtraction")
    print("3. Multiplication")
    print("4. Division")
    print("5. Exponentiation")
    print("6. Square Root")
    print("7. Sin")
    print("8. Cos")
    print("9. Tan")
    print("10. View Previous Results")
    print("11. Exit")

    choice = input("Enter your choice: ")

    if choice == "11":
        print("Thank you for using the calculator!")
        break

    if choice == "10":
        if history:
            print("\nPrevious Results:")
            for i, result in enumerate(history, start=1):
                print(f"{i}. {result}")
        else:
            print("No previous results available.")
        continue

    operations = {
        "1": ("Addition", add, 2),
        "2": ("Subtraction", subtract, 2),
        "3": ("Multiplication", multiply, 2),
        "4": ("Division", divide, 2),
        "5": ("Exponentiation", power, 2),
        "6": ("Square Root", square_root, 1),
        "7": ("Sin", sine, 1),
        "8": ("Cos", cosine, 1),
        "9": ("Tan", tangent, 1)
    }

    if choice not in operations:
        print("Invalid choice. Please try again.")
        continue

    name, operation, count = operations[choice]

    try:
        a = float(input("Enter 1st number: "))

        if count == 2:
            b = float(input("Enter 2nd number: "))
            result = operation(a, b)
            expression = f"{a} and {b}"
        else:
            result = operation(a)
            expression = str(a)

        record = f"{name}({expression}) = {result}"
        print("Result:", result)
        history.append(record)

    except ValueError as error:
        print("Invalid input:", error)
    except OverflowError:
        print("Error: The result is too large.")
    except (ArithmeticError, TypeError) as error:
        print("Calculation error:", error)
