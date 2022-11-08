// Copyright (c) 2022 Patrice Pat-Odita  All rights reserved.
//
// Created by: Patrice Pat-Odita
// Date: Nov 3, 2022
// This program asks the user for a positive integer. It
// then calculates the sum of the numbers from 0 up to
// that integer.
#include <iostream>

int main() {
    // initialize the loop counter and sum
    int counter = 0;
    int sum = 0;
    int userNum;
    std::string userNumString;

    // get the user number as a string
    std::cout << "Enter a postive number: ";
    std::cin >> userNumString;
    std::cout << std::endl;

    try {
        // convert the user's guess to an int
        userNum = std::stoi(userNumString);
        std::cout << "" << std::endl;

        // check if the guess is correct
        if (userNum >0) {
            // calculate the sum of all numbers from 0 to user number
            while (counter <= userNum) {
                sum = sum + counter;
                std::cout << "Tracking " << counter
                 << " times through the loop.\n";
                counter = counter + 1;
            }
            // display the sum to the user
            std::cout << "\nThe sum of the numbers from 0 to " << userNum
            << " is:" << sum << std::endl;
        } else {
            std::cout << "You entered a negative number, please try again.";
        }
        // Tells the user that they didn't input an integer
    } catch (std::invalid_argument) {
        // The user did not enter an integer.
        std::cout << userNumString
        << " \033[1;35;38mis ""not an integer.\n";
        std::cout << "" << std::endl;
        std::cout << "\033[1;35;38mThanks for Playing.";
    }
}
