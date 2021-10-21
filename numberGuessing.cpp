// copyright (c) 2020 Joshua Yeung All rights reserved

// Created by: Joshua Yeung
// Created on September 2021
// This program is a number guessing game.

#include <iostream>
#include <random>

int main() {
    // this function is to guessing the number
    // a number between 1 and 100
    int someRandomNumber;


    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0 , 100);  // [0,100]
    someRandomNumber = idist(rgen);


    std::cout << someRandomNumber << std::endl;
    int userInput;

    // input
    std::cout << "Enter a random number from 1 to 100 here: ";
    std::cin >> userInput;
    std::cout << "" << std::endl;

    // process
    if (userInput == someRandomNumber) {
        // output
        std::cout << "congratulations! you got it right";
    } else {
        std::cout << "oops! you got it wrong, try again";
    }

    std::cout << "" << std::endl;
    std::cout << "\nDone" << std::endl;
}
