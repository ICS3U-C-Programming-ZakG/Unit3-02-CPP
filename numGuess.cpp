// Copyright (c) 2023 Zak Goneau All rights reserved.
//
// Created by: Zak Goneau
// Date Created: Oct. 13, 2023
// This program makes the user guess a number from 0-9
// and says if it's correct or not.

#include <iostream>

// Declare constants
const int CORRECT_GUESS = 9;

// Declare variable
int user_guess;

int main() {
    std::cout << "This program is a guessing game and ";
    std::cout << "you must guess the correct number from 0-9!\n";
    std::cout << "Please guess a number from 0-9: ";
    std::cin >> user_guess;

    // Check if the user guess is correct or incorrect
    std::cout << "\n";
    if (user_guess == CORRECT_GUESS) {
    // Display being correct
    std::cout << "You guessed correctly!";
    }

    std::cout << "\n";
    if (user_guess != CORRECT_GUESS) {
    // Display being wrong
    std::cout << "You guessed incorrectly!";
    }
}
