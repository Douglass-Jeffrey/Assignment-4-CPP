// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Douglass Jeffrey
// Created on: oct 2019
// This program determines which number of two is larger

#include <iostream>
#include <string>

int main() {
    // this function determines which number of two is larger
    std::string usernumber1;
    std::string usernumber2;
    int intusernumber1;
    int intusernumber2;
    // input
    std::cout << "Enter your first number: ";
    std::cin >> usernumber1;
    std::cout << "" << std::endl;
    std::cout << "Enter your second number: ";
    std::cin >> usernumber2;
    std::cout << "" << std::endl;

    // process and output
    try {
        intusernumber1 = std::stoi(usernumber1);
        intusernumber2 = std::stoi(usernumber2);
        if (intusernumber2 < intusernumber1) {
            std::cout << "Your first number: " << intusernumber1;
            std::cout << " is greater than your second number: " <<
            intusernumber2;
        } else if (intusernumber2 > intusernumber1) {
            std::cout << "Your second number: " <<
            intusernumber2;
            std::cout << " is greater than your first number: " <<
            intusernumber1;
        } else {
            std::cout << "Both numbers are equivalent";
        }
    } catch (std::invalid_argument) {
        std::cout << "Please input proper integers";
    }
}
