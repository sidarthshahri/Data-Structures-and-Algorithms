//
// Created by Sidarth Shahri on 4/16/17.
//

#include "arrayStack.h"
#include <iostream>

using namespace std;

arrayStack::arrayStack(int input) {
    size = input;
    top = 0;
    list = new char[input];
}

arrayStack::~arrayStack() {
    delete list;
}

void arrayStack::push(char input) {
    if((top + 1) >= size) {
        cout << "Stack is full!" << endl;
    } else {
        top++;
        list[top] = input;
    }
}

char arrayStack::pop() {
    if((top - 1) <= -1) {
        cout << "Stack is empty!" << endl;
        return 0;
    } else {
        int returnValue = list[top];
        top--;
        return returnValue;
    }
}

bool arrayStack::isEmpty() {
    if(top == 0) {
        return true;
    } else
        return false;
}

char arrayStack::getTop() {
    return list[top];
}