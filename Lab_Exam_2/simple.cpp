//
// Created by Sidarth Shahri on 4/11/17.
//

#include "simple.h"

ostream& operator<<(ostream& output, simple RHS) {
    output << RHS.number << RHS.letter;
}

void simple::setNumber(int inputNumber) {
    this->number = inputNumber;
}

void simple::setLetter(char inputLetter) {
    this->letter = inputLetter;
}