// Copyright (c) 2025 Dylan Mutabazi All rights reserved
// Created by Dylan Mutabazi
// Date: April 2025
// Guesses a number between 0-9 in a loop until you get it

#include <cstdlib>
#include <iostream>
#include <string>

int main() {
    // Seed random number generator with a fixed seed
    std::srand(1234);

    // Generate random number between 0-9
    int random_numb = std::rand() % 10;

    std::string user_numb;
    int user_numb_guess_int;

    // Loops until you guess correctly
    while (true) {
        std::cout << "Guess a number between (0-9): ";
        std::cin >> user_numb;

        // Tries to convert user input into integer
        try {
            user_numb_guess_int = std::stoi(user_numb);

            if (user_numb_guess_int < 0 || user_numb_guess_int > 9) {
                std::cout << "Guess is not between 0 and 9.";
                std::cout << "" << std::endl;
            } else if (user_numb_guess_int == random_numb) {
                std::cout << user_numb_guess_int << " is the correct guess!!!";
                std::cout << "" << std::endl;
                break;
            } else {
                std::cout << "Bad guess, try harder.";
                std::cout << "" << std::endl;
            }

            // Catches invalid arguments
        } catch (std::invalid_argument) {
            std::cout << "Guess is not an integer";
            std::cout << "" << std::endl;
        }
    }

    std::cout << "Thanks for playing!" << std::endl;
}
