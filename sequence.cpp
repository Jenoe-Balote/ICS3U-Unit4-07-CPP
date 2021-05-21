// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Jenoe Balote
// Created on: May 2021
// This program prints all numbers 1000 to 2000
//      with five numbers printed each line

#include <iostream>

main() {
    // This function prints the numbers in the given range
    int loopSequence;

    // process & output
    for (loopSequence = 1000; loopSequence < 2000 + 1; loopSequence++) {
        if (loopSequence % 5 == 4) {
            std::cout << loopSequence << " " << std::endl;
        } else {
            std::cout << loopSequence << " ";
        }
    }
    std::cout << "" << std::endl;
    std::cout << "All done!" << std::endl;
}
