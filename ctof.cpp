// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by Gabriel A
// Created on Dec 2020
// This program converts celcius to fahrenheit

#include <iostream>
#include <string>

void Fahrenheit() {
    // calculate celcius to fahrenheit

    float celcius;
    float fahrenheit;
    std::string cString;
    std::cout.precision(4);

    try {
        // input
        std::cout << "Enter the temperature in celcius: ";
        std::cin >> cString;
        celcius = std::stoi(cString);

        // process
        fahrenheit = (9.0 / 5.0) * celcius + 32.0;

        // output
        std::cout << "" << std::endl;
        std::cout << celcius << "ºc is " << fahrenheit << "ºf" << std::endl;

        if (celcius < -273.15) {
            std::cout << "" << std::endl;
            std::cout << "*this temperature is impossible." << std::endl;
        }
    } catch (std::invalid_argument) {
    std::cout << "That is not a number." << std::endl;
    }
}

main() {
    Fahrenheit();
    // call functions
}
