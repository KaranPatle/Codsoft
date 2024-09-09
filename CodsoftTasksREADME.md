Task No-1
Basic Calculater Using C++

This C++ program functions as a basic calculator that performs arithmetic operations (addition, subtraction, multiplication, and division) based on user input. The program first prompts the user to input an operator (+, -, *, or /), followed by two numbers on which the operation will be performed.

Key Features:

Operator Input:
The user inputs a mathematical operator (+, -, *, or /).

Number Input:
The program then asks for two numbers as operands.

Switch-Case Structure:
A switch statement is used to determine the operation based on the user-selected operator.
The valid operations include:
Addition (+)
Subtraction (-)
Multiplication (*)
Division (/)

Division by Zero Check:
If the user selects division and attempts to divide by zero, the program handles this error gracefully by displaying an error message ("Error: Cannot divide by zero!").

Invalid Operator Handling:
If the user inputs an invalid operator, an error message ("Error: Invalid operator!") is displayed.

Example Operations:
Addition: If the user inputs + and numbers 5 and 3, the program outputs 5 + 3 = 8.
Division by Zero: If the user tries to divide by zero, the program outputs Error: Cannot divide by zero!.
This simple program demonstrates basic user input, conditional logic, error handling, and output formatting in C++.

Task No-2 
Number Guessing Game using C++

This C++ program implements a Number Guessing Game where the user attempts to guess a randomly generated number between 1 and 100. The game provides feedback after each guess, indicating whether the guess was too low or too high, and continues until the user correctly guesses the number.

Key Features:
Random Number Generation:

The program uses the rand() function, seeded with srand() and time(0) to generate a random number between 1 and 100.
User Interaction:

The user is prompted to guess a number repeatedly until they guess correctly.
After each guess, the program provides feedback:
If the guess is too low, it prompts the user to guess higher.
If the guess is too high, it prompts the user to guess lower.

Guess Counting:

The program keeps track of the number of attempts made by the user.
End Condition:

The game ends once the user correctly guesses the random number, at which point the program displays a congratulatory message along with the number of attempts made.
