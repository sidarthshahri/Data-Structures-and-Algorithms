//
// Created by Sidarth Shahri on 5/9/17.
//

#include "intStack.h"

using namespace std;

intStack::intStack(int input) {
    size = input;
    top = 0;
    list = new int[size];
}

intStack::~intStack() {
    delete list;
}

void intStack::push(int input) {
    if((top + 1) >= size) {
        cout << "Stack is full!" << endl;
    } else {
        top++;
        list[top] = input;
    }
}

int intStack::pop() {
    if((top - 1) < -1) {
        cout << "Stack is empty!" << endl;
        return 0;
    } else {
        int returnValue = list[top];
        top--;
        return returnValue;
    }
}

bool intStack::isEmpty() {
    if(top == 0) {
        return true;
    } else
        return false;
}

int intStack::getTop() {
    return list[top];
}