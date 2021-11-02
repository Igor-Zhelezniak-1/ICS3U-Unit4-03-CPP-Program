// Copyright (c) 2021 Igor All rights reserved
//
// Created by: Igor
// Created on: Nov 2021
// This is program

#include <iostream>
#include <string>
#include <cmath>

main() {
    // this function uses a while loop
    std::string integer;
    int answer;
    int number;

    // input
    std::cout << "Enter any positive number: ";
    std::cin >> integer;

    try {
        number = std::stoi(integer);
        if (number < 0) {
            std::cout << "You did not enter a positive number" << std::endl;
        } else {
            for (int loopCounter = 0; loopCounter < number + 1; loopCounter++) {
                double answer = loopCounter;
                std::cout << loopCounter << "² = "
                << pow(answer, 2) << std::endl;
            }
        }
    } catch (std::invalid_argument) {
        std::cout << "Please follow the instructions! Use numbers" << std::endl;
    }
    std::cout << "" << std::endl;
    std::cout << "Done" << std::endl;
}
