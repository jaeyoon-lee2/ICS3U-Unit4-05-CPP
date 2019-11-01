// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Jaeyoon Lee
// Created on: Oct 2019
// This program add numbers entered by the user

#include <iostream>

main() {
    // this function add numbers entered by the user
    std::string integerAsString;
    int integerAsNumber;
    int loopCounter = 0;
    int enteredNumber;
    int sumOfNumbers = 0;

    // input
    std::cout << "How many numbers are going to add (integer): ";
    std::cin >> integerAsString;

    // process & output
    try {
        integerAsNumber = std::stoi(integerAsString);
        for (loopCounter = 0; loopCounter < integerAsNumber ;
             loopCounter++) {
            std::cout << "Enter a number to add: ";
            std::cin >> enteredNumber;
            if (enteredNumber < 0) {
                continue;
            } else {
                sumOfNumbers = sumOfNumbers + enteredNumber;
            }
        } std::cout << "Sum of just the positive numbers is = " << sumOfNumbers << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "That was not a valid integer";
    }
}
