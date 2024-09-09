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
