// Copyright (c) 2022 Immaculata HS All rights reserved.
//
// Created by: Joseph Kwon
// Created on: Oct 18 2022
// This program checks if the user is eligible in
// dating the computer's grandchild

#include <iostream>

int main() {
    // initializing variables, max and min age has been initialized
    int secretNumber, userAgeAsInt;
    int maxAge = 40;
    int minAge = 25;
    std::string userAgeAsString;

    // Ask the user for their age as string so that "stoi"
    // can be used in the try catch
    std::cout << "The secret number is between 0-9 \n";
    std::cout << "What is your age: \n\n >> ";
    std::cin >> userAgeAsString;
    std::cout << "\n"
              << std ::endl;

    // process and output - "userAgeAsInt" is now the new user input (I think.)
    try {
        userAgeAsInt = std::stoi(userAgeAsString);
        // process, check if the user's age matches the requirements (25-40)
        // output string if statement is true
        if (userAgeAsInt >= minAge && userAgeAsInt <= maxAge) {
            std::cout << "You are eligible to date my grandchild";

            // process, check if the user's age does not match the requirements
        } else {
            std::cout << "You are not eligible to date my grandchild. ";
            std::cout << "you are " << userAgeAsInt << " years old \n";
        }

        // Similar to an else statement...
    } catch (std::invalid_argument) {
        std::cout << userAgeAsString <<
        " is not an integer. Please enter an integer";
    }
}
