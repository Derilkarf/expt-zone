print("-----------CALCULATOR-----------")

op = input("Enter either (+ - * /): ")
num1 = float(input("Enter #1: "))
num2 = float(input("Enter #2: "))

match op:
    case '+':
        result = num1 + num2
        print(f"Result: {result}")

    case '-':
        result = num1 - num2
        print(f"Result: {result}")

    case '*':
        result = num1 * num2
        print(f"Result: {result}")

    case '/':
        result = num1 / num2
        print(f"Result: {result}")
        
    case _:
        print(f"That was not a valid response")

print("--------------------------------")