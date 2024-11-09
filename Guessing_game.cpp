#include <iostream>
#include <cstdlib> // Required for rand() and srand()
#include <ctime>   // Required for time()

int main() {
    // Set up a random number generator
    srand(time(0));

    int secret_number = rand() % 100 + 1; // Random number between 1 and 100
    int guess;
    int attempts = 0;

    // Show introductory message
    std::cout << "I have picked a number between 1 and 100. Try to guess it!" << std::endl;

    // Main guessing loop
    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;

        // Check if the input is valid
        while (std::cin.fail()) {
            std::cin.clear();                // Clear error state
            std::cin.ignore(10000, '\n');    // Ignore the invalid input
            std::cout << "Invalid input! Please enter a number: ";
            std::cin >> guess;               // Try to get a valid input again
        }

        attempts++; // Increment attempts with each guess

        // Check if guess is too high, too low, or correct.
        if (guess > secret_number) {
            std::cout << "Too high! Try again." << std::endl;
        } else if (guess < secret_number) {
            std::cout << "Too low! Try again." << std::endl;
        } else {
            std::cout << "You guessed it in " << attempts << " attempts." << std::endl;
        }
    } while (guess != secret_number); // Continue looping until the correct guess

    return 0;
}
