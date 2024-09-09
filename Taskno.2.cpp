#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()

void number_guessing_game() {
    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    std::cout << "I'm thinking of a number between 1 and 100." << std::endl;

    srand(static_cast<unsigned int>(time(0))); // seed the random number generator
    int number_to_guess = rand() % 100 + 1;   // generate a random number between 1 and 100
    int attempts = 0;
    bool guessed = false;

    while (!guessed) {
        int guess;
        std::cout << "Make a guess: ";
        std::cin >> guess;
        attempts++;

        if (guess < number_to_guess) {
            std::cout << "Too low." << std::endl;
        } else if (guess > number_to_guess) {
            std::cout << "Too high." << std::endl;
        } else {
            std::cout << "Congratulations! You've guessed the number in " << attempts << " attempts." << std::endl;
            guessed = true;
        }
    }
}

int main() {
    number_guessing_game();
    return 0;
}
