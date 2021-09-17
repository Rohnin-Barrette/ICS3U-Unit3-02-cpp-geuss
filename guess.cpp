// Copyright [2021] Rohnin Barrette"  [legal/copyright]

// Created by: Rohnin Barrette
// Created on: Sept 2021
// This program asks the user to guess a number between 1-9

#include <iostream>

int main() {
    // This program asks the user to guess a number between 1-9
    const int NUMBER = 5;
    int guessed_number;

    // input
    std::cout << "Enter a number between 1 and 9: ";
    std::cin >> guessed_number;
    std::cout << "" << std::endl;

    // process
    if (guessed_number != NUMBER) {
        // output
        std::cout << "you guessed wrong, try again !!!";
    }

    // process 2
    if (guessed_number == NUMBER) {
        // output
        std::cout << "You guessed it right";
    }
}
